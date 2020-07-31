#include <iostream>
#include <string>
#include <set>

void validPermutationPalindrome(std::string str) {
  std::set<char> count;

  for (char c : str) {
    if (count.find(c) != count.end()) {
      count.erase(c);
    } else {
      count.insert(c);
    }
  }

  bool result = count.size() <= 2;

  std::cout << result << std::endl;
}

int main() {
  std::string palindrome = "taco cat";
  std::string palindrome2 = "aa"; 
  std::string palindrome3 = "ra ce car";
  std::string palindrome4 = "si de car";

  //true
  validPermutationPalindrome(palindrome);
  validPermutationPalindrome(palindrome2);
  validPermutationPalindrome(palindrome3);

  //false
  validPermutationPalindrome(palindrome4);

}
