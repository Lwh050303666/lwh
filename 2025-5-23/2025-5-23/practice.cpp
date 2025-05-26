//#include<iostream>
//int main() {
//	std::cout << "Hello World\n" << std::endl;
//	return 0;
//}

//#include<iostream>
//int add(int x, int y) {
//	return x + y;
//}
//int mul(int x, int y) {
//	return x * y;
//}
//int main() {
//	int a, b;
//	add(a, b);
//	mul(a, b);
//	return 0;
//}
#include<stdio.h>
#include<iostream>
using namespace std;
//编写程序，使用while循环将50到100的整数相加
//int main() {
//	int sum = 0;
//	for (int i = 50; i <= 100; i++)
//		sum += i;
//	printf("%d", sum);
//	return 0;
//}



//int main() {
//	for (int i = 10; i >= 0; i--)
//		printf("%d ", i);
//	return 0;
//}


//int main() {
//	int a, b;
//	for (int i = a; i <= b; i++)
//		printf("%d", i);
//	return 0;
//}


//编写程序，从cin读取一组数，输出其和。
//#include <iostream>
//
//int main()
//{
//    int sum = 0;
//    for (int value = 0; std::cin >> value; )
//        sum += value;
//    std::cout << sum << std::endl;
//    return 0;
//}


//int main() {
//	int a, b;
//	if (a <= b) {
//		for (int i = a; i <= b; i++)
//			printf("%d", i);
//	}
//	else {
//		for (int i = b; i <= a; i++)
//			printf("%d", i);
//	}
//	return 0;
//}




//int main() {
//	sales_item total;//定义一个变量，用于初始化书的种类
//	if (cin >> total) {
//		sales_item trans;//声明另个一变量，用于判断和上面所选的书是否相同
//		while (cin >> trans) {
//			if (total.isbn() == trans.isbn())//如果是同一本书的话
//				total += trans;
//		}
//	else {
//		cout << total;
//	}
//	}
//}


//int main() {
//	printf("\101\n");
//	return 0;
//}


//int main() {
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		if (str1 == str2)  cout << "The two strings are equal." << endl;
//		else cout << "The larger string is" << ((str1 > str2) ? str1 : str2);
//	}
//	return 0;
//}



//int main() {
//	string str1, str2;
//	while (cin >> str1 >> str2) {
//		if (str1.size() == str2.size()) cout << "The two strings have the same length." << endl;
//		else cout << "The longer string is" << ((str1.size() > str2.size()) ? str1 : str2) << endl;
//
//	}
//	return 0;
//}

////未隔开的
//int main() {
//	string result, s;
//	while (cin >> s) result += s;
//	cout << result << endl;
//	return 0;
//}


//隔开的
//int main() {
//	string result, s;
//	while (cin >> s)  result += s + " ";
//	cout << result << endl;
//	return 0;
//}


//int main() {
//	string s = "this is a string";
//	for (auto& x : s)  x = 'X';
//	cout << s << endl;
//	return 0;
//}


//int main() {
//	string s = "this is a string";
//	decltype(s.size()) i = 0;
//	while (i != s.size()) {
//		s[i] = 'X';  ++i;
//	}
//	cout << s << endl;
//	for (i = 0; i != s.size(); ++i)
//		s[i] = 'Y';
//	cout << s << endl;
//	return 0;
//}



//int main() {
//	string s = "this,is.a:string!";
//	string result;
//	for (auto x : s) {
//		if (!ispunct(x))  result += x;
//	}
//	cout << result << endl;
//	return 0;
//}
#include<string>
#include<vector>

//int main() {
//	vector<int>v;
//	int i;
//	while (cin >> i)  v.push_back(i); 
//	return 0;
//}



//int main() {
//	vector<string>v;
//	string i;
//	while (cin >> i)  v.push_back(i);
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <cctype>
//#include <vector>
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::vector;
//using std::string;
//
//int main()
//{
//	vector<int> v1;         // size:0,  no values.
//	vector<int> v2(10);     // size:10, value:0
//	vector<int> v3(10, 42); // size:10, value:42
//	vector<int> v4{ 10 };     // size:1,  value:10
//	vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
//	vector<string> v6{ 10 };  // size:10, value:""
//	vector<string> v7{ 10, "hi" };  // size:10, value:"hi"
//
//	cout << "v1 size :" << v1.size() << endl;
//	cout << "v2 size :" << v2.size() << endl;
//	cout << "v3 size :" << v3.size() << endl;
//	cout << "v4 size :" << v4.size() << endl;
//	cout << "v5 size :" << v5.size() << endl;
//	cout << "v6 size :" << v6.size() << endl;
//	cout << "v7 size :" << v7.size() << endl;
//
//	cout << "v1 content: ";
//	for (auto i : v1)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//
//	cout << "v2 content: ";
//	for (auto i : v2)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//
//	cout << "v3 content: ";
//	for (auto i : v3)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//
//	cout << "v4 content: ";
//	for (auto i : v4)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//
//	cout << "v5 content: ";
//	for (auto i : v5)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//
//	cout << "v6 content: ";
//	for (auto i : v6)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//
//	cout << "v7 content: ";
//	for (auto i : v7)
//	{
//		cout << i << " , ";
//	}
//	cout << endl;
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <cctype>
//#include <vector>
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::vector;
//using std::string;


//int main()
//{
//	vector<string> v;
//	string s;
//
//	while (cin >> s)
//	{
//		v.push_back(s);
//	}
//
//	for (auto& str : v)
//	{
//		for (auto& c : str)
//		{
//			c = toupper(c);
//		}
//	}
//
//	for (auto i : v)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}



//int main() {
//	vector<int>ivec;
//	int i;
//	while (cin >> i)  ivec.push_back(i);
//	for (int i = 0; i < ivec.size() - 1; i++) cout << ivec[i] + ivec[i + 1] << endl;
//	cout << "  " << endl;
//	int m = 0;
//	int n = ivec.size() - 1;
//	while (m < n) {
//		cout << ivec[m] + ivec[n] << endl;
//		++m;    --n;
//	}
//	return 0;
//}



//int main() {
//	pair<string, int>max_duplicated;
//	int count = 0;
//	for (string str, prestr; cin >> str; prestr = str) {
//		if (str == prestr) ++count;
//		else count = 0;
//		if (count > max_duplicated.second()) max_duplicated = { prestr,count };
//		
//	}
//}


//int main() {
//	string rsp;
//	do {
//		cout << "Please input two strings";
//		string str1, str2;
//		cin >> str1 >> str2;
//		cout << (str1 <= str2 ? str1 : str2)
//			<< "is less than the other." << "\n\n"
//			<< "More?Enter yes or no:";
//		cin >> rsp;
//	} while (!rsp.empty()&&tolower(rsp[0])=='y');
//	return 0;
//}





int main()
{
    string read, tmp;
    while (cin >> read)
        if (read == tmp) break; else tmp = read;

    if (cin.eof())  cout << "no word was repeated." << endl; //eof(end of file)判断输入是否结束,或者文件结束符,等同于 CTRL+Z
    else            cout << read << " occurs twice in succession." << endl;

    return 0;
}









