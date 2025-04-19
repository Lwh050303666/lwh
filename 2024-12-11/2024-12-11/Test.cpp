#include<iostream>
#include<string>
//#include<list>
using namespace std;

//class Date
//{
//public:
//	Date* operator&()
//	{
//		cout << "Date* operator&()" << endl;
//		//return this;
//		return nullptr;
//	}
//
//	const Date* operator&() const
//	{
//		cout << "const Date* operator&() const" << endl;
//
//		return this;
//	}
//private:
//	int _year = 1;
//	int _month = 1; 
//	int _day = 1; 
//};
//
//int main()
//{
//	Date d1;
//	const Date d2;
//
//	cout << &d1 << endl;
//	cout << &d2 << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" <<endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int ref)
//		:_ref(ref)
//		,_n(1)
//		,_x(2)
//	{
//		//_n = 0;
//		//_ref = ref;
//	}
//
//private:
//	A _aobj;	  
//

//	int& _ref;	  
//	const int _n; 
//
//	int _x = 1;  
//};
//
//int main()
//{
//	B bb1(10, 1); 
//	//B bb2(11, 2);
//
//
//	return 0;
//}

//class A
//{
//public:
//	/*A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}*/
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int& ref)
//		:_ref(ref)
//		, _n(1)
//		, _x(2)
//		, _aobj(a)
//	{
//		//_n = 0;
//		//_ref = ref;
//	}
//
//private:
//	A _aobj;	 
//
//	int& _ref;	  
//	const int _n; 
//
//	int _x = 1;  
//

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
//			return;
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//class MyQueue
//{
//public:
//	MyQueue()
//	{}
//
//	MyQueue(int capacity)
//		:_pushst(capacity)
//		,_popst(capacity)
//	{}
//
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//int main()
//{
//	int n = 10;
//	B bb1(10, n);
//	//B bb2(11, 2);
//
//	MyQueue q1;
//	MyQueue q2(100);
//
//	return 0;
//}class A
//{
//public:
//	/*A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}*/
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int& ref)
//		:_ref(ref)
//		, _n(1)
//		, _x(2)
//		, _aobj(a)
//	{
//		//_n = 0;
//		//_ref = ref;
//	}
//
//private:
//	A _aobj;	 
//
//	int& _ref;	 
//	const int _n;
//
//	int _x = 1; 
//};
//

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
//			return;
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//class MyQueue
//{
//public:
//	MyQueue()
//	{}
//
//	MyQueue(int capacity)
//		:_pushst(capacity)
//		,_popst(capacity)
//	{}
//
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//int main()
//{
//	int n = 10;
//	B bb1(10, n);
//	//B bb2(11, 2);
//
//	MyQueue q1;
//	MyQueue q2(100);
//
//	return 0;
//}class A
//{
//public:
//	/*A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}*/
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int& ref)
//		:_ref(ref)
//		, _n(1)
//		, _x(2)
//		, _aobj(a)
//	{
//		//_n = 0;
//		//_ref = ref;
//	}
//
//private:

//	A _aobj;	
//
//	int& _ref;	  
//	const int _n; 
//
//	int _x = 1;  
//};
//
//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
//			return;
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//class MyQueue
//{
//public:
//	MyQueue()
//	{}
//
//	MyQueue(int capacity)
//		:_pushst(capacity)
//		,_popst(capacity)
//	{}
//
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//int main()
//{
//	int n = 10;
//	B bb1(10, n);
//	//B bb2(11, 2);
//
//	MyQueue q1;
//	MyQueue q2(100);
//
//	return 0;
//}class A
//{
//public:
//	/*A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}*/
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int& ref)
//		:_ref(ref)
//		, _n(1)
//		, _x(2)
//		, _aobj(a)
//	{
//		//_n = 0;
//		//_ref = ref;
//	}
//
//private:
//	A _aobj;	
//

//	int& _ref;	 
//	const int _n; 
//
//	int _x = 1;  
//};
//

typedef int DataType;
class Stack
{
public:
	Stack(size_t capacity = 10)
	{
		_array = (DataType*)malloc(capacity * sizeof(DataType));
		if (nullptr == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
			return;
		}

		_size = 0;
		_capacity = capacity;
	}

	void Push(const DataType& data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	~Stack()
	{
		if (_array)
		{
			free(_array);
			_array = nullptr;
			_capacity = 0;
			_size = 0;
		}
	}

private:
	DataType* _array;
	size_t _size;
	size_t _capacity;
};

class MyQueue
{
public:
	MyQueue()
	{
	}

	MyQueue(int capacity)
		:_pushst(capacity)
		, _popst(capacity)
	{
		//_size = 1;
	}

private:
	Stack _pushst;
	Stack _popst;
	int _size = 0;
};
//
//int main()
//{
//	int n = 10;
//	B bb1(10, n);
//	//B bb2(11, 2);
//
//	MyQueue q1;
//	MyQueue q2(100);
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 10)
//		: _a((int*)malloc(capacity * sizeof(int)))
//		,_top(0)
//		,_capacity(capacity)
//	{
//		if (nullptr == _a)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
//			exit(-1);
//		}
//
//		memset(_a, 0, sizeof(int) * capacity);
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//
//class AA
//{
//public:
//	AA(int row = 10, int col = 5)
//		:_row(row)
//		,_col(col)
//	{
//		_aa = (int**)malloc(sizeof(int*) * row);
//		for (int i = 0; i < row; i++)
//		{
//			_aa[i] = (int*)malloc(sizeof(int) * col);
//		}
//	}
//private:
//	int** _aa;
//	int _row;
//	int _col;
//};
//
//int main()
//{
//	A aa(1);
//	aa.Print();
//
//	Stack st;
//
//	return 0;
//}

//class A
//{
//public:
//	/*explicit A(int a)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}*/
//	
//	A(int a)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()
//{
//	A aa1(1);
//	A aa2 = 2; 
//
//	//A& aa3 = 2;
//	const A& aa3 = 2;
//
//
//	int i = 10;
//	double d = i;
//
//	return 0;
//}

//class string
//{
//public:
//	string(const char* str)
//	{}
//};

//class list
//{
//public:
//	void push_back(const string& str)
//	{}
//};
//
//int main()
//{
//	string name1("ÕÅÈý");
//	string name2 = "ÕÅÈý";
//
//	list lt1;
//	string name3("ÀîËÄ");
//	lt1.push_back(name3);
//
//	lt1.push_back("ÀîËÄ");
//
//	return 0;
//}

//int _scount = 0;
//
//class A
//{
//public:
//	A() { ++_scount; }
//	A(const A& t) { ++_scount; }
//	~A() { --_scount; }
//	/*static int GetACount() { return _scount; }*/
//private:
//	/*static int _scount;*/
//};
//
//A aa0;
//
//void Func()
//{
//	static A aa2;
//	cout << __LINE__ << ":" << _scount << endl;
//
//	_scount++;
//}
//
//int main()
//{
//	cout <<__LINE__<<":"<< _scount << endl;  // 1
//	A aa1;
//	
//	Func();  // 3
//	Func();  // 3
//
//	return 0;
//}

//class A
//{
//public:
//	A() 
//	{
//		++_scount;
//	}
//
//	A(const A& t) 
//	{
//		++_scount;
//	}
//
//	~A() 
//	{ 
//		--_scount;
//	}
//
//
//	void Func1()
//	{
//		GetACount();
//	}
//
//	void Func2()
//	{
//		++_a1;
//	}
//

//	static int GetACount() 
//	{ 
//	
//		// Func2();
//
//		//_a1++;
//		return _scount;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
////public:
//	static int _scount;
//};
//
//int A::_scount = 0;
//
//A aa0;
//
//void Func()
//{
//	static A aa2;
//	cout << __LINE__ << ":" << aa2.GetACount() << endl;
//
//	//_scount++;
//}
//
//int main()
//{
//	cout <<__LINE__<<":"<< A::GetACount() << endl;  // 1
//	A aa1;
//	
//	Func();  // 3
//	Func();  // 3
//
//	return 0;
//}

class A
{
public:
	static A GetStackObj()
	{
		A aa;
		return aa;
	}

	static A* GetHeapObj()
	{
		return new A;
	}
private:
	A()
	{
	}

private:
	int _a1 = 1;
	int _a2 = 2;
};

int main()
{
	//static A aa1;   
	//A aa2;           
	//A* ptr = new A; 
	A::GetStackObj();
	A::GetHeapObj();

	return 0;
}