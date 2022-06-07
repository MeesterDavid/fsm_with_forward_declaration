#include "include/machine.hpp"
#include "include/node.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Machine &rhs) {
    for(Node* node : rhs.nodes){
        os << "nodes: " << *node << "\n";
    }
    return os;
}
