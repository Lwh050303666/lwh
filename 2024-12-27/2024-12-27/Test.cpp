#include<iostream>
#include<vector>
#include<list>
#include<array>
using namespace std;
//void Print(const vector<int>& v)
//{
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}

//template<typename Container>
template<class Container>
void Print(const Container& v)
{
	// typename Container::const_iterator it = v.begin();
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

//class A
//{
//public:
//	int begin()
//	{
//		return 0;
//	}
//
//	static int const_iterator;
//};
//
//int A::const_iterator = 1;

//int main()
//{
//	/*A aa;
//	A::const_iterator = aa.begin();*/
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	Print(v);
//
//	list<int> lt;
//
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	Print(lt);
//
//
//	return 0;
//}

//#define N 100

//template<class T>
//class Stack
//{
//private:
//	T _a[N];
//	int _top;
//};
//
//int main()
//{
//	Stack<int> st1; // 10
//	Stack<int> st2; // 100
//
//	return 0;
//}

template<class T, size_t N>
class Stack
{
public:
	void func()
	{
	
		N = 0;
	}
private:
	T _a[N];
	int _top;
};

//template<class T, double N>
//class BB
//{};

//int main()
//{
//	Stack<int, 10> st1; // 10
//	Stack<int, 100> st2; // 100
//
//	//st1.func();
//
//	return 0;
//}

//int main()
//{

//	//
//	//int a[10];
//	array<int, 10> a;
//	a[0] = 0;
//	for (auto e : a)
//	{
//		cout << e << " ";
//	}
//	//a[10];
//
//	vector<int> v(10, 0);
//	//v[10];
//
//	return 0;
//}

template<class T>
bool Less(T left, T right)
{
	return left < right;
}
//template<>
//bool Less<int*>(int* left, int* right)
//{
//	return *left < *right;
//}

//bool Less(int* left, int* right)
//{
//	return *left < *right;
//}

template<class T>
bool Less(T* left, T* right)
{
	return *left < *right;
}

//int main()
//{
//	cout << Less(1, 2) << endl;
//
//	int a = 1, b = 2;
//	cout << Less(&a, &b) << endl;
//
//	double c = 1.1, d = 2.2;
//	cout << Less(&c, &d) << endl;
//
//	return 0;
//}

template<class T1, class T2>
class Data
{
public:
	Data() { cout << "Data<T1, T2>" << endl; }
private:
	T1 _d1;
	T2 _d2;
};

template<>
class Data<int, double>
{
public:
	Data() { cout << "Data<int,double>" << endl; }
private:
};

template<class T1>
class Data<T1, double>
{
public:
	Data() { cout << "Data<T1, double>" << endl; }
private:
};
template<class T1, class T2>
class Data<T1*, T2*>
{
public:
	Data() { cout << "Data<T1*, T2*>" << endl; }
private:
};

template<class T1, class T2>
class Data<T1&, T2&>
{
public:
	Data() { cout << "Data<T1&, T2&>" << endl; }
private:
};

//int main()
//{
//	Data<int, int> d1;
//	Data<int, double> d2;
//	Data<int*, double> d3;
//	Data<double, double> d4;
//	Data<double*, double*> d5;
//	Data<void*, int*> d6;
//	Data<int&, double&> d7;
//
//	return 0;
//}

//#include"Stack.h"
//
//int main()
//{
//	lwh::stack<int> st;  // call xxstackxx(0x324242)
//	st.push(1);  // call xxpushi(?)
//	st.pop();
//
//	st.size();   // call xxsizexx(0xdadada)
//	st.top();
//
//	lwh::A aa;
//	aa.func1(1);   // call xxfunc1xx(?)
//	//aa.func2();  // call xxfunc2xx(?)
//
//	lwh::stack<double> st1;  // call xxstackxx(0x324242)
//	st1.push(1);  // call xxpushi(?)
//	st1.pop();
//
//	return 0;
//}


class Person
{
public:
	void Print()
	{
		cout << "name:" << _name << endl;
		cout << "age:" << _age << endl;
	}
	
private:
	string _name = "peter"; 
	int _age = 18;  
};

class Student : public Person
{
public:
	void func()
	{
		//cout << "name:" << _name << endl;
		//cout << "age:" << _age << endl;
	}
protected:
	int _stuid; 
};

class Teacher : public Person
{
protected:
	int _jobid; 
};
int main()
{
	Student s;
	Teacher t;
	s.Print();
	t.Print();

	return 0;
}