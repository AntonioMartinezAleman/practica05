#include <iostream>

int main() {
   int a, b, tmp;
   std::cin >> a >> b;
   if (a > b) {
      tmp = a;
      a = b;
      b = tmp;
   }
   std::cout << a << " < " << b << std::endl;
}

