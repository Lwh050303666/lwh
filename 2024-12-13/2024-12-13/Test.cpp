#include<iostream>
using namespace std;

class A
{
public:
	//A(int a = 0)
	A(int a = 0, int b = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}

	A(const A& aa)
		: _a(aa._a)
	{
		cout << "A(const A& aa):" << this << endl;
	}

	~A()
	{
		cout << "~A():" << this << endl;
	}

private:
	int _a;
};

//int main()
//{
//	int* p3 = (int*)malloc(sizeof(int)); // C
//	int* p4 = new int;
//	free(p3);
//	delete p4;
//
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = new A(1,1);
//	free(p1);
//	delete p2;
//
//	A* p5 = (A*)malloc(sizeof(A) * 10);
//	//A* p6 = new A[4]{ A(1,1),A(2,2),A(3,3) };
//	A* p6 = new A[4]{ A(1,1),A(2,2),A(3,3),A(4,4) };
//	free(p5);
//	delete[] p6;
//
//	return 0;
//}


//int main()
//{
//	int* p3 = (int*)operator new(sizeof(int)); // CPP
//	int* p4 = new int;
//	operator delete(p3);
//	delete p4;
//
//	A* p1 = (A*)operator new(sizeof(A));
//	A* p2 = new A(1,1);
//	operator delete(p1);
//	delete p2;
//}

//int main()
//{
//	int* p1 = nullptr;
//	try
//	{
//		do
//		{
//			//p1 = (int*)malloc(1024 * 1024);
//			p1 = new int[1024 * 1024];
//			cout << p1 << endl;
//		} while (p1);
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}


typedef int DataType;
class Stack
{
public:
	Stack(size_t capacity = 3)
	{
		cout << "Stack(size_t capacity = 3)" << endl;

		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
			return;
		}

		_capacity = capacity;
		_size = 0;
	}

	void Push(DataType data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}

private:
	DataType* _array;
	int       _capacity;
	int       _size;
};

//int main()
//{
//	try
//	{
//		Stack* p1 = new Stack;
//		delete p1;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	A* p1 = (A*)malloc(sizeof(A));
//
//	p1->~A();
//	free(p1);
//
//	return 0;
//}

//int main()
//{
//	char* p1 = new char[1024 * 1024 * 1024]{'b','i','t','\0'};
//	cout << (void*)p1 << endl;
//
//	return 0;
//}
//
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}
//template<typename T>
//template<typename Tp>
//template<typename Ty>

template<typename T>  
void Swap(T& x1, T& x2)
{
	T tmp = x1;
	x1 = x2;
	x2 = tmp;
}

int main()
{
	int a = 0, b = 1;
	double c = 1.1, d = 2.2;
	//Swap(a, b);
	//Swap(c, d);
	swap(a, b);
	swap(c, d);
	int* p1 = &a, * p2 = &b;
	swap(p1, p2);
	//Date d1(2023,5,12), d2(2023, 1, 1);
	return 0;
}