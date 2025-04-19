#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

void test_list1()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);

	lt.push_front(10);
	lt.push_front(20);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//v.insert(v.begin()+5, 10);
	auto it = lt.begin();
	for (size_t i = 0; i < 5; i++)
	{
		++it;
	}
	lt.insert(it, 100);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	it = find(lt.begin(), lt.end(), 3);
	if (it != lt.end())
	{
		lt.insert(it, 30);

		*it *= 100;
	}

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;


	it = find(lt.begin(), lt.end(), 2);
	if (it != lt.end())
	{
		lt.erase(it);
		// *it *= 100;
	}

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	it = lt.begin();
	while (it != lt.end())
	{
		if (*it % 2 == 0)
		{
			it = lt.erase(it);
		}
		else
		{
			++it;
		}
	}

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list2()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);

	lt.push_front(10);
	lt.push_front(20);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	reverse(lt.begin(), lt.end());
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	lt.reverse();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;


	//sort(lt.begin(), lt.end());
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	lt.sort();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}


void test_op()
{
	srand(time(0));
	const int N = 100000;
	vector<int> v;
	v.reserve(N);
	deque<int> dp;

	list<int> lt1;
	list<int> lt2;

	for (int i = 0; i < N; ++i)
	{
		auto e = rand();
		lt2.push_back(e);
		lt1.push_back(e);
	}

	int begin1 = clock();
	for (auto e : lt1)
	{
		v.push_back(e);
	}

	sort(v.begin(), v.end());

	size_t i = 0;
	for (auto& e : lt1)
	{
		e = v[i++];
	}

	int end1 = clock();

	int begin2 = clock();
	lt2.sort();
	int end2 = clock();

	printf("vector sort:%d\n", end1 - begin1);
	printf("list sort:%d\n", end2 - begin2);
}

void test_list3()
{
	int myints[] = { 17,89,7,14 };
	/*std::list<int> mylist(myints, myints + 4);

	mylist.remove(890);

	for (auto e : mylist)
	{
		cout << e << " ";
	}
	cout << endl*/;


	std::list<int> mylist1, mylist2;
	std::list<int>::iterator it;

	// set some initial values:
	for (int i = 1; i <= 4; ++i)
		mylist1.push_back(i);      // mylist1: 1 2 3 4

	for (int i = 1; i <= 3; ++i)
		mylist2.push_back(i * 10);   // mylist2: 10 20 30

	for (auto e : mylist1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto e : mylist2)
	{
		cout << e << " ";
	}
	cout << endl << endl;

	it = mylist1.begin();
	++it;                         // points to 2
	//mylist1.splice(it, mylist2);

	//mylist1.splice(it, mylist2, ++mylist2.begin());
	//mylist1.splice(it, mylist2, ++mylist2.begin(), mylist2.end());

	mylist1.splice(mylist1.begin(), mylist1, ++mylist1.begin(), mylist1.end());

	for (auto e : mylist1)
	{
		cout << e << " ";
	}
	cout << endl;

	for (auto e : mylist2)
	{
		cout << e << " ";
	}
	cout << endl;
}

#include "list.h"
#include "vector.h"

int main()
{
	//test_list3();
	//test_op();

	lwh::test_list5();
	lwh::test_vector1();

	return 0;
}