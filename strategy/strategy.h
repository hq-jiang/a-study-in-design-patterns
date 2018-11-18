#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief The Strategy class
 *
 * This base class defines the function that all derived classes
 * have to implement.
 */
class Strategy {
public:
  virtual void Print(const std::vector<int>& a_vector) = 0;
};

class InOrderPrint : public Strategy {
public:
  void Print(const std::vector<int>& a_vector) {
    std::cout << "Using strategy InOrderPrint" << std::endl;
    for (int elem : a_vector) {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }
};


class ReverseOrderPrint : public Strategy {
public:
  void Print(const std::vector<int>& a_vector) {
    std::cout << "Using strategy ReverseOrderPrint" << std::endl;
    for (int i=a_vector.size()-1; i>=0; --i) {
      std::cout << a_vector[i] << " ";
    }
    std::cout << std::endl;
  }
};


class SortedOrderPrint : public Strategy {
public:
  void Print(const std::vector<int>& a_vector) {
    std::cout << "Using strategy SortedOrderPrint" << std::endl;

    std::vector<int> sorted_vector = a_vector;
    std::sort(sorted_vector.begin(), sorted_vector.end());

    for (int elem : sorted_vector) {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }
};


#endif // STRATEGY_H

