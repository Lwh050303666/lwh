//bool Del_Min(SqList& L, ElemType& value)
//{
//	//ɾ��˳���L����СֵԪ�ؽ�㣬��ͨ�������Ͳ���value������ֵ
//	//��ɾ���ɹ����򷵻�true;���򷵻�false
//	if (L.length == 0)
//		return false;//��� ��ֹ��������
//	value = L.data[0];
//	int pos = 0;
//	for(int i=1;i<L.length;i++)
//		if (L.data[i] < value) {
//			value = L.data[i];
//			pos = i;
//		}
//	L.data[pos] = L.data[L.length - 1];
//	L.length--;
//	return true;
//}




//���һ����Ч�㷨����˳���L������Ԫ�����ã�Ҫ���㷨�Ŀռ临�Ӷ�Ϊ0��1��
//void reverse(seqlist& l) {
//	int size = sizeof(l);
//	int temp
//	if (size % 2 == 0)
//	{
//		for(int i=0;i<L.length/2;i++)
//		
//	}
//
//}

//#include <stdio.h>
//const int A = 101; // ����Խ��
//int N, M, arr[A][A], cnt;
//int main() {
//    scanf_s("%d %d", &N, &M);
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            scanf_s("%d", &arr[i][j]); // ��� &
//            if (arr[i][j] > 0)
//                cnt += arr[i][j];
//        }
//        printf("\n"); // ��ȷ���з����������ѭ��
//    }
//    printf("%d", cnt);
//    return 0;
//}

//#include<stdio.h>
//int arr[6] = { 1,2,3,4,5,6 };
//int* p = arr;
//void  print(int * a,size_t n) {
//for(int *p=a;p<a+n;p++)
//		printf("%d", (*p));
//	
//}
//int main() {
//	size_t n = sizeof(arr) / sizeof(* arr);
//	print(arr,n);
//	return 0;
//}
//


//#include <stdio.h>
//
//void printArray(int* arr, size_t n) {
//    int* p;
//    for (p = arr; p < arr + n; ++p) {
//        printf("%d ", *p);
//    }
//    printf("\n");
//}
//
//int main(void) {
//    int arr[] = { 10, 20, 30, 40, 50 };
//    size_t n = sizeof(arr) / sizeof * arr;
//    printArray(arr, n);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<stdio.h>
//int main() {
//	printf("hehe\n");
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	printf("hello lwh\n");
//}

//int main(int argc, char* argv[]) {
//	return 0;
//}
//int main() {
//	printf("%d", sizeof(int));
//	return 0;
//}


////extern ���������ⲿ����
//extern int g_a;

//enum color {
//	RED,
//	GREEN,
//	BLUE
//};
//int main() {
//	printf("%d", RED);
//	return 0;
//}


//c�����ṩ��һ���⺯�������Լ����ַ����ĳ��ȣ�ͳ�Ƶ���\0֮ǰ�ַ��ĸ���
#include<string.h>
#include<stdbool.h>
//int main() {
//	char ch1[] = { 'a','b','c' };
//	char ch2[] = "abc";
//	int len1= strlen(ch1);
//	int len2 = strlen(ch2);
//	printf("%d\n", len1);
//	printf("%d", len2);
//	printf("\a");
//}

//int main() {
//	int line = 0;
//	while (line <= 20000) {
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	if (line > 20000)
//		printf("��offer\n");
//	else printf("�ú�ѧϰ��������\n");
//	return 0;
//}

//������ԭ�룬���룬���붼��Ҫ���������
//


//ͳ��tmp�Ķ��������м���1
//int count_diff_one(int m, int n) {
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp) {
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}


//���O(n^2)
//void sort(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


//int main() {
//	printf("%d",sizeof(int[10]));
//	return 0;
//}


//#define MAX 100
//
//typedef enum Sex
//{
//	MALE,
//	FEMALE=5,
//	SECRET
//}Sex;
//
//int main()
//{
//	//int m = MAX;
//	enum Sex s = FEMALE;
//	printf("%d\n", sizeof(s));
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//�жϵ�ǰ������Ĵ�С�˴洢

//int main()
//{
//	int a = 1;//0x 00 00 00 01
//	//��-----------------> ��
//	//01 00 00 00 - С��
//	//00 00 00 01 - ���
//	//
//	if (*(char*)&a == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}

int check_sys()
{
	union
	{
		char c;
		int i;
	}un;
	un.i = 1;
	return un.c;
}

int main()
{
	int a = 1;//0x 00 00 00 01
	//��-----------------> ��
	//01 00 00 00 - С��
	//00 00 00 01 - ���
	//
	int ret = check_sys();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");

	return 0;
}
