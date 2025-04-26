//& 函数名和函数名都是函数的地址
//int (*pf)(int, int) = &Add;
//int (*pf)(int, int) = Add;//两种写法相同


#include <string.h>
#include<stdio.h>

//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(*arr));//strlen('a')->strlen(97),非法访问-err
//	return 0;
//}


//int main()
//{
//	const char* a[] = { "work","at","alibaba" };
//
//  const	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}

// int main()
//{
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	const char** cp[] = { c + 3,c + 2,c + 1,c };
//	const char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}












