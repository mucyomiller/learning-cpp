#include <iostream>

template <class F, class... Args>
void for_each_argument(F f, Args &&... args)
{
  [](...) {}((f(std::forward<Args>(args)), 0)...);
}

int main(int argc, const char *argv[])
{
  for_each_argument(
      [](const auto &x) { std::cout << x; },
      "hello",
      1,
      2,
      3);
  std::cout << std::endl;
  return 0;
}