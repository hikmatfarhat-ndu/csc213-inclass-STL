#include <iostream>
#include <list>


int main(int argc,char **argv)
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
	if(argc>1)std::cout<<"Commit: "<<argv[1]<<" \n";
	std::cout<<"**Your output is** \n\n";
	for (auto x : l) {
		std::cout << x << " | ";
	}
	std::cout << std::endl;
	std::cout<<"\n\n**IT SHOULD BE** \n\n";
	std::cout<<"1 2 3 4 5 6\n";
	
}
