#include <iostream>

int main(int argc, char *argv[])
{
  const char* names = "mucyo fred";
  char names2[6] = {'m','u','c','y','o', '\0'};
  std::string fred = "okay";
  std::cout << names2 << std::endl;
}