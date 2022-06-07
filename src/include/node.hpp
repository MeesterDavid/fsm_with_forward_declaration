#pragma once
#include <string>
#include <set>
#include <ostream>

class Edge;

class Node{
    
    private:
    std::string naam;
    std::set<Edge> outgoingEdges;

    public:
    Node(std::string naam_):
        naam(naam_)
    {}

    std::string getNaam() const;

    void addEdge(Edge* e);

    void removeEdge(Edge* e);

    friend std::ostream &operator<<(std::ostream &os, const Node &rhs);

};