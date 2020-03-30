# Standard Template Library (STL)
The STL is a generic programming library that provides implementation for common data structures and algorithm. If you find yourself needing a certain data structure or algorithm most likely you will find it implemented in the STL. 
STL is very large (its standard is over 700 pages) so obviously we will not cover all of it. We will divide  our coverage of the STL into two parts: Containers and Algorithms.
## Containers
A container object stores data. Since the type of data is more or less arbitrary the implementation uses templates to accomplish this.
We will start with the vector class.
```
#include <vector>
int main(){
    std::vector<int > v;
    std::vector<std::string > sv;
    v.push_back(1);
    v.psuh_back(2);
    sv.push_back("one");
    sv.push_back("two");
    for(auto x:sv){
        std::cout<<x<< std::endl;
    }
}
```
Above we have used two features from c++11: auto and range-based for loops. As you can see we can create a vector of any type (note the syntax). If you like to use the usual for loop you need to use iterators.
**Note**: since the type of an auto variable is inferred by the compiler it cannot be used with _uninitialized_ variables.
```
auto x;//error
auto y=1;//OK
```
### Iterators
Iterators are generalization of pointers. Given a container **c** and iterator **itr** points at an element stored in **c**. Therefore dereferencing an iterator **(*itr)** will return the element itself. Also iterators can be incremented and decremented like pointers: (itr++) and (itr--). Furthermore, every container **c** has a **begin** and **end()** method. Example
```
#include <vector>
#include <iostream>
int main(){
  std::vector<std::string> sv;
  sv.push_back("one");
  sv.push_back("two");
  for(auto itr=sv.begin();itr!=sv.end();itr++){
      std::cout<<(*itr)<<std::endl;
  }
}  
```
The auto keyword is useful since otherwise we have to write down the long type of the iterator: (since it is an iterator to container of type ```std::vector<std::string>```)
```
std::vector<std::string>::iterator itr;
```
vectors can be used similarly to arrays.
```
std::vector<int> iv;
iv.push_back(1);
iv.push_back(2);
for(int i=0;i<iv.size();i++)
  iv[i]=i;
```
Since vectors are required by the c++ standard to use contiguous memory we can only add and remove(as oppposed to change) from the end of a vector.
   