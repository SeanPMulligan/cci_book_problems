#include <iostream>
#include <array>
#include <string>

bool findPermutations(std::string s1, std::string s2) {
  std::array<int, 127> alpha = {0};

  for (char c1 : s1) {
    int n1 = int(c1);
    alpha[n1] = 1;
  }

  for (char c2 : s2) {
    int n2 = int(c2);
    alpha[n2] = 0;
  }

  for (int n : alpha) {
    if (n != 0) {
      return false;
    }
  }

  return true;
};

int main() {
  std::string permutation1 = "ABCdef";
  std::string permutation2 = "dAefCB";
  std::string permutation3 = "notapermutation";

  std::cout << "ABCdef and dAefCB are permutations? " << findPermutations(permutation1, permutation2) << std::endl;
  std::cout << "ABCdef and notapermutation are permutations? " << findPermutations(permutation1, permutation3) << std::endl;
}
