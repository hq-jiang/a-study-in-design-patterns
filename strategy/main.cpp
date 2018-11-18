#include <iostream>
#include "printer.h"
#include "strategy.h"

/** Strategy Pattern
 *
 * The main idea of the strategy pattern is to encapsulate algorithms
 * in an object. The key to appling the this pattern is designing interfaces
 * for the strategy and its content that are general enough to support
 * a range of algorithms.
 *
 * Printer does not have to know, which strategies exist, as long
 * the interface which is the Print function is defined. Adding new
 * strategies one does not have to change the Printer class
 *
 */


int main() {
  // Create to be printed vector
  std::vector<int> vector = {0,1,2,6,5,4,3,7,8,9};

  // Instantiate printer object which represents the user interface
  Printer printer;


  // Set different strategies to print out vector
  printer.SetStrategy(new InOrderPrint);
  printer.Print(vector);

  printer.SetStrategy(new ReverseOrderPrint);
  printer.Print(vector);

  printer.SetStrategy(new SortedOrderPrint);
  printer.Print(vector);
}
