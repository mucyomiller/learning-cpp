#include <iostream>
#include <string>
#include <vector>

struct Vertex {
  float x, y, z;
};

int main(int argc, char const *argv[]) {
  std::vector<Vertex> vertices;
  vertices.reserve(3);
  vertices.emplace_back(1, 2, 3);
  vertices.emplace_back(4, 5, 6);
  std::cout << "hello" << std::endl;
  return 0;
}