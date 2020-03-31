
/* using an iterator which is like a pointer */
#include <iostream>
#include <vector>
#include "../Room.h"
int main()
{
	std::vector<Office> ov;
	ov.push_back(Office("O1", "B1", "J1"));
	ov.push_back(Office("O2", "B2", "J2"));
	ov.push_back(Office("O3", "B3", "J3"));
	std::vector<Office>::iterator itr;
	for (itr = ov.begin(); itr != ov.end(); itr++) {
		std::cout << itr->print() << std::endl;
	}
	for (auto x = ov.begin(); x != ov.end(); x++) {
		std::cout << x->print() << std::endl;
	}
}
