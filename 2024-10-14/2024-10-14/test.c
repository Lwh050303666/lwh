#define CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//main����

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
//main�����Ķ���д��

//1 - ���ϵ�д�� - 
//void main()
//{
//	printf("hehe\n");
//}


//2. ֪ʶ�������ֶ���void�������void��ʾmain����û�в���
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
//��ʵmain���������в��������Ĳ���������������ģ��������ʹ��main�����Ĳ������Ǿ�Э��
//�������ʹ��main�����Ĳ������ǾͲ�д
//��ʱ����Ҫ�˽�main�����Ĳ���
//int main(int argc, char* argv[])
//{
//
//	return 0;
//}
//
//#include <stdio.h>

//printf �Ǻ��� - C���Եı�׼�����ṩ���ֳɵĺ��� - �⺯��
//���ܣ�����Ļ�ϴ�ӡ��Ϣ
//print format - ���ո�ʽ����ӡ��Ϣ
//"" ��������һ���ַ�����Ϊ���ַ���
//\n - ����
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
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%f - ��ӡС��
//%s - ��ӡ�ַ���

#include <stdio.h>
//std - standard - ��׼
//i intput -- ����
//o - output ���

//int main()
//{
//	printf("hehe\n");
//	printf("%s\n", "haha");
//	printf("%d\n", 100);
//	printf("%c\n", 'q');//�������������Ľ��ַ�
//	printf("%f\n", 3.14);//%f Ĭ��С�������ӡ6λ
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
//C�����з��ڵ������еĶ����ַ�
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
//	//ѭ��
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
//�ַ������Դ�����ַ�������

//int main()
//{
//	char arr1[] = "abcdef";//arr1�к���\0
//	char arr2[] = {'a', 'b', 'c','d','e','f', '\0'};//arr2��û��\0
//	printf("%s\n", arr1);//
//	printf("%s\n", arr2);//
//
//	return 0;
//}
//strlen ��һ���⺯�� - ���ַ����ĳ���,ͳ�Ƶ����ַ�����\0֮ǰ���ַ�����
//string.h
//strlen ���ص�ֵ��size_t ���͵ģ�Ӧ��ʹ��%zd
//
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abcdef";//arr1�к���\0
//	char arr2[] = { 'a', 'b', 'c','d','e','f','\0'};//arr2��û��\0
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
//��֧������ĸ�ı�������
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
//	printf("%c\n", '\130');//��\���8��������ת����10���Ƶ����֣����������ΪASCII��ֵ��ʾ���ַ�����
//	printf("%c\n", '\77');//��\���8��������ת����10���Ƶ����֣����������ΪASCII��ֵ��ʾ���ַ�����
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




























