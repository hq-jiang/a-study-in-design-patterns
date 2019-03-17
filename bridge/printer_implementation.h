#ifndef PRINTER_IMPLEMENTATION_H
#define PRINTER_IMPLEMENTATION_H

#include <iostream>

/* This class specifies the implementation of the Print() function.
 * We have a Windows and a Unix version. This class by itself is
 * very similar to the strategy pattern. But this pattern could be used
 * to define the implementation not for only one strategy but also for
 * a whole system. Additionally, the interface itself might change, which
 * this class does not care about.
 */

class PrinterImplementation {
public:
  virtual void Print() = 0;
};

class WindowsPrinterImp : public PrinterImplementation {
public:
  virtual void Print() {
    std::cout << "Hello World, printed by Windows implementation" << std::endl;
  }
};

class UnixPrinterImp : public PrinterImplementation {
public:
  virtual void Print() {
    std::cout << "Hello World, printed by Unix implementation" << std::endl;
  }
};

#endif // PRINTER_IMPLEMENTATION_H

