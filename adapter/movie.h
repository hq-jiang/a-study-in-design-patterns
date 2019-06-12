#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>

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

