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
//	int arr[];//δ֪��С������ - arr������������ĳ�Ա
//};
//
//struct S2
//{
//	int n;
//	char c;
//	double d;
//	int arr[0];//δ֪��С������ - arr������������ĳ�Ա
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
//	//ʹ����Щ�ռ�
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//����psָ��ռ�Ĵ�С
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
//	//ʹ��
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//�ͷſռ�
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
//	//��arr�е�20��Ԫ�ظ�ֵΪ1~20
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//	//�����ռ�
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
//	//�ͷ�
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
//	//20�Ĳ���Ķ���������
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//int main()
//{
//	//1. ���ļ�
//	//���ļ��ɹ��Ļ������ص�����Ч��ָ��
//	//�����ʧ�ܣ��򷵻�NULL
//	//FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test.txt", "w");
//	//                ����·��
//	FILE* pf = fopen(".\\..\\..\\test.txt", "w");
//	//                ���·��
//	
//	//. ��ʾ��ǰ·��
//	//.. ��ʾ��һ��·��
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//
//	//�ر��ļ�
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
//	//д�ļ�
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	//�ر��ļ�
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
//	//���ļ�
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
//	//�ر��ļ�
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
//	//���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
int main()
{
	int ch = fgetc(stdin);//�Ӽ��̣���׼���������϶�ȡ
	fputc(ch, stdout);//���ַ������д������Ļ����׼�������

	return 0;
}




























































































































