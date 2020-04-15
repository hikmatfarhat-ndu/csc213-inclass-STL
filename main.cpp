#include <iostream>
#include <vector>
#include "Room.h"

int main() {
    /* std::vector<Room*> rvp;
     std::vector<Room> rvo;
     Office a("S311", "FNAS", "John");
     ClassRoom b("S102", "FNAS", 40);
     rvp.push_back(&a);
     rvp.push_back(&b);
     rvo.push_back(a);
     rvo.push_back(b);
     rvo.push_back(Office("S333", "FNAS", "Jack"));
     for (int i = 0; i < rvp.size(); i++) {
         std::cout << rvp[i]->print() << std::endl;
     }
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
     }*/
    std::vector<NoCopy> v;
    NoCopy a(17);
    NoCopy b(33);
    /* by default vector and all containers?
       use copy constructor unless it is a
       temporary they use move constructor
       */
    v.push_back(NoCopy(18));
    v.push_back(std::move(b));

    for (auto& x : v) {
        x.setX(99);
    }
    for (auto& x : v)
        std::cout << x.getX() << std::endl;
    std::cout << b.getX()<<"done\n";
}