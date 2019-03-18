#include "subscriber.h"

void Table::Update() {
  m_observed_number = this->m_publisher->GetNumber();
  std::cout << "Table observes number: " << m_observed_number << std::endl;
}


void Chart::Update() {
  m_observed_number = this->m_publisher->GetNumber();
  std::cout << "Chart observes number: " << m_observed_number << std::endl;
}
