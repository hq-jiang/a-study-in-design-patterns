#ifndef BROADSHEET_H
#define BROADSHEET_H

#include <iostream>
#include "abstractfactory.h"


class BroadSheetHeading : public AbstractHeading {
public:
  BroadSheetHeading(){}
  void Print() {
    std::cout << "World Economy at Risk" << std::endl;
  }
};

class BroadSheetNews : public AbstractNews {
public:
  BroadSheetNews(){}
  void Print() {
    std::cout << "The current affair of global company xyz is a risk on global scale" << std::endl;
    std::cout << "Expert are trying their best to mitigate the damage to local markets" << std::endl;
  }
};

class BroadSheetAds : public AbstractAds {
public:
  BroadSheetAds(){}
  void Print() {
    std::cout << "Finance insurance at your service" << std::endl;
  }
};


class BroadSheetFactory : public AbstractFactory {
  BroadSheetHeading* CreateHeading() {return new BroadSheetHeading;}
  BroadSheetNews* CreateNews() {return new BroadSheetNews;}
  BroadSheetAds* CreateAds() {return new BroadSheetAds;}
};


#endif // BROADSHEET_H

