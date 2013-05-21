#ifndef _NODE_HEADER_
#define _NODE_HEADER_

#include <cstdlib>
#include <iostream>

class Node {
protected:
  int         _n;
  std::string _id;
  int         _x;
  int         _y;
  
public:
  Node(const int n, const std::string &id, const int x, const int y);

  int          n();
  std::string &id();
  int          x();
  int          y();
};

#endif /* _NODE_HEADER_ */
