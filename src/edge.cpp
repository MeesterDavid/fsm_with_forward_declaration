#include "include/edge.hpp"
#include "include/node.hpp"

std::ostream &operator<<(std::ostream &os, const Edge &rhs) {
    os << "lengte: " << rhs.lengte
       << " bestemming: " << rhs.bestemming->getNaam();
    return os;
}
