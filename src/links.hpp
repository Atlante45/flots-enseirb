#ifndef _LINKS_HEADER_
#define _LINKS_HEADER_

#include "link.hpp"
#include <list>
#include <vector>

class Links : public std::list<Link> {
private:
  std::vector<std::vector<double>> _vect;

public:
  Links();
  
  int addLink(Node &n, Node&m, double cost);
  int addLink(Link &l);
  
  std::vector<std::vector<double>> &vect();
};

#endif /* _LINKS_HEADER_ */
