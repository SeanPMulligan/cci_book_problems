#include <iostream>
#include <map>

void isRotation(std::string s1, std::string s2) {
  std::map<char, int> count;

  for (char c1 : s1) {
    auto it = count.find(c1);
    if (it != count.end()) {
      it->second++;
    } else {
      count[c1] = 1;
    }
  }

  for (char c2 : s2) {
    auto it = count.find(c2);
    if (it != count.end()) {
      it->second--;
    } else {
      count[c2] = 1;
    }
  }

  for (auto it : count) {
    if (it.second != 0) {
      std::cout << "False" << std::endl;
      return;
    }
  }

  std::cout << "True" << std::endl;
}

int main() {
  std::string s1 = "waterbottle";
  std::string s2 = "erbottlewat";
  std::string s3 = "cat";

  isRotation(s1, s2);
  isRotation(s1, s3);
}
