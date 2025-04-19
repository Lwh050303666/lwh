//初高中时期我已经错过了很多的机会，怪就怪自己眼界窄心态差  我发誓我要把我丢掉的东西都拿回来
//人真正需要战胜和可以战胜的只能是自己
//#include<iostream>
//using namespace std;
//sum_solution() {
//
//}
//class solution {
//public:
//	int sum_solution(int n) {
//
//	}
//};

//静态成员函数不可以调用非静态成员函数


//设计一个类  在类外面只能在栈或者堆上创建对象
//class A
//{public:
//static A	GetStackObj() {
//	A aa;
//	return aa;
//	}
//static A GetHeapObj() {
//	return new A;
//}
//private:
//	A() {
//
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//int main()
//{
//	static A aa1;//静态区
//	A aa2;//栈
//	A* ptr = new A;//堆
//	GetStackObj();
//	GetHeapObj();
//	return 0;
//}



////友元   
//// 友元函数不能用const来修饰     一个函数可以是多个类的友元
////内部类
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	static int k;//不占用A的内存  因为静态变量实际上不存在类中   而是存在静态区
//	int h;
//public:
//	class B {
//	public:
//		void foo() {
//
//		}
//	private:
//		int b;
//	};
//};
//
//int main() {
//	cout << sizeof(A) << endl;
//	A aa;
//	A::B bb;
//}




//new对自定义类型会调用构造函数
//delete会调用析构函数
//模版参数可以用class和typename，不可以用struct
//#include<iostream>
//using namespace std;
//template<class T>
//T Add(const T& left, const T& right) {
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
////实参传递的类型，推演T的类型
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//	//显式实例化，用指定类型实例化
//
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//}
//
//template<typename T1,typename T2>
//T1 Func(const T1& x, const T2& y)
//{
//	cout << x << " " << y << endl;
//	return x;
//}
////有些函数无法自动推，只能显式实例化
////隐式类型转换和显式类型转换都会产生临时变量，临时变量具有常性



stack<int>s1;
stack<double>s2;
stack<char>s3;

//对普通类来说类名和类型一样
//对类模版来说 stack是类名，stack<int>这种实例化之后的结果才是类型
//stl是标准库的一部分





















