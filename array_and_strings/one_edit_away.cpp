#include <iostream>
#include <set>

void oneAway(std::string str1, std::string str2) {
  std::set<char> count;

  for (char c1 : str1) {
    if (count.find(c1) != count.end()) {
      count.erase(c1);
    } else {
      count.insert(c1);
    }
  }

  for (char c2 : str2) {
    if (count.find(c2) != count.end()) {
      count.erase(c2);
    } else {
      count.insert(c2);
    }
  }

  bool result = count.size() <= 2;

  std::cout << result << std::endl;
}

int main() {
  std::string pales = "pales";
  std::string pale = "pale";
  std::string bale = "bale";
  std::string ple = "ple";

  std::string bank = "bank";
  std::string ranked = "ranked";

  std::string bake = "bake";

  //true
  oneAway(pales, pale);
  oneAway(pale, bale);
  oneAway(pale, ple);

  //false
  oneAway(bank, ranked);
  oneAway(pale, bake);
}
