#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "movie.h"

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

