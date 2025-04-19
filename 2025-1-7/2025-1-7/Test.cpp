#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
////template<class Tp>
////template<typename T>
////void Swap(T& x, T& y)
////{
////	T tmp = x;
////	x = y;
////	y = tmp;
////}
////
////template<typename T1, typename T2>
////T1 Func(const T1& x, const T2& y)
////{
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
////template<class Tp>
////template<typename T>
////void Swap(T& x, T& y)
////{
////	T tmp = x;
////	x = y;
////	y = tmp;
////}
////
////template<typename T1, typename T2>
////T1 Func(const T1& x, const T2& y)
////{
////	cout << x << " " << y << endl;
////
////	return x;
////}
////int main()
////{
////	int a = 0, b = 1;
////	Swap(a, b);
////
////	double c = 1.1, d = 2.2;
////	Swap(c, d);
////
////	Func(1, 2);
////	Func(1, 2.2);
////
////	return 0;
////}
////	cout << x << " " << y << endl;
////
////	return x;
////}
////int main()
////{
////	int a = 0, b = 1;
////	Swap(a, b);
////
////	double c = 1.1, d = 2.2;
////	Swap(c, d);
////
////	Func(1, 2);
////	Func(1, 2.2);
////
////	return 0;
////}
////template<class T>
////T Add(const T& left, const T& right)
////{
////    return left + right;
////}
////
////template<class T>
////T* Alloc(int n)
////{
////    return new T[n];
////}
////
////int main()
////{
////    int a1 = 10, a2 = 20;
////    double d1 = 10.1, d2 = 20.2;
////    cout << Add(a1, a2) << endl;
////    cout << Add(d1, d2) << endl;
//
////template<class T>
////T Add(const T& left, const T& right)
////{
////    return left + right;
////}
////
////template<class T>
////T* Alloc(int n)
////{
////    return new T[n];
////}
////
////int main()
////{
////    int a1 = 10, a2 = 20;
////    double d1 = 10.1, d2 = 20.2;
////    cout << Add(a1, a2) << endl;
////    cout << Add(d1, d2) << endl;
////    cout << Add(a1, (int)d1) << endl;
////    cout << Add((double)a1, d1) << endl;
////    cout << Add<int>(a1, d1) << endl;
////    cout << Add<double>(a1, d1) << endl;
////    double* p1 = Alloc<double>(10);
////
////    return 0;
////}
//
////typedef int DataType;
////class StackInt
////{
////public:
////	StackInt(size_t capacity = 3)
////	{
////		_array = (DataType*)malloc(sizeof(DataType) * capacity);
////    cout << Add(a1, (int)d1) << endl;
////    cout << Add((double)a1, d1) << endl;
////
////    cout << Add<int>(a1, d1) << endl;
////    cout << Add<double>(a1, d1) << endl;
////
////    double* p1 = Alloc<double>(10);
////
////    return 0;
////}
////typedef int DataType;
////class StackInt
////{
////public:
////	StackInt(size_t capacity = 3)
////	{
////		_array = (DataType*)malloc(sizeof(DataType) * capacity);
////    cout << Add(a1, (int)d1) << endl;
////    cout << Add((double)a1, d1) << endl;
////    cout << Add<int>(a1, d1) << endl;
////    cout << Add<double>(a1, d1) << endl;
////    double* p1 = Alloc<double>(10);
////
////    return 0;
////}
//
////typedef int DataType;
////class StackInt
////{
////public:
////	StackInt(size_t capacity = 3)
////	{
////		_array = (DataType*)malloc(sizeof(DataType) * capacity);
////		if (NULL == _array)
////		{
////			perror("malloc申请空间失败!!!");
////			return;
////		}
////
////		_capacity = capacity;
////		_size = 0;
////	}
////
////	void Push(DataType data)
////	{
////		// CheckCapacity();
////		_array[_size] = data;
////		_size++;
////	}
////
////
////	~StackInt()
////		if (NULL == _array)
////		{
////			perror("malloc申请空间失败!!!");
////			return;
////		}
////
////		_capacity = capacity;
////		_size = 0;
////	}
////
////	void Push(DataType data)
////	{
////		// CheckCapacity();
////		_array[_size] = data;
////		_size++;
////	}
////
////	~StackInt()
////	{
////		if (_array)
////		{
////			free(_array);
////			_array = NULL;
////			_capacity = 0;
////			_size = 0;
////		}
////	}
////private:
////	DataType* _array;
////	int _capacity;
////	int _size;
////};
////
////typedef double DataType;
////class StackDouble
////{
////public:
////	{
////		if (_array)
////		{
////			free(_array);
////			_array = NULL;
////			_capacity = 0;
////			_size = 0;
////		}
////	}
////
////private:
////	DataType* _array;
////	int _capacity;
////	int _size;
////};
////
////typedef double DataType;
////class StackDouble
////{
////public:
////	StackDouble(size_t capacity = 3)
////	{
////		_array = (DataType*)malloc(sizeof(DataType) * capacity);
////		if (NULL == _array)
////		{
////			perror("malloc申请空间失败!!!");
////			return;
////		}
////
////		_capacity = capacity;
////		_size = 0;
////	}
////
////	void Push(DataType data)
////	{
////		// CheckCapacity();
////		_array[_size] = data;
////		_size++;
////	}
////
////	StackDouble(size_t capacity = 3)
////	{
////		_array = (DataType*)malloc(sizeof(DataType) * capacity);
////		if (NULL == _array)
////		{
////			perror("malloc申请空间失败!!!");
////			return;
////		}
////
////		_capacity = capacity;
////		_size = 0;
////	}
////
////	void Push(DataType data)
////	{
////		// CheckCapacity();
////		_array[_size] = data;
////		_size++;
////	}
////
////	~StackDouble()
////	{
////		if (_array)
////		{
////			free(_array);
////			_array = NULL;
////			_capacity = 0;
////			_size = 0;
////		}
////	}
////
////private:
////	DataType* _array;
////	int _capacity;
////	int _size;
////};
////
////int main()
////{
////	StackInt s1; // int
////	StackDouble s2; // double
////
////	// char
////	// int*
////	// Date
////
////
////	return 0;
////}
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3);
//
//	void Push(const T& data);
////{
////	StackInt s1; // int
////	StackDouble s2; // double
////
////	// char
////	// int*
////	// Date
////
////
////	return 0;
////}
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3);
//
//	void Push(const T& data);
//
//	// 其他方法...
//
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	T* _array;
//	int _capacity;
//	int _size;
//};
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	T* _array;
//	int _capacity;
//	int _size;
//};
//
//
//template<class T>
//Stack<T>::Stack(size_t capacity)
//{
//	/*_array = (T*)malloc(sizeof(T) * capacity);
//	if (NULL == _array)
//	{
//		perror("malloc申请空间失败!!!");
//		return;
//	}*/
//	_array = new T[capacity];
//
//	_capacity = capacity;
//	_size = 0;
//}
//
//template<class T>
//void Stack<T>::Push(const T& data)
//{
//	// CheckCapacity();
//
//template<class T>
//Stack<T>::Stack(size_t capacity)
//{
//	/*_array = (T*)malloc(sizeof(T) * capacity);
//	if (NULL == _array)
//	{
//		perror("malloc申请空间失败!!!");
//		return;
//	}*/
//	_array = new T[capacity];
//
//	_capacity = capacity;
//	_size = 0;
//}
//
//template<class T>
//void Stack<T>::Push(const T& data)
//{
//	// CheckCapacity();
//	_array[_size] = data;
//	_size++;
//}
////int main()
////{
////	Stack<int> s1;    // int
////	Stack<double> s2; // double
////	Stack<char> s3;   // char
////
////	return 0;
////}
//
//	_array[_size] = data;
//	_size++;
//}
//// 类名：Stack
//// 类型：Stack<T>
//
//// 20:05继续
////int main()
////{
////	Stack<int> s1;    // int
////	Stack<double> s2; // double
////	Stack<char> s3;   // char
////
////	return 0;
////}
////int main()
////{
////	string s1;
////	std::string s2;
////
////	std::string name("张三");
////	name = "张飞";
////
////	return 0;
////}
//
////int main()
////{
////	string s1;
////	string s2("张三");
////	string s3("hello world");
////	string s4(10, '*');
////int main()
////{
////	string s1;
////	std::string s2;
////
////	std::string name("张三");
////	name = "张飞";
////
////	return 0;
////}
//
////int main()
////{
////	string s1;
////	string s2("张三");
////	string s3("hello world");
////	string s4(10, '*');
////	string s5(s2);
////
////	cout << s1 << endl;
////	cout << s2 << endl;
////	cout << s4 << endl;
////	cout << s5 << endl;
////
////	string s6(s3, 6, 5);
////	cout << s3 << endl;
////	cout << s6 << endl;
////
////	cout << (s1 == s2) << endl;
////	cout << (s1 > s2) << endl;
////
////	string s7(s3, 6);
////	cout << s7 << endl;
////
////	string s8(s3, 6, 100);
////	cout << s8 << endl;
////
////	string s5(s2);
////
////	cout << s1 << endl;
////	cout << s2 << endl;
////	cout << s4 << endl;
////	cout << s5 << endl;
////
////	string s6(s3, 6, 5);
////	cout << s3 << endl;
////	cout << s6 << endl;
////
////	cout << (s1 == s2) << endl;
////	cout << (s1 > s2) << endl;
////
////	string s7(s3, 6);
////	cout << s7 << endl;
////
////	string s8(s3, 6, 100);
////	cout << s8 << endl;
////	//string url("https://cplusplus.com/reference/string/string/string/");
////	string url("https://en.cppreference.com/w/");
////	string sub1(url, 0, 5);
////	string sub2(url, 8, 13);
////	//string sub3(url, 22, url.size()-22);
////	string sub3(url, 22);
////	cout << sub1 << endl;
////	cout << sub2 << endl;
////	cout << sub3 << endl;
////
////	s1 = s2;
////	cout << s1 << endl;
////
////	s1 = "1111";
////	cout << s1 << endl;
////
////	s1 = '2';
////	cout << s1 << endl;
////	//string url("https://cplusplus.com/reference/string/string/string/");
////	string url("https://en.cppreference.com/w/");
////	string sub1(url, 0, 5);
////	string sub2(url, 8, 13);
////	//string sub3(url, 22, url.size()-22);
////	string sub3(url, 22);
////	cout << sub1 << endl;
////	cout << sub2 << endl;
////	cout << sub3 << endl;
////
////	s1 = s2;
////	cout << s1 << endl;
////
////	s1 = "1111";
////	cout << s1 << endl;
////
////	s1 = '2';
////	cout << s1 << endl;
////
////	return 0;
////}
//
////class string
////{
//// operator+=(char ch)
//// operator+=(const char* str)
////private:
////	char* _str;
////	size_t _size;
////	size_t _capacity;
////};
//
////int main()
////{
////	// 增
////	string s1("hello");
////	// 尾插入一个字符
////	//s1.push_back(' ');
////	//// 尾插一个字符串
////	return 0;
////}
//
////class string
////{
//// operator+=(char ch)
//// operator+=(const char* str)
////private:
////	char* _str;
////	size_t _size;
////	size_t _capacity;
////};
//
////int main()
////{
////	// 增
////	string s1("hello");
////	// 尾插入一个字符
////	//s1.push_back(' ');
////	//// 尾插一个字符串
////	return 0;
////}
//
////class string
////{
//// operator+=(char ch)
//// operator+=(const char* str)
////private:
////	char* _str;
////	size_t _size;
////	size_t _capacity;
////};
//
////int main()
////{
////	// 增
////	string s1("hello");
////	// 尾插入一个字符
////	//s1.push_back(' ');
////	//// 尾插一个字符串
////	//s1.append("world");
////	s1 += ' ';
////	s1 += "world";
////	cout << s1 << endl;
////
////	size_t x = 0;
////	cin >> x;
////
////	// 要求x转成string对象
////	string xstr;
////	while (x)
////	{
////		size_t val = x % 10;
////		xstr += ('0'+val);
////		x /= 10;
////	}
////	
////	// 逆置
////
////	return 0;
////	//s1.append("world");
////	s1 += ' ';
////	s1 += "world";
////	cout << s1 << endl;
////
////	size_t x = 0;
////	cin >> x;
////
////	// 要求x转成string对象
////	string xstr;
////	while (x)
////	{
////		size_t val = x % 10;
////		xstr += ('0'+val);
////		x /= 10;
////	}
////	
////	// 逆置
////
////	return 0;
////}
//
////int main()
////{
////	string s0;
////	string s1("hello world");
////
////	cout << s1 << endl;
////
////	// 遍历string
////	cout << s1.size() << endl;
////
////	for (size_t i = 0; i < s1.size(); i++)
////	{
////		s1[i]++;
////	}
////	cout << endl;
////
////	s1[0]--;
////}
//
////int main()
////{
////	string s0;
////	string s1("hello world");
////
////	cout << s1 << endl;
////
////	// 遍历string
////	cout << s1.size() << endl;
////
////	for (size_t i = 0; i < s1.size(); i++)
////	{
////		s1[i]++;
////	}
////	cout << endl;
////
////	s1[0]--;
////	// 下标+[]
////	for (size_t i = 0; i < s1.size(); i++)
////	{
////		cout << s1[i]<<" ";
////	}
////	cout << endl;
////
////	char s3[] = "hello world";
////	s3[1]++; // -> *(s3+1)
////	s1[1]++; // s1.operator[](1);
////
////	string::iterator it = s1.begin();
////	while (it != s1.end())
////	{
////		// 写
////		(*it)--;
////
////		++it;
////	}
////	cout << endl;
////	for (size_t i = 0; i < s1.size(); i++)
////	{
////		cout << s1[i]<<" ";
////	}
////	cout << endl;
////
////	char s3[] = "hello world";
////	s3[1]++; // -> *(s3+1)
////	s1[1]++; // s1.operator[](1);
////
////	string::iterator it = s1.begin();
////	while (it != s1.end())
////	{
////		// 写
////		(*it)--;
////
////		++it;
////	}
////	cout << endl;
////
////	it = s1.begin();
////	while (it != s1.end())
////	{
////		// 读
////		cout << *it << " ";
////		++it;
////	}
////	cout << endl;
////
////	//for (char& ch : s1)
////	for (auto& ch : s1)
////	{
////		ch++;
////	}
////	cout << endl;
////
////	for (char ch : s1)
////
////	it = s1.begin();
////	while (it != s1.end())
////	{
////		// 读
////		cout << *it << " ";
////		++it;
////	}
////	cout << endl;
////	//for (char& ch : s1)
////	for (auto& ch : s1)
////	{
////		ch++;
////	}
////	cout << endl;
////
////	for (char ch : s1)
////	{
////		cout << ch << " ";
////	}
////	cout << endl;
////	vector<int> v;
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	v.push_back(4);
////
////	vector<int>::iterator vit = v.begin();
////	while (vit != v.end())
////	{
////		cout << *vit << " ";
////		++vit;
////	}
////	cout << endl;
////
////	{
////		cout << ch << " ";
////	}
////	cout << endl;
////	vector<int> v;
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	v.push_back(4);
////
////	vector<int>::iterator vit = v.begin();
////	while (vit != v.end())
////	{
////		cout << *vit << " ";
////		++vit;
////	}
////	cout << endl;
////
////	list<int> lt;
////	lt.push_back(10);
////	lt.push_back(20);
////	lt.push_back(3);
////	lt.push_back(4);
////
////	list<int>::iterator lit = lt.begin();
////	while (lit != lt.end())
////	{
////		cout << *lit << " ";
////		++lit;
////	}
////	cout << endl;
////
////	reverse(v.begin(), v.end());
////	reverse(lt.begin(), lt.end());
////
////	for (auto e : v)
////	{
////	list<int> lt;
////	lt.push_back(10);
////	lt.push_back(20);
////	lt.push_back(3);
////	lt.push_back(4);
////
////	list<int>::iterator lit = lt.begin();
////	while (lit != lt.end())
////	{
////		cout << *lit << " ";
////		++lit;
////	}
////	cout << endl;
////
////	reverse(v.begin(), v.end());
////	reverse(lt.begin(), lt.end());
////
////	for (auto e : v)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////
////	for (auto e : lt)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////
////	sort(v.begin(), v.end());
////	for (auto e : v)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////
////	return 0;
////}
//
////		cout << e << " ";
////	}
////	cout << endl;
////
////	for (auto e : lt)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////
////	sort(v.begin(), v.end());
////	for (auto e : v)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////
////	return 0;
////}
//
//void Func(const string& s)
//{
//	string::const_iterator it = s.begin();
//	while (it != s.end())
//	{
//		// *it += 2;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//string::const_reverse_iterator rit = s.rbegin();
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		// (*rit) += 3;
//
//		cout << *rit << " ";
//		++rit;
//void Func(const string& s)
//{
//	string::const_iterator it = s.begin();
//	while (it != s.end())
//	{
//		// *it += 2;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//string::const_reverse_iterator rit = s.rbegin();
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		// (*rit) += 3;
//
//		cout << *rit << " ";
//		++rit;
//	}
//}
//
////int main()
////{
////	string s1("hello world");
////	//string::reverse_iterator rit = s1.rbegin();
////	auto rit = s1.rbegin();
////	while (rit != s1.rend())
////	{
////		(*rit) += 3;
////
////		cout << *rit << " ";
////		++rit;
////	}
////	cout << endl;
////	cout << s1 << endl;
////
////	Func(s1);
////
//	}
//}
//
////int main()
////{
////	string s1("hello world");
////	//string::reverse_iterator rit = s1.rbegin();
////	auto rit = s1.rbegin();
////	while (rit != s1.rend())
////	{
////		(*rit) += 3;
////
////		cout << *rit << " ";
////		++rit;
////	}
////	cout << endl;
////	cout << s1 << endl;
////
////	Func(s1);
////
////	return 0;
////}
//
//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	//cout << s1.length() << endl;
//	//cout << s1.max_size() << endl;
//	cout << s1.capacity() << endl;
//
//	size_t old = s1.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		s1 += 'x';
//
//		if (old != s1.capacity())
//		{
//			cout << "扩容：" << s1.capacity() << endl;
//			old = s1.capacity();
////	return 0;
////}
//
//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	//cout << s1.length() << endl;
//	//cout << s1.max_size() << endl;
//	cout << s1.capacity() << endl;
//
//	size_t old = s1.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		s1 += 'x';
//
//		if (old != s1.capacity())
//		{
//			cout << "扩容：" << s1.capacity() << endl;
//			old = s1.capacity();
//		}
//
//	}
//
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	s1.clear();
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//void TestPushBackReserve()
//{
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//
//		}
//
//	}
//
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	s1.clear();
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//void TestPushBackReserve()
//{
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//
//
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//
//	s.clear();
//	cout << "capacity changed: " << sz << '\n';
//
//	s.reserve(10);
//	sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//}
//
//
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//
//	s.clear();
//	cout << "capacity changed: " << sz << '\n';
//
//	s.reserve(10);
//	sz = s.capacity();
//	cout << "capacity changed: " << sz << '\n';
//}
//
//// reserve // 保留
//// reverse // 反转
//int main()
//{
//	TestPushBackReserve();
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	s1.reserve(100);
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	//s1.resize(200);
//	s1.resize(200, 'x');
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	s1.resize(20);
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	s1.resize(0);
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//int main()
//{
//	try {
//		string s1("hello world");
//		s1.at(0) = 'x';
//	s1.resize(200, 'x');
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	s1.resize(20);
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	s1.resize(0);
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//int main()
//{
//	try {
//		string s1("hello world");
//		s1.at(0) = 'x';
//		cout << s1 << endl;
//		//s1[15];  
//		s1.at(15); 
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
//	string s1("hello world");
//	s1.append("ssssss");
//	cout << s1 << endl;
//
//	s1.assign("111111111");
//	cout << s1 << endl;
//		cout << s1 << endl;
//		//s1[15];  
//		s1.at(15); 
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
//	string s1("hello world");
//	s1.append("ssssss");
//	cout << s1 << endl;
//
//	s1.assign("111111111");
//	cout << s1 << endl;
//
//	s1.insert(0, "hello");
//	cout << s1 << endl;
//
//	s1.insert(5, "world");
//	cout << s1 << endl;
//
//	s1.insert(0, 10, 'x');
//	cout << s1 << endl;
//
//	s1.insert(s1.begin()+10, 10, 'y');
//	cout << s1 << endl;
//
//	return 0;
//}
//

//int main()
//{
//	string s1("hello world");
//
//	s1.insert(0, "hello");
//	cout << s1 << endl;
//
//	s1.insert(5, "world");
//	cout << s1 << endl;
//
//	s1.insert(0, 10, 'x');
//	cout << s1 << endl;
//
//	s1.insert(s1.begin()+10, 10, 'y');
//	cout << s1 << endl;
//
//	return 0;
//}
//

//int main()
//{
//	string s1("hello world");
//	s1.erase(5, 1);
//	cout << s1 << endl;
//
//	s1.erase(5);
//	cout << s1 << endl;
//
//	string s2("hello world");
//	s2.erase(0, 1);
//	cout << s2 << endl;
//
//	s2.erase(s2.begin());
//	cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world hello lwh");
//	s1.erase(5, 1);
//	cout << s1 << endl;
//
//	s1.erase(5);
//	cout << s1 << endl;
//
//	string s2("hello world");
//	s2.erase(0, 1);
//	cout << s2 << endl;
//
//	s2.erase(s2.begin());
//	cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world hello lwh");
//	s1.replace(6, 5, "xxxxxxxxxxxxxxxxxxxxxx");
//	cout << s1 << endl;
//
//	s1.replace(6, 23, "yyyyy");
//	cout << s1 << endl;
//
//	string s2("hello world hello lwh");
//	string s3;
//	for (auto ch : s2)
//	{
//		if (ch != ' ')
//		{
//			s3 += ch;
//		}
//		else
//		{
//			s3 += "20%";
//		}
//	}
//
//	s2 = s3;
//	cout << s2 << endl;
//	cout << s2.c_str() << endl;

//	string filename = "test.cpp";
//	filename += ".zip";
//
//	FILE* fout = fopen(filename.c_str(), "r");
//
//	return 0;
//}

//int main()
//{
//	string url = "ftp://www.baidu.com/?tn=65081411_1_oem_dg";
//	// http://www.baidu.com/?tn=65081411_1_oem_dg
//	//string url = "https://legacy.cplusplus.com/reference/string/string/";
//
//	s2 = s3;
//	cout << s2 << endl;
//	cout << s2.c_str() << endl;
//
//	string filename = "test.cpp";
//	filename += ".zip";
//
//	FILE* fout = fopen(filename.c_str(), "r");
//
//	return 0;
//}

//int main()
//{
//	string url = "ftp://www.baidu.com/?tn=65081411_1_oem_dg";
//	// http://www.baidu.com/?tn=65081411_1_oem_dg
//	//string url = "https://legacy.cplusplus.com/reference/string/string/";

//	size_t pos1 = url.find("://");
//	string protocol;
//	if (pos1 != string::npos)
//	{
//		protocol = url.substr(0, pos1);
//	}
//	cout << protocol << endl;
//
//	string domain;
//	string uri;
//
//	size_t pos2 = url.find('/', pos1 + 3);
//	if (pos2 != string::npos)
//	{
//		domain = url.substr(pos1 + 3, pos2 - (pos1 + 3));
//		uri = url.substr(pos2 + 1);
//	}
//	cout << domain << endl;
//	cout << uri << endl;
//
//
//	// test.cpp.zip
//	// test.tar.zip
//
//	return 0;
//}

//int main()
//{
//	std::string str("Please, replace the vowels in this sentence by asterisks.");
//	std::size_t found = str.find_first_of("abc");
//	while (found != std::string::npos)
//	{
//		str[found] = '*';
//		found = str.find_first_of("abc", found + 1);
//	}
//
//	std::cout << str << '\n';
//
//	return 0;
//}

//int main()
//{
//	string stri = to_string(1234);
//	string strd = to_string(11.22);
//
//	char str1[] = "abcd";
//	char str2[2];
//	str2[0] = 98;
//
//	cout << str2[0] << endl;
//
//	char str3[] = "";
//	cout << sizeof(str3) << endl;
//	cout << str3 << endl;
//
//
//	str3[1]--;
//	cout << sizeof(str3) << endl;
//	cout << str3 << endl;
//
//
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
class Base1
{
public:
	virtual void Func1()
	{
		cout << "Base1::Func1()" << endl;
	}
	/*virtual void Func2()
	{
	cout << "base1::func2()" << endl;
	}*/
private:
	int _b = 6;
};
class Base2
{
public:
	virtual void Func1()
	{
		cout << "Base2::Func1()" << endl;
	}
	virtual void Func2()
	{
		cout << "Base2::Func2()" << endl;
	}
private:
	int _b = 6;
};
class Derive : public Base1, public Base2
{
public:
	void Func2()
	{
		cout << "Derive::Func2()" << endl;
	}
private:
	int _d = 5;
};
int main()
{
	string stri = to_string(1234);
	string strd = to_string(11.22);

	char str1[] = "abcd";
	char str2[2];
	str2[0] = 98;

	cout << str2[0] << endl;

	char str3[] = "";
	cout << sizeof(str3) << endl;
	cout << str3 << endl;


	str3[1]--;
	cout << sizeof(str3) << endl;
	cout << str3 << endl;
	Derive d;
	Base2 b1;

	Base2* b = &d;
	b->Func2();
	/*b = &b1;
	b->Func2();*/
	//b2->Func2();


	return 0;
}