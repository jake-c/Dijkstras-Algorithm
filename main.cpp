#include "Graph.hpp"
#include <iostream>

int main()
{
    Graph g;

    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");
    g.addVertex("D");
    g.addVertex("E");
    g.addVertex("F");
    g.addVertex("A");

    for (auto v : g.alist)
    {
        std::cout << v.front().label << std::endl;
    }
}