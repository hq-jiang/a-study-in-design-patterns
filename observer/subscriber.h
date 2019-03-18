#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <iostream>
#include "publisher.h"

/* The subscriber must implement what is done when reveiving
 * a trigger from the publisher class. It also holds a reference
 * to the publisher to access the Getter method.
 *
 */
class Subscriber {
public:
  virtual void Update() = 0;
  friend class Publisher; // To give Subscriber access to publisher and therefore GetNumber()

protected:
  int m_observed_number;
  Publisher* m_publisher = nullptr;
};

class Table : public Subscriber {
public:

  virtual void Update();
};

class Chart : public Subscriber {
public:

  virtual void Update();
};

#endif // SUBSCRIBER_H

