#include <string>
#include "Edge.hpp"

class Vertex : public Edge
{
public:
    std::string label;
    Vertex(std::string x) : label(x) {}
    Vertex(std::string x, unsigned long y) : label(x), Edge(y) {}
};