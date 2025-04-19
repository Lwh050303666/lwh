#define CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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
#include <stdio.h>

//int main()
//{
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. 写文件
//	fputs("I am a student\n", pf);
//	fputs("are you ok??", pf);
//
//	//3. 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. 读文件
//	char arr[20] = "xxxxxxxxxxxxx";
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//
//	//3. 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	fgets(arr, 20, stdin);
//	fputs(arr, stdout);
//
//	return 0;
//}
/// struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//
//int main()
//{
//	struct S s = { "lisi", 18, 88.0f };
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. 写文件
//	fprintf(pf,"%s %d %.1f", s.name, s.age, s.score);
//	//printf("%s %d %f", name, age, score);
//	//3. 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	printf("%d", 100);
//	printf("%d %c", 100, 'x');
//	printf("%d %c %f", 100, 'x', 3.14f);
//
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};


//int main()
//{
//	struct S s = {0};
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2. 读文件
//	//scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	//从文件中读取信息，存放到s的各个成员中
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	//打印在屏幕上
//	//printf("%s %d %.1f\n", s.name, s.age, s.score);
//	fprintf(stdout, "%s %d %.1f\n", s.name, s.age, s.score);
//
//	//3. 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	char arr[100] = { 0 };
//	struct S s = { "wangwu", 23, 66.6f };
//	
//	//临时变量
//	struct S tmp = { 0 };
//
//	//将s中的各个数据转换成字符串，存放在arr中
//	sprintf(arr, "%s %d %f", s.name, s.age, s.score);
//	//printf("%s\n", arr);
//
//	//从字符串arr中提取格式化的数据，存放在tmp中
//	sscanf(arr, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "cuihua", 25, 88.8f };
//	//以二进制的形式写到文件中
//
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	struct S s = {0};
//	//读取二进制的信息写到文件中
//
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.读文件
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.读文件
//	int ch = 0;
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//	ch = fgetc(pf);//b
//	printf("%c\n", ch);
//
//	//定位文件指针
//	//fseek(pf, 4,SEEK_SET);
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);//e
//	printf("%c\n", ch);
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.读文件
//	int ch = 0;
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//	ch = fgetc(pf);//b
//	printf("%c\n", ch);
//
//	//定位文件指针
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);//e
//	printf("%c\n", ch);
//
//	//输出文件指针相较于文件的起始位置的偏移量
//	printf("%d\n", ftell(pf));
//
//	//将文件指针重新定位到文件的起始位置
//	rewind(pf);
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//拷贝文件
//test1.txt    --->  test2.txt
//
//int main()
//{
//	//打开文件
//	FILE* pfread = fopen("test1.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen\n");
//		fclose(pfread);
//		return 1;
//	}
//	//读/写文件
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//1. 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//2.读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)//a
//	{
//		printf("%c ", ch);
//	}
//
//
//	//int ret = feof(pf);
//	//printf("%d\n", ret);
//
//	if (ferror(pf))
//	{
//		printf("读取文件的时候遇到了错误\n");
//		return 1;
//	}
//
//	//3.关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>
////VS2022 WIN11环境测试
//
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//
//    fputs("abcdef", pf);//先将abcdedf放在输出缓冲区
//    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//    Sleep(10000);
//    printf("刷新缓冲区\n");
//    fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//    //注：fflush 在高版本的VS上不能使用了
//    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//    Sleep(10000);
//
//
//    fclose(pf);
//    //注：fclose在关闭文件的时候，也会刷新缓冲区
//    pf = NULL;
//
//    return 0;
//}
//声明外部函数
extern int Add(int x, int y);

int main()
{
	int a = 11;
	int b = 22;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}









































































































































