#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <string>

/**
 * @brief The Singleton class
 *
 * The singleton ensures that there is only one instance of a class
 * at a time. In this implementation, there may be only one instance,
 * but there can be multiple pointers to this instance.
 *
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
    std::cout << m_message << m_singleton << std::endl;
  }

protected:
  Singleton() {}

  std::string m_message = "This object only exists once with the address: ";

  static Singleton* m_singleton;
};

// Unfortunately, in one must intialize static members outside of the class
Singleton* Singleton::m_singleton = nullptr;

#endif // SINGLETON_H

