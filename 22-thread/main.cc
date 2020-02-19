#include <iostream>
#include <thread>
static bool is_finished = false;
void Compute() {
  using namespace std::literals::chrono_literals;

  std::cout << "started on Thread Id ->" << std::this_thread::get_id()
            << std::endl;
  while (!is_finished) {
    std::cout << "computing...." << std::endl;
    std::this_thread::sleep_for(1s);
  }
}

int main(int argc, char const *argv[]) {
  std::thread worker(Compute);

  std::cin.get();
  is_finished = true;

  worker.join();
  std::cout << "Finished" << std::endl;
  std::cout << "started on Thread Id ->" << std::this_thread::get_id()
            << std::endl;
  std::cin.get();
  return 0;
}
