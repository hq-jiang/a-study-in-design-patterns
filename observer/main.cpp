#include <iostream>
#include "publisher.h"
#include "subscriber.h"

int main() {
  Publisher publisher;
  auto *table = new Table();
  auto *chart = new Chart();

  publisher.Attach(table);
  publisher.Attach(chart);

  publisher.SetNumber(42);

}
