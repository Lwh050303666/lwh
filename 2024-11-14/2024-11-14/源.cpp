#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void test(int b)
//{
//	printf("b = %d\n", b);
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = a++;
//	//int b = a;a=a+1;
//	//int b = ++a;
//	//a=a+1,b=a;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//
//	int a = 10;
//	//test(a++);
//	test(++a);
//
//	//printf("%d\n", ++a);//
//	//printf("%d\n", a);//
//
//	//printf("%d\n", a++);//
//	//printf("%d\n", a);//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	printf("%d\n", --a);//9
//	printf("%d\n", a);//9
//
//	return 0;
//}
//

//
//int main()
//{
//	//1
//	int a = 10;
//	int b = ++a;//b=11 a=11
//
//	//2
//	int a = 10;
//	int b = a + 1;//b=11 a=10
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	//time_t;
//	srand((unsigned int)time(NULL));
//
//	return 0;
//}
//

//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//(1)
//	printf("%zd\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//
//void test1(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test2(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] -->   *(arr+i)
//	}
//	printf("\n");
//}
//
//
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test1(arr, sz);
//	test2(arr, sz);
//
//
//	//printf("%s\n", arr);

//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a || b)
//	{
//		printf("haha\n");
//	}
//}


//int main()
//{
//	int y = 2048;
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		printf("Yes\n");
//	}
//
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = 0;
//	
//	if (a > b)
//		m = a;
//	else
//		m = b;
//
//	m = (a>b?a:b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = (a > 5 ? 3 : -3);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%d\n", arr[4]);
//	//3 + 4;
//	return 0;
//}
//
//int main()
//{
//	int len = strlen("abcdef");
//
//	return 0;
//}

//
//char int short long °¢ long long °¢ float double

//

//struct Book
//{
//	char name[20];
//	char author[30];
//	int price;
//};
//
//void print1(struct Book* p)
//{
//	printf("%s %s %d\n", (*p).name, (*p).author, (*p).price);
//	printf("%s %s %d\n", p->name, p->author, p->price);

//}
//
//int main()
//{
//	struct Book b1 = {"≈Ù∏ÁC”Ô—‘", "≈Ù∏Á", 66};
//	struct Book b2 = { "∫º∏ÁC++", "±»Ãÿ∫º∏Á", 88 };
//	printf("°∂%s°∑ %s %d\n", b1.name, b1.author, b1.price);
//	printf("°∂%s°∑ %s %d\n", b2.name, b2.author, b2.price);
//
//	print1(&b1);
//	return 0;
//}

//
//#include <stdio.h>
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;
//}
//
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;
//	stu.age = 20;
//
//	//set_age1(stu);
//	//printf("%d\n", stu.age);
//
//	pStu->age = 20;
//	set_age2(pStu);
//	printf("%d\n", stu.age);
//
//	return 0;
//}

//int main()
//{
//	//char --> signed char
//	char a = 3;
//	//Ωÿ∂œ
//	//00000000000000000000000000000011
//	//00000011 - a
//	//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000011
//	//01111111
//
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	printf("%d\n", c);




//	return 0;
//}

//


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)//10110110
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}
//

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 4;
//
//	int d = a + b + c;
//
//	//int d = a * 4 + b / 3 + c;
//
//	return 0;
//}
//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}
//
//


#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);

	return 0;
}