#include<iostream>
using namespace std;
//class A
//{
//public:
//	int _a[128];
//};
//
// class B : public A
////class B : virtual public A
//{
//public:
//	int _b;
//};
//
//class C : public A
////class C : virtual public A
//{
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	int _d;
//};
//
//
//
//int main()
//{
//	D d;
//	//d.B::_a = 1;
//	//d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	cout << sizeof(D) << endl;
//
//	return 0;
//}

//class Base1 { public:  int _b1; };
//class Base2 { public:  int _b2; };
//class Derive : public Base2, public Base1 { public: int _d; };
//
//int main() {
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A {
//public:
//	A(const char* s) { cout << s << endl; }
//	~A() {}
//};
//
//class B :virtual public A
//{
//public:
//	B(const char* sa, const char* sb) :A(sa) { cout << sb << endl; }
//};
//
//class C :virtual public A
//{
//public:
//	C(const char* sa, const char* sb) :A(sa) { cout << sb << endl; }
//};
//
//class D :public B, public C
//{
//public:
//	D(const char* sa, const char* sb, const char* sc, const char* sd) 
//		:B(sa, sb), C(sa, sc), A(sa)
//	{
//		cout << sd << endl;
//	}
//};
//
//int main() {
//	D* p = new D("class A", "class B", "class C", "class D");
//	delete p;
//
//	B b("class A", "class B");
//
//	return 0;
//}

//class C
//{
//	//....
//};
//

//class D : public C
//{};
//
//class E
//{
//private:
//	C _cc;
//};
//class Person {
//public:
//	virtual	void BuyTicket() const { cout << "ÂòÆ±-È«¼Û" << endl; }
//};
//
//class Student : public Person {
//public:
//	void BuyTicket() const { cout << "ÂòÆ±-°ë¼Û" << endl; }
//};

//class A
//{};
//
//class B : public A
//{};
//
//class Person {
//public:
//	virtual	A* BuyTicket() const { 
//		cout << "ÂòÆ±-È«¼Û" << endl;
//		return 0;
//	}
//};
//
//class Student : public Person {
//public:
//	virtual B* BuyTicket() const { 
//		cout << "ÂòÆ±-°ë¼Û" << endl;
//		return 0;
//	}
//};
//void func(const Person* p)
//{
//	p->BuyTicket();
//}
//
//int main()
//{
//	Person pp;
//	func(&pp);
//
//	Student st;
//	func(&st);
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////
//class Person {
//public:
//	virtual void BuyTicket() { cout << "ÂòÆ±-È«¼Û" << endl; }
//	virtual ~Person() { cout << "~Person()" << endl; }
//};
//
//class Student : public Person {
//public:
//	virtual void BuyTicket() { cout << "ÂòÆ±-°ë¼Û" << endl; }
//
//	~Student() {
//		cout << "~Student()" << endl;
//		delete[] ptr;
//	}
//
//protected:
//	int* ptr = new int[10];
//};

//
//int main()
//{
//	//Person p;
//	//Student s;
//
//	Person* p = new Person;
//	p->BuyTicket();
//	delete p;
//
//	p = new Student;
//	p->BuyTicket();
//	delete p; // p->destructor() + operator delete(p)
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////
//class Car
//{
//public:
//	virtual void Drive() final {}
//};
//
//class Benz :public Car
//{
//public:
//	void Drive(int i) { cout << "Benz-ÊæÊÊ" << endl; }
//};

//class Car {
//public:
//	 virtual void Drive() {}
//};
//
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-ÊæÊÊ" << endl; }
//};
//class A
//{
//public:
//	static A CreateObj()
//	{
//		return A();
//	}
//private:
//	A()
//	{}
//};
//
//class B : public A
//{};
//
//int main()
//{
//	// B bb;
//	A::CreateObj();
//
//	return 0;
//}

//class A
//{
//public:
//private:
//	~A()
//	{}
//};
//
//class B : public A
//{};
//
//int main()
//{
//	A* p = new A;
//
//	//B bb;
//
//	return 0;
//}


//class A final
//{
//public:
//private:
//};
//
//class B : public A
//{};
//
//int main()
//{
//	return 0;
//}
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//
//	virtual void Func2()
//	{
//		cout << "Func1()" << endl;
//	}
//
//
//	void Func3()
//	{
//		cout << "Func1()" << endl;
//	}
//
//private:
//	char _b = 1;
//};
//
//int main()
//{
//	cout << sizeof(Base) << endl;
//
//	Base b1;
//
//	return 0;
//}

class Person {
public:
	virtual void BuyTicket() { cout << "ÂòÆ±-È«¼Û" << endl; }

	int _a = 1;
};

class Student : public Person {
public:
	virtual void BuyTicket() { cout << "ÂòÆ±-°ë¼Û" << endl; }
	int _b = 1;
};

void Func(Person& p)
{
	p.BuyTicket();
}

int main()
{
	Person Mike;
	Func(Mike);

	Student Johnson;
	Func(Johnson);

	return 0;
}