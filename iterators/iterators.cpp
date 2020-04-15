
/* using an iterator which is like a pointer */
#include <iostream>
#include <vector>
#include "../Room.h"
using namespace std;

int main()
{
	
	int a[] = { 1,2,3,4,5 };
	int* e = &a[4];
	for (int *p=a; p!=e; p++) {
		std::cout << *p << std::endl;
	}
	vector<int> vi;
	vector<Room> vr;
	vi.push_back(11);
	vi.push_back(12);
	vi.push_back(13);
	//vi={11,12,13,->END}
	//vector<int>::iterator itr;
	
	for (auto itr = vi.begin(); itr != vi.end(); itr++)
		std::cout << *itr << std::endl;


	/*std::vector<Office> ov;
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
	*/
}
