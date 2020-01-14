#include <iostream>

using String = std::string;

class Person
{
private:
  String names;

public:
  Person() : names("") {}
  const String &getNames() const { return names; }
};

class ScopedPtr
{
private:
  Person *p;

public:
  ScopedPtr(Person *ptr) : p(ptr) {}
  ~ScopedPtr() { delete p; }
};

int main(int argc, char const *argv[])
{
  // here c++ do implicity type conversion from Person to ScopedPtr 
  // as long as we goes out of scope our new Person() we'll be deleted out of heap automatically
  // ScopedPtr is handling that for us we don't need to do it again
  ScopedPtr e = new Person(); 
  // usually the above code equal to this  ScopedPtr e(new Person()); or ScopedPtr e = ScopedPtr(new Person());
  // no need for this here -> delete e;
  return 0;
}
