#include<iostream>
using namespace std;
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
////private:
//	char _a;
//};
//
//int main()
//{
//	A aa1;
//	A aa2;
//	A aa3;
//	cout << sizeof(A) << endl;
//	cout << sizeof(aa1) << endl;
//	aa1._a = 1;
//	aa1.PrintA();
//
//	return 0;
//}
class A1 {
public:
	void f1() {}
private:
	char _ch;
	//int _a;
	double _d;
};
class A2 {
public:
	void f2() {}
};
class A3
{
};
//int main()
//{
//    //cout << sizeof(A1) << endl;
//    cout << sizeof(A2) << endl;
//    cout << sizeof(A3) << endl;
//    A2 aa1;
//    A2 aa2;
//    cout << &aa1 << endl;
//    cout << &aa2 << endl;
//
//    return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// d1.Print();
//	// d2.Print();
//	void Print()
//	{
//		//this = nullptr;
//		cout << this << endl;
//		cout << this->_year << "-" << _month << "-" << _day << endl;
//	}
//	/*void Print(Date* const this)
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}*/
//
////private:
//	int _year;    
//	int _month;   
//	int _day;      
//};
//
//int main()
//{
//	Date d1, d2;
//	d1.Init(2022, 1, 11);
//	d2.Init(2022, 1, 12);
//	d1.Print();
//	d2.Print();
//
//	//Date::_year;
//	//d1._year;
//
//	/*d1.Print(&d1);
//	d2.Print(&d2);*/
//
//    return 0;
//}

//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//
//	/*A::Print(nullptr);
//	A::Print(p);*/
//
//
//	return 0;
//}

typedef int DataType;
class Stack
{
public:
	Stack(DataType* a, int n)
	{
		cout << "Stack(DataType* a, int n)" << endl;
		_array = (DataType*)malloc(sizeof(DataType) * n);
		if (NULL == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
			return;
		}
		memcpy(_array, a, sizeof(DataType) * n);

		_capacity = n;
		_size = n;
	}
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" << endl;
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
			return;
		}

		_capacity = capacity;
		_size = 0;
	}
	/*void Init()
	{
		_array = (DataType*)malloc(sizeof(DataType) * 4);
		if (NULL == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
			return;
		}

		_capacity = 4;
		_size = 0;
	}*/

	void Push(DataType data)
	{
		CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	void Pop()
	{
		if (Empty())
			return;
		_size--;
	}

	DataType Top() { return _array[_size - 1]; }
	int Empty() { return 0 == _size; }
	int Size() { return _size; }

	//void Destroy()
	//{
	//	if (_array)
	//	{
	//		free(_array);
	//		_array = NULL;
	//		_capacity = 0;
	//		_size = 0;
	//	}
	//}

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
	void CheckCapacity()
	{
		if (_size == _capacity)
		{
			int newcapacity = _capacity * 2;
			DataType* temp = (DataType*)realloc(_array, newcapacity * sizeof(DataType));
			if (temp == NULL)
			{
				perror("reallocÉêÇë¿Õ¼äÊ§°Ü!!!");
				return;
			}
			_array = temp;
			_capacity = newcapacity;
		}
	}
private:
	DataType* _array;
	int _capacity;
	int _size;
};

//int main()
//{
//	Stack s;
//	//s.Init();
//
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	s.Push(4);
//
//	printf("%d\n", s.Top());
//	printf("%d\n", s.Size());
//
//	s.Pop();
//	s.Pop();
//	printf("%d\n", s.Top());
//	printf("%d\n", s.Size());
//
//	//s.Destroy();
//	return 0;
//}

class Date
{
public:
	
	/*Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}*/

	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:

	int _year = 1;
	int _month = 1;
	int _day = 1;

};

int main()
{

	Date d1;

	Date d2(2023, 11, 11);
	d1.Print();
	d2.Print();

	Date d3(2000);
	d3.Print();

	//Date d1;
	//d1.Date();
	//Date d2;
	//d2.Date(2023, 1, 1);

	return 0;
}