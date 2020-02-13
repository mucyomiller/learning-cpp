#include <array>
#include <iostream>
#include <vector>

void HelloWorld() { std::cout << "hello world!" << std::endl; }

void PrintValue(const int value) { std::cout << value << std::endl; }

void ForEach(const std::vector<int> &values, void (*func)(int)) {
  for (auto value : values) {
    func(value);
  }
}
int main(int argc, char const *argv[]) {
  auto function = HelloWorld; // implicitly got &HelloWorld
  function();
  function();
  // types
  // actual type void(*)() -> void(*function)();
  // eg:
  void (*fred)() = HelloWorld;
  fred();
  // better way
  typedef void (*HelloWorldFunc)();
  HelloWorldFunc func = HelloWorld;
  func();

  // actual usage
  std::vector<int> values{1, 2, 3, 4, 5};
  ForEach(values, PrintValue);

  //  better way using lambda
  ForEach(values, [](int val) { std::cout << val << std::endl; });

  return 0;
}