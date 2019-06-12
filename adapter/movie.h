#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>

/**
 * @brief The Movie class
 *
 * This class is very different from the Book class and is
 * therefore not compatible to the Printer class which expects
 * a Print() function implemented.
 * If we didn't have access to the source code of the Movie class,
 * for example if it was part of a external library, we wouldn't be
 * able to use it. Unless, we applied the adapter pattern (see Book class).
 */
class Movie {
public:
  void Show() {
    // Here it supposed to show the movie in video form
  }

  void Subtitles() {
    std::cout << "It's over Anakin, I have the high-ground" << std::endl;
    std::cout << "You underestimate my power" << std::endl;
    std::cout << "Slash, aaarrgh" << std::endl;
  }
};

#endif // MOVIE_H

