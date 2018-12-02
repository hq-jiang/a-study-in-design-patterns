#include <iostream>
#include "singleton.h"

int main() {

  // New object is created
  Singleton* singleton = Singleton::CreateInstance();

  // Object creation is skipped, instead return pointer to existing object
  Singleton* singleton2 = Singleton::CreateInstance();

  singleton->Print();
  singleton2->Print();

  if (singleton==singleton2) {
    std::cout << "Pointers are the same" << std::endl;
  }

  // Will not compile, because constructor is protected
  //Singleton* singleton3 = new Singleton();

  // Memory of static member will be freed after the termination of main

}
