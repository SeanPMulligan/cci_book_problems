#include <array>
#include <iostream>

int main() {
  std::array<std::array<int, 3>, 3> matrix = {{
    { 0, 1, 3 },
    { 3, 5, 0 },
    { 2, 4, 1 },
  }};

  for (int i = 0; i < matrix[0].size(); i++) {
      for (int j = i; j < matrix.size(); j++) {
          int temp = matrix[i][j];
          matrix[i][j] = matrix[j][i];
          matrix[j][i] = temp;
      }
  }
  
  for (int k = 0; k < matrix.size(); k++) {
      int i = 0;
      int j = matrix[0].size() - 1;
      while (i < j) {
          int temp = matrix[k][i];
          matrix[k][i] = matrix[k][j];
          matrix[k][j] = temp;
          i++;
          j--;
      }
  }
}
