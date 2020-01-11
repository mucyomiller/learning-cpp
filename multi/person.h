#ifndef person_h
#define person_h
#include<string>

using namespace std;

class Person {
  private:
    string name;
  public:
    Person();
    Person(string theName);
    string getName();
    void setName(string newname);
};
#endif
