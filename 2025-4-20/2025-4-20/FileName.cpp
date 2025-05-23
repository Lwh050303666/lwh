////
//#include<iostream>
//using namespace std;
//class C{
//
//};
////继承
//class D :public C {
//
//};
////组合
//class E {
//private:
//	C _cc;
//};
//
////黑盒测试：看不见内部的实现机制，根据功能对其进行测试
////白盒测试：清楚内部的实现机制，根据实现机制去写测试用例
//class Person {
//public:
//	virtual void BuyTickt() {//在成员函数前面加“virtual”就是虚函数
//		cout << "买票全价" << endl;//只有成员函数才能变成虚函数
//	}
//};
//class Student :public Person {
//public:
//	virtual void BuyTicket() { cout << "买票半价" << endl; }
//};

//虚函数的重写（覆盖）：派生类中有一个跟基类完全相同的虚函数（即派生类函数与基类虚函数的返回值类型，函数名字，参数列表完全相同），称子类的虚函数重写了基类的虚函数


//构成多态的两个条件：1.必须通过基类的指针或者引用调用虚函数  2.被调用的函数必须是虚函数，且派生类必须对基类的虚函数进行重写
//父类必须写virtual，子类可以省写virtual
//重写的条件本来是虚函数+三同  但有一些例外
//1.派生类的重写虚函数可以不加virtual
//2.协变（返回值可以不同，但是要求返回值必须是自身的指针或引用   父和子必须同时是指针或者是引用

//析构函数加virtual也是虚函数重写，因为析构函数都被处理成destructor这个统一的名字
//class car {
//public:
//	virtual void Drive() final{}//final关键字表示不能被重写
//};
//class Benz :public car {
//public:
//	virtual void Drive() override{cout<<"Benz-舒适" << endl }//override是帮助派生类检查是否完成重写，如果没有会报错
//
//
//};
//int main() {
//	return 0;
//}
//
////如何让一个类不能被继承   1.把构造函数私有 2.在类后面加一个final
//class A final
//{
//
//};

//重载：1.两个函数在同一作用域 2.函数名相同，参数不同
//重写（覆盖）：1.两个函数分别在基类和派生类的作用域   2.函数名/参数/返回值都必须相同（协变例外）3.两个函数必须是虚函数
//重定义（隐藏）：1.两个函数分别在基类和派生类的作用域     2.函数名相同  3.两个基类和派生类的同名函数不构成重写就是重定义

//虚函数会被放进虚表里面



//普通函数在编译时就确定地址，符合多态的函数在运行时到指向对象的虚函数表中去找


//虚函数的重写重写的只是实现
#include<iostream>
using namespace std;
class A {
public: virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
	  virtual void test() { func(); } //this->func
};
class B :public A {
public:
	void func(int val) { std::cout << "B->" << val << std::endl; }
};
int main(int argc, char* argv[])
{
	B* p = new B;
	p->test();
	return 0;
}
//这个题的分析过程如下：实际上调用func的是A类型的指针，因为生成派生类对象的时候编译器会把父类和子类当成两个东西，它们只是组合到了一起，父类的代码依然是放在代码区，由父类调用
//test本质上只有一份   重写需要满足三同，三同相同的是参数的类型，和具体的值无关
//本质上把B的指针传给A类型的this指针就是让它指向了一个B对象，所以它调用的是派生类的函数，有的人会认为val等于0，其实是错误的，重写的本质上是把函数的实现部分重写一份，函数的定义部分不会改变，因此val是父类的1


//父类对象和子类对象的赋值时不会拷贝虚表
//虚表放在代码段（常量区）


//虚基表（存的偏移量）   虚表（虚函数函数地址）

//抽象类：在虚函数的后面写上=0，则这个函数变为纯虚函数。包含纯虚函数的类叫做抽象类（也叫接口类），抽象类不能实例化对象。只有重写虚函数，派生类才能实例化出对象。
class Car {
public:
	virtual void Drive() = 0;
};

//inline函数可以是虚函数，不过这样的话编译器就要忽略内联属性，因为虚函数要放到虚表中去
//在类里面定义的短的函数默认是内联
//静态成员函数不能是虚函数：因为静态成员函数没有this指针，使用类型：成员函数的调用方式无法访问虚函数表，所以静态成员函数无法放进虚函数表
//析构函数可以是虚函数，构造函数不可以是虚函数    虚表是在编译阶段就已经确定了，虚表指针是在初始化列表初始化的
//对象访问普通函数和虚函数哪个快：如果是普通对象，是一样快的，如果是指针对象或者是引用对象，则调用的普通函数快，因为构成多态，运行时调用虚函数需要到虚函数表中去查找
//虚函数表是在编译阶段生成的，一般情况下存在代码段



//虚函数表简称虚表

