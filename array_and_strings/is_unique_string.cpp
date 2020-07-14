#include <iostream>
#include <array>
#include <string>

bool isUnique(std::string s) {
  std::array<int, 128> alpha = {0};

  for (char c : s) {
    int n = int(c);

    if (alpha[n] != 0) {
      return false;
    }

    alpha[n] = 1;
  }

  return true;
};

int main() {
  std::string unique = "abcdefgz";
  std::string nonUnique = "AAAAA";

  std::cout << "Unique should be true : " << isUnique(unique) << std::endl;
  std::cout << "NonUnique should be false: " << isUnique(nonUnique) << std::endl;
};
