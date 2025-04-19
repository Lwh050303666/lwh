#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
#include"Stack.h"
//int a = 0;
//int main()
//{
//	int a = 1;
//
//	printf("%d\n", a);
//
//	printf("%d\n",::a);
//
//	return 0;
//}

//int a = 0;
//
//namespace lwh
//{
//	int a = 1;
//}

//int main()
//{
//	int a = 2;
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", lwh::a);
//
//
//	return 0;
//}


//int a = 0;
//
//namespace lwh
//{
//	int a = 1;
//}
//
//using namespace lwh;

//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

//namespace lwh
//{
//	int rand = 1;
//}
////
////int main()
////{
////	printf("%d\n", lwh::rand);
////	printf("%p\n", rand);
////
////	return 0;
////}
//
//namespace N1
//{
//    int a = 0;
//    int b;
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//
//    namespace N2
//    {
//        int a = 1;
//        int c;
//        int d;
//        int Sub(int left, int right)
//        {
//            return left - right;
//        }
//    }
//}
//
//int main()
//{
//    printf("%d\n", N1::a);
//    printf("%d\n", N1::N2::a);
//    printf("%d\n", N1::Add(1, 2));
//
//    printf("%d\n", lwh::x);
//    printf("%d\n", lwh::y);
//    printf("%d\n", lwh::rand);
//
//    return 0;
//}

//#include<iostream.h> 
//#include<iostream>
//#include<vector>
//#include<list>
//
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	std::cout << "hello world" << std::endl;
//	std::list<int> lt;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<list>
//
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//	std::cout << "hello world" << std::endl;
//
//	list<int> lt;
//
//	return 0;
//}

#include<iostream>
#include<vector>
#include<list>

using std::cout;
using std::endl;

//int main()
//{
//	int x = 10;
//	cout << "hello world" << x << '\n' << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//	cout << "hello world" << endl;
//
//	std::list<int> lt;
//
//	return 0;
//}

int main()
{
	int x = 10;
	double d = 11.11;
	cout << x << " " << d << endl;
	std::cin >> x >> d;
	cout << x << " " << d << endl;
	printf("%d,%.2f\n", x, d);
	cout << x << " " << d << endl;


	return 0;
}