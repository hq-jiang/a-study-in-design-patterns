#include <iostream>
#include "printer.h"
#include "strategy.h"

/** Strategy Pattern
 *
 * The main idea of the strategy pattern is to encapsulate algorithms
 * in an object. The key in applying this pattern is to design interfaces
 * for the strategy that are general enough to support a range of algorithms.
 *
 * Printer does not have to know, which strategies exist, as long as
 * the interface (Print function) is defined. Adding new
 * strategies does not require changing the Printer class
 *
 */


int main() {
  // Create vector we want to print
  std::vector<int> vector = {0,1,2,6,5,4,3,7,8,9};

  // Instantiate printer object which represents the user interface
  Printer printer;


  // Set different strategies to print vector
  printer.SetStrategy(new InOrderPrint);
  printer.Print(vector);

  printer.SetStrategy(new ReverseOrderPrint);
  printer.Print(vector);

  printer.SetStrategy(new SortedOrderPrint);
  printer.Print(vector);
}
