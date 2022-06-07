#pragma once
#include <set>
#include <ostream>

class Node;
class Edge;

class Machine{

    public:
    std::set<Node*> nodes;
    Machine(){};

    friend std::ostream &operator<<(std::ostream &os, const Machine &rhs);

};

