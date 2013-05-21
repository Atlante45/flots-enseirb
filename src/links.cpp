#include "links.hpp"

using namespace std;

Links::Links(): _vect(0, vector<double>(0, 0)) {
}

int Links::addLink(Node &n, Node &m, double cost) {
  Link l(n, m, cost);
  
  return addLink(l);
}

int Links::addLink(Link &l) {
  bool inserted(false);
  int n1(l.n().n());
  int n2(l.m().n());

  for (Links::iterator it = begin(); it != end(); ++it) {
    if (l.cost() < it->cost() && !inserted) {
      insert(it, l);
      _vect[n1][n2] = l.cost();
      _vect[n2][n1] = l.cost();
      
      inserted = true;
    }
  }
  
  if (!inserted) {
    push_back(l);
    _vect[n1][n2] = l.cost();
    _vect[n2][n1] = l.cost();
  }
  
  return 0;
}

std::vector<std::vector<double>> &Links::vect() {
  return _vect;
}
