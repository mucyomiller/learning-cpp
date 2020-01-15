#include <iostream>
#include <memory>
#include<algorithm>

using String = std::string;

class Person
{
private:
  String names;

public:
  Person() : names("") {}
  const String &getNames() const { return names; }
  void Print()
  {
    std::cout << "hello from Person" << std::endl;
  }
};

int main(int argc, const char *argv[])
{ 
  std::unique_ptr<Person> person = std::make_unique<Person>(); // expection safety 
  person->Print();
  // if you don't mind about expections the u can do = new Person(); but you should :) care!.
  //shared pointers
  std::shared_ptr<Person> p = std::make_shared<Person>(); // here with this one you saved 1 allocation
  // if you use new Person() u will be doing behind the hound 2 allocation 
  //  because shared_ptr actually has to allocate block of memory 
  // called control  block that store reference count!
  //  by using that standard way it do it at same time and 
  p->Print();

  std::weak_ptr<Person> e = std::make_shared<Person>(); // doesn't create control block but you can check if it's still valid before using it.

  return 0;
}