#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//enum Sex
//{
//	//该枚举类型的三种可能取值
//	//他们都是常量，被称为枚举常量
//	MALE = 3,//0
//	FEMALE = 5,
//	SECRET = 7
//};
//enum Sex
//{
//	//该枚举类型的三种可能取值
//	//他们都是常量，被称为枚举常量
//	MALE=3,//0
//	FEMALE=5,
//	SECRET=7
//};
//
//
//int main()
//{
//	enum Sex sex1 = MALE;
//	enum Sex sex2 = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//int main()
//{
//	enum Sex sex1 = MALE;
//	enum Sex sex2 = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
#include <stdlib.h>

//写一个计算器-完成整数的加法、减法、乘法、除法

//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,
//	MUL,
//	DIV
//};
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("****** 1. add    2. sub     ******\n");
//	printf("****** 3. mul    4. div     ******\n");
//	printf("****** 0. exit              ******\n");
//	printf("**********************************\n");
//}

//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case SUB://
//			break;
//		case ADD:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//联合体的关键字：union
//结构体的关键字：struct
//枚举的关键：enum

//struct S
//{
//	char c;//0
//	//1~3 浪费了
//	int i;//4~7
//};
//
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(struct S));//?
//	printf("%zd\n", sizeof(union Un));
//
//	return 0;
//}
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un un = { 0 };
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%zd\n", sizeof(un));
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//
//	return 0;
//}
//union Un
//	{
//		short arr[7];//14    2 8 2
//		int i;//4                4
//	};
//	
//	int main()
//	{
//		printf("%d\n", sizeof(union Un));
//	
//		return 0;
//	}
//写一个程序，判断当前机器是大端？还是小端？

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//0x 00 00 00 01
//	//
//	return 0;
//}
//union Un
//	{
//		char c;
//		int i;
//	};
//	
//	int main()
//	{
//		union Un un = { 0 };
//		un.i = 1;
//		if (un.c == 1)
//		{
//			printf("小端\n");
//		}
//		else
//		{
//			printf("大端\n");
//		}
//		//0x 00 00 00 01
//		//
//		return 0;
//	}
//int main()
//{
//	//申请10个整型的空间
//	//
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//空间开辟失败
//		perror("malloc");
//		return 1;
//	}
//	//可以使用这个40个字节的
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//释放
//	free(p);
//	p = NULL;
//	//
//	return 0;
//}
//int main()
//{
//	//申请10个整型的空间
//	//
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//空间开辟失败
//		perror("malloc");
//		return 1;
//	}
//	//可以使用这个40个字节的
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	//...
//
//	free(p);//err
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	//申请10个整型的空间
//int*p = (int*)malloc(10*sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//*(p+i)
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
// int main()
//{
//	//申请10个整型的空间
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//使用空间
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//*(p+i)
//	}
//
//	//调整空间-希望变成20个整型空间
//	int* ptr = (int*)realloc(p, 12 * sizeof(int));//?
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用
//	//...
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int* p  = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;//*(p+i)
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		p[i] = i;//*(p+i)
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//...
//
//	free(p);
//	p = NULL;
//	
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i <5; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	free(p);
//	p = NULL;
//
//	//...
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//void test()
//{
//	int flag = 1;
//	int*p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		//
//		return;
//	}
//
//	//使用
//
//	if (flag)
//		return;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	
//	//.....
//
//	return 0;
//}
//int main()
//{
//	//int* p = malloc(20);
//	//realloc(p, 40);
//
//	int*p = (int*)realloc(NULL, 40);//== malloc(40)
//	if (p == NULL)
//	{
//
//	}
//	return 0;
//}
//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//    //printf("%s\n", str);
//}
//
//int main()
//{
//    //char* p = "hehe\n";
//    //printf("hehe\n");
//    //printf(p);
//
//    Test();
//    return 0;
//}
//#include <string.h>
//
//void GetMemory(char** p)
//{
//    *p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");//ok
//    printf(str);//ok
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
#include <string.h>
//
//char* GetMemory()
//{
//    char* p = (char*)malloc(100);
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    strcpy(str, "hello world");//ok
//    printf(str);//ok
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int *p = test();
	printf("hehe");
	printf("%d\n", *p);

	return 0;
}










































































































































































