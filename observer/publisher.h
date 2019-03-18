#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <vector>

class Subscriber;

/* In our simplified case we create only one class, but this example
 * can be easily extended with derived classes of Publisher.
 * The publisher or subject holds the data and notifies all subscribers,
 * when the data changes. It therefore also manages all references
 * to the subscribers.
 */

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

