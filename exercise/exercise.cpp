#include <iostream>
#include <list>
int main()
{
	std::list<std::string> l;
	l.push_back("one");
	l.push_back("two");
	l.push_back("three");
	l.push_back("one");
	l.push_back("five");
	l.push_back("six");
	l.push_back("seven");
	l.push_back("eight");
	l.push_back("one");
	l.push_back("nine");
	for (auto x : l) {
		std::cout << x << "|";
	}
	std::cout << std::endl;
	
}
