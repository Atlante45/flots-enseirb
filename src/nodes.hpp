#ifndef _NODES_HEADER_
#define _NODES_HEADER_

#include "node.hpp"
#include <list>

class Nodes : public std::list<Node> {
public:
  int addNode(const std::string &id, const int x, const int y);
  int addNode(Node &n);
  Node &findNode(std::string &id);
};

#endif /* _NODES_HEADER_ */
