#define _CRT_SECURE_NO_WARNINGS 
//int main()
//{
//	int a = 10;
//	
//	//int b = a + 1;
//	//int b = ++a;
//
//	int ch = getchar();
//
#define _CRT_SECURE_NO_WARNINGS 
//int main()
//{
//	int a = 10;
//	
//	//int b = a + 1;
//	//int b = ++a;
//
//	int ch = getchar();
//
//	return 0;
//}
#include <stdio.h>
//
//#define MAX(x, y)  ((x)>(y)?(x):(y))
//
//int Max(int x, int y)
//{
//	int m = x > y ? x : y;
//	return m;
//}
//
//int main()
//{
//	//int m = MAX(6, 3);
//	int a = 4;
//	int b = 6;
//	int m = MAX(a++, b++);
//	//int m = ((a)>(b)?(a):(b));
//	//int m = Max(a++, b++);
//	printf("%d\n", m);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int *p1 = (int*)malloc(10*sizeof(int));
//	int* p2 = MALLOC(10, int);
//	//int *p2 = (int*)malloc(10*sizeof(int));
//	// 
//	//malloc(10, int)
//	return 0;
//}
//
//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//
//	return 0;
//}
//#define PRINT 1
//
//
//int main()
//{
//#ifdef PRINT
//	printf("hehe\n");
//#endif
//	return 0;
//}
//
//#include "test.h"
//#include <stdio.h>
//
//int main()
//{
//
//	return 0;
//}
//
//#define INT_PTR int*
//typedef int* int_ptr;
//int *a, b;
//int_ptr c, d;

//#define N 4
//
//#define Y(n) ((N+2)*n) 
//
//int main()
//{
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	return 0;
//}
//#define A 2+2
//#define B 3+3
//#define C A*B
//
//int main()
//{
//	printf("%d\n", C);
//	return 0;
//}
#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type, member)     (size_t)&(((type*)0)->member)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	//printf("%d\n", (size_t)&(((struct S*)0)->c1));
//
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}
//
//#define SWAP(x) (x=(((x&0x55555555)<<1)+((x&0xaaaaaaaa)>>1)))
//
//int main()
//{
//	int b = 012;
//	printf("%d\n", b);
//
//	int a = 10;
//	int a = -1;
//	
//	SWAP(a);
//
//	printf("%d\n", a);
//	return 0;
//}
//


int main()
{

	return 0;
}