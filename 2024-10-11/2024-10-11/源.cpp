#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    str = NULL;
//
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//struct S
//{
//	int n;
//	char c;
//	double d;
//	int arr[];//未知大小的数组 - arr就是柔性数组的成员
//};
//
//struct S2
//{
//	int n;
//	char c;
//	double d;
//	int arr[0];//未知大小的数组 - arr就是柔性数组的成员
//};
#include <stdlib.h>
//
//struct S
//{
//	int n;//4
//	int arr[];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 20*sizeof(int));
//	if(ps == NULL)
//	{
//		perror("malloc()");
//		return 1;
//	}
//	//使用这些空间
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//调整ps指向空间的大小
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 40 * sizeof(int));
//	if (ptr != NULL) 
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		return 1;
//	}
//	//使用
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//释放空间
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int*tmp = (int*)malloc(20*sizeof(int));
//	if (tmp != NULL)
//	{
//		ps->arr = tmp;
//	}
//	else
//	{
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	//给arr中的20个元素赋值为1~20
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//	//调整空间
//	tmp = (int*)realloc(ps->arr, 40*sizeof(int));
//	if (tmp != NULL)
//	{
//		ps->arr = tmp;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("a = %d\n", a);
//	scanf("%d", &a);
//	printf("a = %d\n", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	//20的补码的二进制序列
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//int main()
//{
//	//1. 打开文件
//	//打开文件成功的话，返回的是有效的指针
//	//如果打开失败，则返回NULL
//	//FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test.txt", "w");
//	//                绝对路径
//	FILE* pf = fopen(".\\..\\..\\test.txt", "w");
//	//                相对路径
//	
//	//. 表示当前路径
//	//.. 表示上一级路径
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
int main()
{
	int ch = fgetc(stdin);//从键盘（标准输入流）上读取
	fputc(ch, stdout);//将字符输出（写）到屏幕（标准输出流）

	return 0;
}




























































































































