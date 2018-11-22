#ifndef NEWSPAPER
#define NEWSPAPER

#include "abstractfactory.h"
#include <iostream>

class Newspaper {
public:
  Newspaper(AbstractFactory* factory) {
    m_heading = factory->CreateHeading();
    m_news = factory->CreateNews();
    m_ads = factory->CreateAds();
    delete factory;
  }

  ~Newspaper(){
    delete m_heading;
    delete m_news;
    delete m_ads;
  }

  void Print() {
    std::cout << "*****************************************" << std::endl;
    m_heading->Print();
    std::cout << "----------------" << std::endl;
    m_news->Print();
    std::cout << "----------------" << std::endl;
    m_ads->Print();
    std::cout << std::endl;
  }

  AbstractHeading* m_heading = nullptr;
  AbstractNews* m_news = nullptr;
  AbstractAds* m_ads = nullptr;
};


#endif // NEWSPAPER

