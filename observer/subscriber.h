#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <iostream>
#include "publisher.h"

class Subscriber {
public:
  virtual void Update() = 0;
  Publisher* m_publisher = nullptr;

protected:

  int m_observed_number;
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

