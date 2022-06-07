#include "include/node.hpp"
#include "include/edge.hpp"

std::string Node::getNaam() const{
    return naam;
}

void Node::addEdge(Edge* e){
    outgoingEdges.insert(e);
}

void Node::removeEdge(Edge* e){
    outgoingEdges.erase(e);
}
std::ostream &operator<<(std::ostream &os, const Node &rhs) {
    os << "naam: " << rhs.naam << "\n";
    for(Edge* e : rhs.outgoingEdges){
        os << "outgoing edge: " << *e << "\n";
    }
    os << "\n";
       
    return os;
}
