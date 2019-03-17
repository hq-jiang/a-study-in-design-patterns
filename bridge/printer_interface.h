#ifndef PRINTER_INTERFACE_H
#define PRINTER_INTERFACE_H

#include <iostream>
#include "printer_implementation.h"


/* The printer interface is exposed to the user. He can choose the basic
 * PrinterInterface or the extended WifiPrinterInterface, which adds
 * some functionality. The implementation is encapsulated in an other class.
 * In our example we manually set the printer implementation but one could
 * also completely hide the implementation from the client, by automatically
 * setting the implementation.
 *
 */
class PrinterInterface {
public:
  PrinterInterface(PrinterImplementation *a_printer_imp){
    m_printer_imp = a_printer_imp;
  }

  void SetPrinterImplementation(PrinterImplementation *a_printer_imp) {
    m_printer_imp = a_printer_imp;
  }

  virtual void Print() {
    m_printer_imp->Print();
  }

  PrinterImplementation* m_printer_imp;
};

class WifiPrinterInterface : public PrinterInterface {
public:

  WifiPrinterInterface(PrinterImplementation *a_printer_imp) : PrinterInterface(a_printer_imp){
  }

  void ConnectWifi() {
    std::cout << "Connecting to wifi" << std::endl;
  }

  /// The new interface defines an additional step which is not platform dependent (in our sample case)
  virtual void Print() {
    ConnectWifi();
    m_printer_imp->Print();
  }


};

#endif // PRINTER_INTERFACE_H

