#pragma once
#include <ostream>

class Node;

class Edge{
    private:
    unsigned int lengte;
    Node* bestemming;

    public:
    Edge(unsigned int lengte_, Node* bestemming_):
        lengte(lengte_),
        bestemming(bestemming_)
    {}

    friend std::ostream &operator<<(std::ostream &os, const Edge &rhs);
    
};