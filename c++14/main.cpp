#include <iostream>

auto sum(int a, int b)
{
  return a + b;
}
auto func1()
{
  std::string names{"mucyo fred"};
  return names;
}
static_assert(std::is_same<decltype(func1()), std::string>(), "");

const auto& func2(){
  static std::string me{"mehh"};
  return me;
}

static_assert(std::is_same<decltype(func2()), const std::string&>(), "");

int main(int argc, const char *argv[])
{
  int a, b;
  // std::cout << "enter a & b" << std::endl;
  // std::cin >> a >> b;
  // std::cout << "sum is ->" << sum(a, b) << std::endl;
  std::cout<< func1() << std::endl;
}