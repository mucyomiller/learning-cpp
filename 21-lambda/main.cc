#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

void ForEach(const std::vector<int> &values,
             const std::function<void(int)> &func) {}
int main(int argc, char const *argv[]) {
  std::vector<int> values{1, 2, 4, 3, 5};
  auto it = std::find_if(values.begin(), values.end(),
                         [](int value) { return value > 3; });
    std::cout << *it << std::endl;
  int a = 5; // local val
  auto lambda = [=](int value) {
    std::cout << "some val ->" << a << "value : " << value << std::endl;
  };
  ForEach(values, lambda);
  return 0;
}
