#include <iostream>
#include <set>
#include "include/edge.hpp"
#include "include/node.hpp"
#include "include/machine.hpp"


int main(){

    Machine m = Machine();

    Node A = Node("A");
    Node B = Node("B");
    Node C = Node("C");
    Node D = Node("D");

    Edge AB = Edge(2, &B);
    Edge AC = Edge(3, &C);
    Edge CD = Edge(4, &D);
    Edge DA = Edge(1, &A);

    A.addEdge(&AB);
    A.addEdge(&AC);
    C.addEdge(&CD);
    D.addEdge(&DA);

    std::set<Node*>nodes({&A,&B,&C,&D});

    m.nodes.insert(nodes.begin(), nodes.end());

    std::cout << m;


    return 0;
}