#include "GraphBase.hpp"
#include "Vertex.hpp"
#include "Edge.hpp"

class Graph : public GraphBase
{
public:
    // Variables
    std::vector<std::list<Vertex>> alist; // This is adjacency list

    // Functions
    void addVertex(std::string label) override;
    void removeVertex(std::string label) override;
    void addEdge(std::string label1, std::string label2, unsigned long weight) override;
    // void removeEdge(std::string label1, std::string label2) override;
    // unsigned long shortestPath(std::string startLabel, std::string endLabel, std::vector<std::string> &path) override;
};
