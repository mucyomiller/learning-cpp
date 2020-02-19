#include <chrono>
#include <iostream>
#include <thread>
struct Timer {
  // short for std::chrono::time_point<std::chrono::steady_clock>
  std::chrono::steady_clock::time_point start, end;
  std::chrono::duration<float> duration;

  Timer() { start = std::chrono::high_resolution_clock::now(); }
  ~Timer() {
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    float ms = duration.count() * 1000.0f;
    std::cout << "Timer took " << ms << "ms" << std::endl;
  }
};

void Function() {
  Timer timer;
  for (int i = 0; i < 100; i++) {
    std::cout << "Hello\n";
  }
}
int main(int argc, char const *argv[]) {

  // using namespace std::literals::chrono_literals;
  // auto start = std::chrono::high_resolution_clock::now();
  // std::this_thread::sleep_for(5s);
  // auto end = std::chrono::high_resolution_clock::now();
  // std::chrono::duration<float> duration = end - start;
  // std::cout << "time taken -> " << duration.count() << "s" << std::endl;
  Function();
  return 0;
}
