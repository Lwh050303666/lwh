#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include"string.h"
void test_string1()
{
	lwh::string s1("hello world");
	cout << s1.c_str() << endl;

	lwh::string s2;
	cout << s2.c_str() << endl;

	for (size_t i = 0; i < s1.size(); i++)
	{
		s1[i]++;
	}
	cout << endl;

	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	const lwh::string s3("hello world");
	s3[0];

	//bit::string::const_iterator cit = s3.begin();
	auto cit = s3.begin();
	while (cit != s3.end())
	{
	

		cout << *cit << " ";
		++cit;
	}
	cout << endl;

	lwh::string::iterator it = s1.begin();
	while (it != s1.end())
	{
		*it += 1;

		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto ch : s1)
	{
		cout << ch << " ";
	}
	cout << endl;
}

void test_string2()
{

	lwh::string s1("hello world");
	cout << s1.c_str() << endl;

	s1.push_back(' ');
	s1.push_back('#');
	s1.append("hello bit");
	cout << s1.c_str() << endl;

	lwh::string s2("hello world");
	cout << s2.c_str() << endl;

	s2 += ' ';
	s2 += '#';
	s2 += "hello bit";
	cout << s2.c_str() << endl;
}

void test_string3()
{
	lwh::string s1("helloworld");
	cout << s1.c_str() << endl;

	s1.insert(5, 3, '#');
	cout << s1.c_str() << endl;

	s1.insert(0, 3, '#');
	cout << s1.c_str() << endl;


	lwh::string s2("helloworld");
	s2.insert(5, "%%%%%");
	cout << s2.c_str() << endl;
}

void test_string4()
{
	lwh::string s1("helloworld");
	cout << s1.c_str() << endl;

	s1.erase(5, 3);
	cout << s1.c_str() << endl;

	s1.erase(5, 30);
	cout << s1.c_str() << endl;

	s1.erase(2);
	cout << s1.c_str() << endl;
}

void test_string5()
{
	
	lwh::string url = "ftp://www.baidu.com/?tn=65081411_1_oem_dg";

	size_t pos1 = url.find("://");
	if (pos1 != lwh::string::npos)
	{
		lwh::string protocol = url.substr(0, pos1);
		cout << protocol.c_str() << endl;
	}

	size_t pos2 = url.find('/', pos1 + 3);
	if (pos2 != lwh::string::npos)
	{
		lwh::string domain = url.substr(pos1 + 3, pos2 - (pos1 + 3));
		lwh::string uri = url.substr(pos2 + 1);

		cout << domain.c_str() << endl;
		cout << uri.c_str() << endl;
	}
}

int main()
{
	test_string5();

	return 0;
}