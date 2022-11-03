#include <iostream>

int main () {
  int a = 2, b = 3;
  double x = 0.4, y = 1.2;
  std::cout << double(int(x) / double(a + 1)) << std::endl;
  return 0;
}
