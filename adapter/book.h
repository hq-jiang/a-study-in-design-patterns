#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "movie.h"

/**
 * @brief The Book class
 *
 * This class implements the interface - the Print() function -
 * which is expected by the Printer class.
 */
class Book {
public:

  Book() = default;

  virtual void Print() {
    std::cout << "Once apon a time, there was a litte printer" << std::endl;
    std::cout << "Who printed books all day long" << std::endl;
  }
};


class Novel : public Book {
public:

  Novel() = default;

  virtual void Print() {
    std::cout << "Once apon a time, there was a litte printer" << std::endl;
    std::cout << "Who printed novels all day long" << std::endl;
  }
};


/**
 * @brief The AdaptedMovie class
 *
 * In order to use the Movie class as a Book, we must deliver a Print()
 * function. We use the "object" adapter pattern, so we instantiate the
 * adaptee (to be adapted class) as a member and wrap the Subtitles() function
 * with Print(). This makes the movie class usable in Printer without changing
 * the Movie class itself.
 */
class AdaptedMovie : public Book {
public:
  AdaptedMovie() : m_movie(new Movie()) {}

  virtual void Print() {
    std::cout << "Once apon a time, there was a litte printer" << std::endl;
    m_movie->Subtitles();
  }

private:
  Movie* m_movie;
};


#endif // BOOK_H

