#include <iostream>
#include "book.h"
#include "printer.h"


int main() {
  Printer printer;
  Book* book = new Book();
  Novel* novel = new Novel();
  printer.Publish(book);
  printer.Publish(novel);

  AdaptedMovie* adapted_movie = new AdaptedMovie();
  printer.Publish(adapted_movie);
}
