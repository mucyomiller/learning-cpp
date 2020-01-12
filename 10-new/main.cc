#include <iostream>

using String = std::string;

class Person
{
private:
  String firstname;
  String lastname;
  String address;
  int age;

public:
  Person() : firstname(""), lastname(""), address(""), age(0) {}
  Person(const String &fname, const String &lname, const String &addr, const int &num) : firstname(fname), lastname(lname), address(addr), age(num) {}
  const String &getFirstName() const { return firstname; }
  const String &getLastName() const { return lastname; }
  const String &getAddress() const { return address; }
  const int &getAge() const { return age; }
};

int main(int argc, char const *argv[])
{
  int a = 2;
  int *b = new int[50]; // 200 bytes int->4
  Person *p = new Person[50]; 
  
  // new placement
  // Person *p = new(b) Person(); 

  delete b;
  delete[] p;
  return 0;
}
