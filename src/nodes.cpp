#include "nodes.hpp"
#include <cstdio>

using namespace std;

int Nodes::addNode(Node &n) {
  bool inserted(false);

  for (Nodes::iterator it = begin(); it != end(); ++it) {
    if (n.id() == it->id()) {
      perror("ERROR : Two nodes have the same id");
      exit(EXIT_FAILURE);
    }
    
    if (!inserted && n.id() < it->id()) {
      insert(it, n);
      inserted = true;
    }
  }
  
  if (!inserted) {
    push_back(n);
  }
  
  return 0;
}

int Nodes::addNode(const string &id, const int x, const int y) {
  Node n(size(), id, x, y);
  
  return addNode(n);
}

Node &Nodes::findNode(string &id) {
  Nodes::iterator it = begin();
  while (it != end() && it->id() != id) ++it;
  
  return *it;
}
