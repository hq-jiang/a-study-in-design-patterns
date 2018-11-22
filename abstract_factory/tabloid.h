#ifndef TABLOID_H
#define TABLOID_H

#include <iostream>
#include "abstractfactory.h"


class TabloidHeading : public AbstractHeading {
public:
  void Print() {
    std::cout << "The End is Nigh" << std::endl;
  }
};

class TabloidNews : public AbstractNews {
public:
  void Print() {
    std::cout << "Company xyz crushing world economy" << std::endl;
    std::cout << "Should we close our markets and exit the Earth Union (EU)?" << std::endl;
  }
};

class TabloidAds : public AbstractAds {
public:
  void Print() {
    std::cout << "Hot babes in your neighborhood" << std::endl;
  }
};


class TabloidFactory : public AbstractFactory {
  TabloidHeading* CreateHeading() {return new TabloidHeading;}
  TabloidNews* CreateNews() {return new TabloidNews;}
  TabloidAds* CreateAds() {return new TabloidAds;}
};



#endif // TABLOID_H

