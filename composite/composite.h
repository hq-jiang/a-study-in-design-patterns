#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <iostream>
#include <vector>


/**
 * @brief The Composite class
 *
 * Allows one to structure classes according to a tree
 * structure. This makes it simple for the client, since
 * he can treat the single classes and their composite
 * uniformly. A composite can be easily extended by
 * adding new classes to the hierarchy.
 *
 * "Clients use the Component class interface to interact with objects in the
 * composite structur. If the recipient is a Leaf, then the request is handled
 * directly. If the recipient is a Composite, then it usually forwards requests
 * to its child components, possibly performing additional operations before
 * and/or after forwarding." - Gamma et al.
 */

class Composite {
public:
  Composite(){}

  virtual void Print() = 0;

  void Add(Composite* a_composite) {
    m_children.push_back(a_composite);
  }

  Composite* GetChild(int index) {
    if(index < m_children.size()) {
      return m_children[index];
    } else {
      return nullptr;
    }
  }

  std::vector<Composite*> m_children;
}; // class Composite


/* Note: The composite pattern gives flexibility in how the newspaper
 * is structured. In contrast, we also created a newspaper class
 * for the abstract factory and there the structure was fixed.
 */

class Newspaper : public Composite {
public:

  virtual void Print() {
    std::cout << "Newspaper issue 25.12.2018" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    for(auto child : m_children) {
      child->Print();
    }
  }
}; // class Newspaper

class Heading : public Composite {
public:
  virtual void Print() {
    std::cout << "The Heading of the newspaper" << std::endl;
  }

private:
  // For explicit leafs, some of the methods can moved to private
  using Composite::Add;
  using Composite::GetChild;
}; // class Heading

class News : public Composite {
public:
  virtual void Print() {
    std::cout << "=======================================" << std::endl;
    std::cout << "News Section" << std::endl;

    for(auto child : m_children) {
      child->Print();
    }
  }
}; // class Section

class NewsWeather : public Composite {
public:
  virtual void Print() {
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "The weather is good" << std::endl;
  }

private:
  using Composite::Add;
  using Composite::GetChild;
}; // class NewsWeather

class NewsPolitics : public Composite {
public:
  virtual void Print() {
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Politics could be better" << std::endl;
  }

private:
  using Composite::Add;
  using Composite::GetChild;
}; // class NewsPolitics

class Ending : public Composite {
public:
  virtual void Print() {
    std::cout << "=======================================" << std::endl;
    std::cout << "The ending of the newspaper" << std::endl;
  }

private:
  using Composite::Add;
  using Composite::GetChild;
}; // class Ending


#endif // COMPOSITE_H

