#include<iostream>
using namespace std;
//int main()
//{
//	cout << "hello world!!!" << endl;
//	return 0;
//}

//void Func(int a = 10);
//
//void Func(int a = 20)
//{
//}
//int main() {
//	Func();
//	return 0;
//}
// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//int main()
//{
//	Add(10, 20);
//	Add(10.1, 20.2);
//	f();
//	f(10);
//	f(10, 'a');
//	f('a', 10);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	// int& ra;   // 该条语句编译时会出错
//	int& ra = a;
//	int& rra = a;
//	printf("%p %p %p\n", &a, &ra, &rra);
//}
//int main()
//{
//	const int a = 10;
//	//int& ra = a;   // 该语句编译时会出错，a为常量
//	const int& ra = a;
//	// int& b = 10; // 该语句编译时会出错，b为常量
//	const int& b = 10;
//	double d = 12.34;
//	//int& rd = d; // 该语句编译时会出错，类型不同
//	const int& rd = d;
//}
