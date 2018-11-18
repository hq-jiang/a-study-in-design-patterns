#ifndef PRINTER_H
#define PRINTER_H

#include <vector>
#include "strategy.h"


class Printer {

public:

  // Free memory after usage
  ~Printer() {
    if (m_strategy != NULL) {
      delete m_strategy;
    }
  }

  /**
   * @brief Print print vector with a strategy
   * @param a_vector print this vector
   *
   * User interface of printer, the underlying algorithm is
   * encapsulated and the function does not need to know
   * which algorithms exist and what their name is.
   * Adding a new strategy does not affect this class
   */
  void Print(const std::vector<int> a_vector) {
    m_strategy->Print(a_vector);
  }

  /**
   * @brief SetStrategy Set a printing strategy
   * @param a_strategy chosen strategy
   */
  void SetStrategy(Strategy* a_strategy) {
    /** When replacing strategy, release the memory of
     * the previous strategy object
     */
    if (m_strategy != NULL) {
      delete m_strategy;
    }
    m_strategy = a_strategy;
  }


  Strategy* m_strategy = NULL;
};



#endif // PRINTER_H

