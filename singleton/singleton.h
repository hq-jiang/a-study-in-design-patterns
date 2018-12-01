#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

/**
 * @brief The Singleton class
 *
 * Singleton could have itsself as a static member or as a pointer
 */
class Singleton {
public:
  static Singleton* CreateInstance() {
    if (m_singleton == nullptr) {
      m_singleton = new Singleton();
    }
    return m_singleton;
  }

  void Print() {
    std::cout << "Printed" << std::endl;
  }

// TODO: Destructor

protected:
  Singleton() {}

  static Singleton* m_singleton;
};

Singleton* Singleton::m_singleton = nullptr;

#endif // SINGLETON_H

