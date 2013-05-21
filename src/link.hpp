#ifndef _LINK_HEADER_
#define _LINK_HEADER_

#include "node.hpp"

class Link {
private:
  Node  &_n;
  Node  &_m;
  double _cost;

public:
  Link(Node &n, Node &m, double cost);

  Node  &n();
  Node  &m();
  double cost();
};

#endif /* _LINK_HEADER_ */
