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
	std::cout<<"Your output is \n";
	for (auto x : l) {
		std::cout << x << "|";
	}
	std::cout << std::endl;
	std::cout<<"IT SHOULD BE \n";
	std::cout<<"1 2 3 4 5 6\n";
	return 1;
	
}
