#define CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//main函数

//int main()
//{
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	return 0;
//}
//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}
//main函数的多种写法

//1 - 古老的写法 - 
//void main()
//{
//	printf("hehe\n");
//}


//2. 知识参数部分多了void，这里的void表示main函数没有参数
//int main(void)
//{
//	return 0;
//}
//
//int main()
//{
//	return 0;
//}


//3
//其实main函数可以有参数，他的参数是有特殊意义的，如果你想使用main函数的参数，那就协商
//如果不想使用main函数的参数，那就不写
//暂时不需要了解main函数的参数
//int main(int argc, char* argv[])
//{
//
//	return 0;
//}
//
//#include <stdio.h>

//printf 是函数 - C语言的标准库中提供的现成的函数 - 库函数
//功能：在屏幕上打印信息
//print format - 按照格式来打印信息
//"" 括起来的一串字符被称为：字符串
//\n - 换行
//int main()
//{
//	printf("hello bit\n");
//	printf("haha\n");
//	printf("cuihua");
//
//
//	return 0;
//}
//
//%d - 打印整数
//%c - 打印字符
//%f - 打印小数
//%s - 打印字符串

#include <stdio.h>
//std - standard - 标准
//i intput -- 输入
//o - output 输出

//int main()
//{
//	printf("hehe\n");
//	printf("%s\n", "haha");
//	printf("%d\n", 100);
//	printf("%c\n", 'q');//单引号括起来的叫字符
//	printf("%f\n", 3.14);//%f 默认小数点后会打印6位
//
//
//	return 0;
//}
/// int main()
//{
//	int ;
//	printf("hehe\n");
//	return 0;
//}
//C语言中放在单引号中的都是字符
//'a'

//int main()
//{
//	//'a';
//	//'q';
//	//'1';
//	//'#';
//
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//
//	return 0;
//}
//int main()
//{
//	//32~127
//	//循环
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("abcdef");
//
//
//	return 0;
//}
//字符串可以存放在字符数组中

//int main()
//{
//	char arr1[] = "abcdef";//arr1中含有\0
//	char arr2[] = {'a', 'b', 'c','d','e','f', '\0'};//arr2中没有\0
//	printf("%s\n", arr1);//
//	printf("%s\n", arr2);//
//
//	return 0;
//}
//strlen 是一个库函数 - 求字符串的长度,统计的是字符串中\0之前的字符个数
//string.h
//strlen 返回的值是size_t 类型的，应该使用%zd
//
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";//arr1中含有\0
//	char arr2[] = { 'a', 'b', 'c','d','e','f','\0'};//arr2中没有\0
//	printf("%zd\n", strlen(arr1));//6
//	printf("%zd\n", strlen(arr2));//?
//
//	return 0;
//}
//int main()
//{
//	printf("abc\ndef");
//
//	return 0;
//}
//在支持三字母的编译器上
//??) --> ]
//??( --> [

//int main()
//{
//	printf("(are you ok\?\?)");//(are you ok]
//	//(are you ok??)
//	//
//	return 0;
//}
//
//int main()
//{
//	/*printf("%c\n", 'a');
//	printf("%c\n", 'b');
//	printf("%c\n", '\'');*/
//
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("c:\\test\\bit");
//
//	//printf("\a");
//
//	//printf("abcdbef\n");
//	//printf("abcd\bef\n");
//
//
//	//printf("abcdef\r");
//	//printf("a\tbc\tdef\tqq");
//
//	printf("%c\n", '\130');//将\后的8进制数字转换成10进制的数字，这个数字作为ASCII码值表示的字符就是
//	printf("%c\n", '\77');//将\后的8进制数字转换成10进制的数字，这个数字作为ASCII码值表示的字符就是
//	printf("%c\n", '\x36');//6
//
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	printf("%zd\n", strlen("abcdef"));//6
//	printf("%zd\n", strlen("c:\test\bit\114\test.c"));//16
//	printf("%zd\n", strlen("c:\test\bit\118\test.c"));//17
//
//	return 0;
//}




























