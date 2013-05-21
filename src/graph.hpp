#ifndef _GRAPH_HEADER_
#define _GRAPH_HEADER_

#include "nodes.hpp"
#include "links.hpp"

class Graph : public Links, public Nodes{
public:
  Graph(const std::string filename);
};

#endif /* _GRAPH_HEADER_ */
