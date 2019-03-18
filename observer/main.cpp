#include <iostream>
#include "publisher.h"
#include "subscriber.h"

/* When different applications use the same underlying data
 * the applications need to be notified if the data has changed.
 * The observer pattern can help to reflect these changes immediately.
 * People who know ROS are already familiar with the publisher-subscriber
 * architecture. In the "Design Patterns" book, the participants are also
 * called subject and observer.
 *
 */

int main() {
  Publisher publisher;
  auto *table = new Table();
  auto *chart = new Chart();

  publisher.Attach(table);
  publisher.Attach(chart);

  publisher.SetNumber(42);

}
