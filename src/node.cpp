#include "node.hpp"

using namespace std;

Node::Node(const int n, const string &id, const int x, const int y) : _n(n), _id(id), _x(x), _y(y) {
}

int Node::n() {
  return _n;
}

string &Node::id() {
  return _id;
}

int Node::x() {
  return _x;
}

int Node::y() {
  return _y;
}

