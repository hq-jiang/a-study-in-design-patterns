#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H


/**
 * The Abstract Factory is used for creation of a family of
 * objects that can have different versions but are very
 * similar in structure. In our case, we assume that
 * we want to have a different kind of newspaper (the client)
 * that have the same structure, a heading, the news and ads.
 *
 * A change in the structure, for example adding another section,
 * means that we have to adapt all derived classes, so defining
 * the correct objects is crucial.
 */
class AbstractHeading;
class AbstractNews;
class AbstractAds;


class AbstractFactory {
public:
  /**
   * Pure virtual functions must be defined in the derived
   * class. This also means that this abstract class cannot
   * be instantiated.
   */
  virtual AbstractHeading* CreateHeading() = 0;
  virtual AbstractNews* CreateNews() = 0;
  virtual AbstractAds* CreateAds() = 0;
};

/**
 * The Print function is basically the interface. The client
 * will rely on the fact, that every object created by the factory
 * implements this function.
 *
 * These
 * "products" need to be implemented by each derived
 * factory and can be seen as the contract between
 * the client (newspaper) and the object creator
 * (broadsheet/tabloid-factory).
 */
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
