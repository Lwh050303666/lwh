#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;

//	return 0;
//}
//


//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = a - b;
//	return 0;
//}
//

//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (1 == *p)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	char a = -1;


//	//
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);

//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	char a = -128;

//	printf("%u\n", a);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 128;

//	printf("%u\n", a);
//	return 0;
//}
//
//int main()
//{
//	char a = 128;
//	printf("%d\n", a);
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}
#include <windows.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//
//
//int main()
//{
//	float f = 3.14;

//	// 
//	//float f = 9.0;
//	//1001.0
//	//(-1) ^ 0 * 1.001 *2^3
//	//s = 0
//	//e = 3
//	//M = 1.001

//	//0x41 10 00 00
//	// 
//	//float f = 5.5f;
//	//101.1
//	//1.011 *2^2
//	//(-1)^0 *1.011 * 2^2
//	//s=0
//	//m=1.011
//	//e=2

//	//40 b0 00 00
//	//
//	return 0;
//}



int main()
{
	int n = 9;

	float* pFloat = (float*)&n;

	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);


	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}