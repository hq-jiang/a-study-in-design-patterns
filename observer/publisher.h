#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <vector>

class Subscriber;

class Publisher {
public:
  Publisher();
  void Attach(Subscriber* a_subscriber);
  void Detach();

  void Notify();

  void SetNumber(int i);

  int GetNumber();

private:
  std::vector<Subscriber*> m_subscriber_list;
  int m_observed_number = 7;
};


#endif // PUBLISHER_H

