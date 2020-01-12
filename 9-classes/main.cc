#include <iostream>
using String = std::string;

class Entity
{
private:
  String m_Name;

public:
  Entity() : m_Name("UNKNOWN") {}
  Entity(const String &name) : m_Name(name) {}
  const String &getName() const { return m_Name; }
};

int main(int argc, char const *argv[])
{
  Entity e("fred"); // allocate mem in stack
  std::cout << e.getName() << std::endl;

  Entity e1 = Entity("mucyo"); // 2nd way to allocate obj in stack
  std::cout << e1.getName() << std::endl;

  // heap allocation
  Entity *e2 = new Entity("h_mucyo");
  std::cout << (*e2).getName() << std::endl;
  delete e2;
  return 0;
}
