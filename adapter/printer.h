#ifndef PRINTER
#define PRINTER

#include "book.h"


/**
 * @brief The Printer class
 *
 * This class expects a Book class that implements a Print() function.
 * Although this project serves as example for the adapter pattern,
 * we also make use of the strategy pattern, which defines a simple
 * interface.
 */
class Printer {
public:

  void Publish(Book* a_book) {
    a_book->Print();
  }

};

#endif // PRINTER

