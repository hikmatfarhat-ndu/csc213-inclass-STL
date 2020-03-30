#include <iostream>
#include <vector>
class Test {
    int val;
    public:
    Test(int v=0):val(v){
        //std::cout<<"constructor"<<std::endl;
    }
    Test(const Test & rhs){
        //std::cout<<"copy constructor"<<std::endl;
        val=rhs.val;
    }
    Test& operator=(const Test& rhs){
        //std::cout<<"assignment"<<std::endl;
        val=rhs.val;
        return *this;

    }
    int getVal(){return val;}
};

int main(){
    std::vector<Test> v;
    std::vector<std::string> sv;
    sv.push_back("one");
    sv.push_back("two");
    //Test a(1),b(2),c(3),c(4);
    //for(int i=0;i<5;i++)
     // v.push_back(a);
    int a[]={1,2,3,4};
        std::cout<<"starting"<<std::endl;
     std::vector<std::string>::iterator p;
    for(p=sv.begin();p!=sv.end();p++)
       std::cout<<*p<<std::endl;
    //for(auto & x:v){
         //std::cout<<x.getVal()<<std::endl;
      //   x=17;
   // }
    /*for(auto x:v)
      std::cout<<x.getVal()<<std::endl;*/
}