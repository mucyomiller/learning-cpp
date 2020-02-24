#include <iostream>
#include <unordered_map>
#include <vector>

int main(int argc, char *argv[]) {
  std::unordered_map<char, int> freq_map;
  std::vector<char> V{'a', 'b', 'a', 'c'};

  for (auto chr : V) {
    freq_map[chr]++;
  }

  for (auto it : freq_map) {
    std::cout << it.first << " - " << it.second << '\n';
  }

  return 0;
}