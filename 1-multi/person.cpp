#include "person.h"

using namespace std;

Person::Person(string theName){
  this->name = theName;
}

string Person::getName(){
  return this->name;
}
void Person::setName(string newname) {
  this->name = newname;
}
