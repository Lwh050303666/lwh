#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0~9
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	/*if (src == NULL || dest == NULL)
//	{
//		return;
//	}
//

//	/*assert(src != NULL);
//	assert(dest != NULL);
//
//	assert(dest && src);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//
//int main()
//{
//	//char arr1[20] = "xxxxxxxxxxx";
//	//char arr2[] =   "hello";
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	char arr3[20] = {0};
//	char* p = NULL;
//	my_strcpy(arr3, p);
//
//	return 0;
//}


//

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//	

//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}


//
//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//num = 20;//
//	//printf("%d\n", num);
//
//
//	const int num = 10;
//	//num = 20;
//	
//	int n = 1000;
//	//int* const p = &num;
//	//*p = 20;
//	//p = &n;
//
//	//const int* p = &num;
//	//*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}


//const int num = 10;
//int* p = &num;
//int n = 1000;

//const int* p = &num;
// *p = 20;
// p = &n;
// 
¡£
//int* const p = &num;
//*p = 20;
// p = &n;
//
//size_t  - unsigned int
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
//
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//Ctrl + F

#include <stdio.h>

int main()
{
	int i = 1;

	int n = (++i) + (++i) + (++i);

	printf("%d\n", n);

	return 0;
}