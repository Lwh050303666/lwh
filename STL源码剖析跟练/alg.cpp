#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// template<class T>
// class print
// {public:  void operator()(const T&elem){
//     cout<<elem<< ' ';
// }

// };
// int main(){
//     int ia[6]={0,1,2,3,4,5};
//     vector<int>iv(ia,ia+6);
//     //print<int>()是一个临时对象  急用急销毁
//     for_each(iv.begin(),iv.end(),print<int>());
//     return 0;
// }

// template<class InputIterator,class T>
// InputIterator  find(InputIterator first,InputIterator last,const T&){

// }
// #include<cstdlib>
// #include<iostream>
// using namespace std;
// int fcmp(const void * elem1,const void * elem2)
template<class T>
class init{
public:init():size(3){} 
~init(){}
void operator()(){
    size++;

}
private: int size=3;
};
int main(){
   init<int> e;
   e();
}

