#include <iostream>

template <typename T1, typename T2, typename T3>
auto complicatedFunc(T1 x, T2 y, T3 z)
{
  return (x * y) - (y * z);
}

int main(int argc, const char *argv[])
{
  int a, b, c = 5;
  std::cout << "res -> " << complicatedFunc(a, b, c) << std::endl;
}