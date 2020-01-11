#include <iostream>
#include <vector>

int main(int argc, const char *argv[])
{
  std::vector<int> a{1, 2, 3, 4, 5};
  a.push_back(6);
  std::vector<int>::iterator b = a.begin();
  while (b != a.end())
  {
    std::cout << *b << std::endl;
    b++;
  }
  std::cout << "vector size" << a.size() << std::endl;
}