#include <iostream>
#include <string>
std::string URLify(std::string s) {
  std::string result = "";
  int spaces = 0;

  for (char c : s) {
    if (c == ' ') {
      spaces++;
    } else if (c != ' ' && spaces != 0){
      result += "%20";
      result += c;
      spaces = 0;
    } else {
      result += c;
    }
  }

  return result;
};

int main() {
  std::string url = "Mr John Smith      Jr     ";
  std::cout << URLify(url) << std::endl;
}
