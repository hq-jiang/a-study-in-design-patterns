#include <iostream>
#include "singleton.h"

int main() {

  Singleton* singleton = Singleton::CreateInstance();
  Singleton* singleton2 = Singleton::CreateInstance();

  singleton->Print();
  singleton2->Print();

  if (singleton==singleton2) {
    std::cout << "pointers are the same" << std::endl;
  }

  //Singleton* singleton3 = new Singleton();
}
