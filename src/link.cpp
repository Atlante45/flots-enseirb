#include "link.hpp"

Link::Link(Node &n, Node &m, double cost) : _n(n), _m(m), _cost(cost) {
}

Node &Link::n() {
  return _n;
}

Node &Link::m() {
  return _m;
}

double Link::cost() {
  return _cost;
}
