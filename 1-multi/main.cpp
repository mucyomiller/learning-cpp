#include<iostream>
#include<string>
#include "person.h"

using namespace std;

int main(int argc, char ** argv){
  Person* person = new Person();
  person->setName("Fred");
  cout<< "hello ->" << person->getName() << endl;
  delete person;
  return 0;
}