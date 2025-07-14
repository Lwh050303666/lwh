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
// template<class T>
// class init{
// public:init():size(3){} 
// ~init(){}
// void operator()(){
//     size++;

// }
// private: int size=3;
// };
// int main(){
//    init<int> e;
//    e();
// }

// template<class T>
// class ac{
//     public: T * init() const
// }
// template<class T>
// class auto_ptr{
// public: explicit auto_ptr():



// private: T * pointee;
// };
 
//链表 迭代器
// template<typename T>
// class List{
//     void insert_front(T value);
//     void insert_end(T value);
//     void display(ostream &os=cout) const
// private: ListItem<T>* _end;
// ListItem<T> * _front;
// long _size;
// };
// template<typename T>
// class ListItem{
//     public: T value() const {return _value;}
//     ListItem * next() const {return _next};

//     private: T _value;
//     ListItem * _next; //单向链表
// };
// //浅拷贝和深拷贝
// template<class Item>
// struct ListIter{
//     Item * ptr;//保持与容器之间的一个联系
//     ListIter(Item * p=0)//default ctor
//     :ptr(p){}
//     //不必实现copy ctor 因为编译器提供的缺省行为已经足够  这里哪怕是默认提供的浅拷贝也够用了   
//    //因为ptr只是表面自己指向了哪一个链表节点  并没有进行解引用等操作
//    //不必实现 operator= 因为编译器的缺省行为已经足够
//    Item & operator *()const {return * ptr;}
//    Item & operator->()const{return ptr;}
//    //以下两个operator++遵循标准做法
//    ListIter & operator++(){ptr=ptr->next(); return *this};
//    ListIter operator++(int){ListIter tmp=*this; ++*this; return tmp;}
//    List
    
// };
// //涉及到了资源的管理权问题
// template<typename T>
// class List{
// void insert_end(T value);
// void insert_front(T value);
// void display(ostream & os=cout)const;
// private:  ListItem<T>* _end;
// ListItem<T>* _front;
// long _size;
// };
// template<typename T>
// class ListItem{
// public: T value()const{return _value;}
// ListItem * next()const{return _next;}
// private: T _value;
// ListItem * _next;//单向链表
// };
// iterator_traits<int>::value_type;
void push_back(const T& x){
    if(finish!=end_of_storage){
        construct(finish,x);
        ++finish;
    }
    else insert_aux(end(),x);//vector
}
 (bf'(the fool on the hill));
 


