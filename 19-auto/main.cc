#include <iostream>
#include <unordered_map>
#include <vector>

std::string GetName() { return "mucyo miller"; }

class Device {};
class DeviceManager {
private:
  std::unordered_map<std::string, std::vector<Device *>> m_Devices;

public:
  const std::unordered_map<std::string, std::vector<Device *>> &
  GetDevices() const {
    return m_Devices;
  }
};

int main(int argc, char const *argv[]) {
  /* code */
  auto a = 5;
  auto names = GetName();
  std::cout << a << std::endl;
  std::cout << "Names -> " << names << std::endl;

  std::vector<std::string> strings;
  strings.emplace_back("miller");
  strings.emplace_back("mucyo");

  // w/o auto
  for (std::vector<std::string>::iterator it = strings.begin();
       it != strings.end(); it++) {
    std::cout << *it << std::endl;
  }
  // with auto
  for (auto it = strings.begin(); it != strings.end(); it++) {
    std::cout << *it << std::endl;
  }
  // using range
  for (auto &x : strings) {
    std::cout << x << std::endl;
  }

  // device manager
  DeviceManager dm;
  const std::unordered_map<std::string, std::vector<Device *>> &devices_ =
      dm.GetDevices(); // lengthy
  // use can just use
  // auto devices = dm.GetDevices(); will do copy even if GetDevices returns
  // ref;
  const auto &devices = dm.GetDevices();

  /* rules of thumb
  use auto for long types
  and again if we dont really or need to know type
  usually when we are dealing with templates
  */
  return 0;
}