#include <string>
#include <iostream>

std::string stringCompression(std::string str) {
  if (str.length() == 0) return str;

  std::string result = "";
  int count = 1;
  char curr = str[0];

  for (int i = 1; i <= str.length(); i++) {
    if (str[i] != curr) {
      result += curr;
      result += std::to_string(count);
      curr = str[i];
      count = 1;
    } else {
      count++;
    }
  }

  return result;
};

int main() {
  std::string str1 = "aabcccccaa";
  std::string str1Result = "a2b1c5a2";

  bool result = stringCompression(str1) == str1Result;

  std::cout << "Result is: " << result << std::endl;
}
