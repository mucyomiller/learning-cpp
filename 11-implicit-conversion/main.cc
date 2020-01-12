#include <iostream>

class Entity
{
private:
  std::string m_Name;
  int m_Age;

public:
  Entity(const char *name) : m_Name(name), m_Age(-1) {}
  // make this constructor explicit to disable this implicit conversion behavior
  Entity(int age) : m_Name("UNKNOWN"), m_Age(age) {}
  const std::string &getName() const { return m_Name; }
  const int &getAge() const { return m_Age; }
};

int main(int argc, char const *argv[])
{
  // regular stack allocation likes
  Entity a("fred");
  Entity aa = Entity("fred"); // same as above
  Entity b(22);
  Entity bb = Entity(22); // same as above

  Entity ee = 22; // implicit converted to Entity
  Entity ff = "fred";
  std::cout << "age -> " << ee.getAge() << std::endl;
  std::cout << "name -> " << ff.getName() << std::endl;
  std::cin.get();
  return 0;
}
