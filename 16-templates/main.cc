// template are more powerful than most other lang generics
#include <iostream>

template <typename T> void print(T value) { std::cout << value << std::endl; }

template <typename T, int N> class Array {  
private:
  T arr[N];

public:
  int size() { return N; }
};

int main(int argc, char const *argv[]) {
  /* code */
  print(5);
  print("mucyo miller");
  print(5.6f);

  // custom stack allocated Array
  Array<int, 5> arr;
  std::cout << arr.size() << std::endl;
  return 0;
}
