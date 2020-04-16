#include <iostream>
#include <list>

//added comment
int main(int argc,char **argv)
{
	std::list<std::string> l;
	l.push_back("one");
	l.push_back("two");
	l.push_back("three");
	l.push_back("one");
	l.push_back("999");
	if(argc>1)std::cout<<"https://github.com/hikmatfarhat-ndu/csc213-inclass-STL/compare/"
	<<"c38782a3007b09f9c2fe5a86853ec9b74c6ce100 ... "<<argv[1]<<" \n";
	std::cout<<"**Your output is** \n\n";
	for (auto x : l) {
		std::cout << x << " | ";
	}
	std::cout << std::endl;
	std::cout<<"\n\n**IT SHOULD BE** \n\n";
	std::cout<<"1 2 3 4 5 6\n";
	
}
