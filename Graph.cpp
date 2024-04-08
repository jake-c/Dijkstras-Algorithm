#include "Graph.hpp"

void Graph::addVertex(std::string label)
{
    // if alist contains vertex, dont add
    for (auto v : alist)
    {
        if (v.front().label == label) // The vertex will always be at the front of the LL. Further elements in LL are adjacent vertices.
            return;
    }

    Vertex newVertex = Vertex(label);                   // A new Vertex is created with a label of function parameter
    std::list<Vertex> *newList = new std::list<Vertex>; // Since the alist is an array of LL's, a new linked list has to be made to be put in the next available spot.
    newList->push_back(newVertex);                      // The new vertex is added to the new LL.
    alist.push_back(*newList);                          // Finally, the new List is added the the vector.
}

void Graph::removeVertex(std::string label)
{
    return;
}

void Graph::addEdge(std::string label1, std::string label2, unsigned long weight)
{
    return;
}