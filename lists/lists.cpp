

#include <iostream>
#include <list>

int main()
{
	std::list<std::string> l;
	l.push_back("one");
	l.push_back("two");
	l.push_front("three");
	auto itr = l.begin();
	itr++;
	l.insert(itr, "eight");
	for (auto x : l) {
		std::cout << x << std::endl;
	}
	// insert 13 before 1
	std::cout << "----------------------" << std::endl;
	itr = l.begin();
	while ((itr != l.end()) && (*itr != "one"))itr++;
	if (!(itr == l.end()))l.insert(itr, "->");

	for (auto x : l) {
		std::cout << x;
		if (x != "->")std::cout << std::endl;
	}
}
