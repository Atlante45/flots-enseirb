#include "graph.hpp"
#include <string>
#include <cstdio>
#include <fstream>

#define MAX_ID 100

using namespace std;

Graph::Graph(const string filename) {
  fstream fs (filename, fstream::in | fstream::out);
  
  while (!fs.eof()) {
    char tmp[MAX_ID] = "";
    int x;
    int y;
    
    while (' ' != fs.peek()) {
      if (fs.eof()) {
	return;
      }

      if ('\n' == fs.peek()) {
	fs.get();
      }
      else {
	sprintf(tmp, "%s%c%c", tmp, fs.get(), '\0');
      }
    }
    
    fs >> x;
    fs >> y;
    
    string id(tmp);
    addNode(id, x, y);
  }
  
  fs.close();
}

int main(int argc, char *argv[]) {
  if (2 != argc) {
    cerr << "Number of argument incorrect." << endl;
  }
  
  string filename(argv[1]);
  Graph g(filename);
  
  for (Nodes::iterator it = g.Nodes::begin(); it != g.Nodes::end(); ++it) {
    cout << it->id() << " " << it->x() << " " << it->y() << endl;
  }

  /*/  
  for (Links::iterator it = g.Links::begin(); it != g.Links::end(); ++it) {
    cout << it->n().id() << " -- " << it->m().id();
    cout << " (" << it->cost() << " " << g.vect()[it->n().n()][it->m().n()] << " " << g.vect()[it->m().n()][it->n().n()] << ")";
    cout << " (" << g.vect().size() << " " << it->n().n() << " " << it->m().n() << ")";
    cout << endl;
  }
  /**/
  
  return EXIT_SUCCESS;
}
