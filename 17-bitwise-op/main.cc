#include <iostream>

int main(int argc, char const *argv[]) {
  int x = 10;
  for (int i = 8; i >= 0; i--) {
    if ((x & (1LL << i)) != 0) {
      std::cout << 1;
    } else {
      std::cout << 0;
    }
  }
  std::cout << std::endl;
  return 0;
}
