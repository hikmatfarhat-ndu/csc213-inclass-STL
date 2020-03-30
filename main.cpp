#include <iostream>
#include <vector>
#include "Room.h"

int main(){
    std::vector<Room *> rvp;
    std::vector<Room> rvo;
    Office a("S311", "FNAS", "John");
    ClassRoom b("S102", "FNAS", 40);
    rvp.push_back(&a);
    rvp.push_back(&b);
    rvo.push_back(a);
    rvo.push_back(b);
    rvo.push_back(Office("S333", "FNAS", "Jack"));
    for (auto r : rvp) {
        std::cout << r->print() << std::endl;
    }
    for (auto r : rvo) {
        std::cout << r.print() << std::endl;
    }
    rvo.pop_back();
    std::cout << "After removing the last item " << std::endl;
    for (auto r : rvo) {
        std::cout << r.print()<<std::endl;
    }
}