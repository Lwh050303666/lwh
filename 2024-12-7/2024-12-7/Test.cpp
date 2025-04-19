#include<iostream>
using namespace std;
#include"Func.h"
//int Add(int x, int y)
//{
//	return (x + y) * 10;
//}
//#define Add(int x, int y) return (x+y);
//#define Add(x, y) x+y
//#define Add(x, y) (x+y)
//#define Add(x, y) ((x)+(y))
//
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		cout << Add(i, i + 1) << endl;
//	}
//
//	if (Add(10, 20))
//	{
//
//	}
//
//	Add(10, 20) * 20;
//
//	int a = 1, b = 2;
//	Add(a | b, a & b); // (a | b + a & b)
//
//	return 0;
//}

inline int Add(int x, int y)
{
	return (x + y) * 10;
}
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		cout << Add(i, i + 1) << endl;
//	}
//}

//#include "Func.h"
//
//int main()
//{
//	f(10);
//
//	return 0;
//}

//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//
//	int arr[] = { 1,2,3 };
//	for (auto& x : arr)
//	{
//		x++;
//	}
//
//	for (auto& x : arr)
//	{
//		cout << x << endl;
//	}
//
//	return 0;
//}


//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()
//{
//	f(0);
//	f(NULL);
//	f(nullptr);
//}

struct Queue
{
	void Init()
	{

	}
};

//struct Stack
//class Stack
//{
//public:

//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == a)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
//			return;
//		}
//
//		capacity = defaultCapacity;
//		top = 0;
//	}
//
//	void Push(int x)
//	{
//		//...
//		a[top++] = x;
//	}
//
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//
//	// ....
//private:

//	int* a;
//	int top;
//	int capacity;
//};
class Date
{
public:
	void Init(int year)
	{
		
		_year = year;
	}
private:
	int _year; 
	int _month;
	int _day;
};
#include"Func.h"

//int main()
//{
//	struct Stack st1;
//	st1.Init(20);
//
//	Stack st2;
//	st2.Init();
//	st2.Push(1);
//	st2.Push(2);
//	st2.Push(3);
//	st2.Push(4);
//	st2.Destroy();
//
//	return 0;
//}

//int main()
//{
//	Stack st1;
//	Stack st2;
//	//st1.top = 1;
//
//	//Stack::top = 1;
//
//	return 0;
//}

int main()
{

	Stack st1;
	Stack st2;
	Stack st3;
	Stack st4;

	st1.top = 0;
	st1.Push(1);

	st2.top = 1;
	st2.Push(1);
	cout << sizeof(st1) << endl;

	return 0;
}