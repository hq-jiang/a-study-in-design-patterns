#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H


class AbstractHeading;
class AbstractNews;
class AbstractAds;


class AbstractFactory {
public:
  virtual AbstractHeading* CreateHeading() = 0;
  virtual AbstractNews* CreateNews() = 0;
  virtual AbstractAds* CreateAds() = 0;
};


class AbstractHeading {
public:
  virtual void Print() = 0;
};

class AbstractNews {
public:
  virtual void Print() = 0;
};

class AbstractAds {
public:
  virtual void Print() = 0;
};






#endif // ABSTRACTFACTORY_H
