#define CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);
//
//    return 0;
//}
//



//编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d %d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}


//编写一个函数 reverse_string(char * string)
//void reverse_string(char arr[])
//{
//	int l = 0;
//	int r = strlen(arr)-1;
//
//	while (l<r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++;
//		r--;
//	}
//}

//void reverse_string(char* str)
//{
//	int l = 0;
//	int r = strlen(str) - 1;
//
//	while (l < r)
//	{
//		char tmp = *(str + l);
//		*(str + l) = *(str + r);
//		*(str + r) = tmp;
//
//		l++;
//		r--;
//	}
//}
//
//int Strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int l = 0;
//	int r = Strlen(str) - 1;
//
//	while (l < r)
//	{
//		char tmp = *(str + l);
//		*(str + l) = *(str + r);
//		*(str + r) = tmp;
//
//		l++;
//		r--;
//	}
//}


//
//int Strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = Strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(Strlen(str+1)>=2)
//		reverse_string(str+1);
//	
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";/
//	reverse_string(arr);
//
//	printf("%s\n", arr);/
//
//	return 0;
//}


//int Strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + Strlen(str + 1);
//	else
//		return 0;
//}

//int Strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + Strlen(++str);//
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = Strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//
//int main()
//{
//	int arr1[5 + 6] = {0};
//	int arr2[5] = {0};
//
//	//int n = 10;
//	//int arr3[n];/
//
//
//	return 0;
//}
//

//int arr[10];
//
//int main()
//{
//	//创建的同时给数组一些值，这叫初始化
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int arr2[10] = { 1,2,3 };
//	//int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//int arr4[] = { 1,2,3 };
//	//int arr5[10] = { 1,2,3 };
//
//	//char arr6[3] = { 'a', 'b', 'c' };
//	//char arr7[] = { 'a', 'b', 'c' };
//
//	//char arr8[10] = "abc";
//	//char arr9[] = "abc";
//
//	char arr8[] = "abc";
//	char arr9[] = {'a', 'b', 'c'};
//
//	printf("%s\n", arr8);
//	printf("%s\n", arr9);
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
/
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//倒序打印
//	for (i = sz-1; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
/
//	for (i = 0; i<sz; i+=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[0];
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p --- %p\n", p + i, &arr[i]);
//	}
//
//
//
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	//}
//
//	return 0;
//}
//

//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int arr2[3][4] = { 1,2,3,4,5};
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//	int arr4[][2] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		int j = 0;
//		for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	printf("\n");
//
//
//	int*p = &arr[0][0];
//	int k = 0;
//	for (k = 0; k < 12; k++)
//	{
//		printf("%d ", *(p + k));
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	//0~9
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		arr[i] = i;
	}

	return 0;
}


