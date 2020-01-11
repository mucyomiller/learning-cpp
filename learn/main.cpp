#include <iostream>

void printString(const std::string &value)
{
  std::cout << value << std::endl;
}
int main(int argc, char *argv[])
{
  char x[]{'a', 'b', 'c'};
  const char *names = "mucyo fred";
  char names2[6] = {'m', 'u', 'c', 'y', 'o', '\0'};
  std::string fred = std::string("okay") + "fred";
  bool contains = fred.find("ok") != std::string::npos;
  // std::cout << names2 << " size -> " << strlen(names2) << std::endl;
  // printString(fred);
  std::cout << "value -> " << x[1] << std::endl;
}