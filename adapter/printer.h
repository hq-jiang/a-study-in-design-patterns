#ifndef PRINTER
#define PRINTER

#include "book.h"

class Printer {
public:

  void Publish(Book* a_book) {
    a_book->Print();
  }

};

#endif // PRINTER

