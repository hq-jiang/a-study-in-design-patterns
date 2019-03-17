#include <iostream>
#include "printer_interface.h"
#include "printer_implementation.h"

/* The bridge pattern is used when the user interface and the implementation
 * can change independently from each other in different combinations.
 * By seperating the interface and the implementation with this bridge,
 * both can be specialized from independently.
 * This can be seen as a more generalized form of the strategy pattern,
 * where in the implementation can be changed at run-time but is bound
 * to the class.
 * In this example we have two interfaces and two implementations, which
 * can be used interchangeably. This leads to four different combinations.
 */
int main() {

  auto* windows_printer_imp = new WindowsPrinterImp();
  auto* unix_printer_imp = new UnixPrinterImp();

  PrinterInterface printer(windows_printer_imp);
  printer.Print();

  printer.SetPrinterImplementation(unix_printer_imp);
  printer.Print();

  WifiPrinterInterface wifi_printer(windows_printer_imp);
  wifi_printer.Print();

  wifi_printer.SetPrinterImplementation(unix_printer_imp);
  wifi_printer.Print();

}
