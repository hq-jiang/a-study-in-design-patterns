#include "publisher.h"
#include "subscriber.h"

Publisher::Publisher(){}

void Publisher::Attach(Subscriber* a_subscriber) {
  a_subscriber->m_publisher = this;
  a_subscriber->Update();
  m_subscriber_list.push_back(a_subscriber);
}

void Publisher::Detach() {
  m_subscriber_list.pop_back();
}

void Publisher::Notify() {
  std::cout << "Observed number has been modified" << std::endl;
  for(Subscriber *sub : m_subscriber_list){
    sub->Update();
  }
}

void Publisher::SetNumber(int i) {
  m_observed_number = i;
  Notify();
}

int Publisher::GetNumber() {
  return m_observed_number;
}
