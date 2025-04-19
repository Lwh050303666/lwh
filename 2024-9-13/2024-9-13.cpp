#define _CRT_SECURE_NO_WARNINGS  //以后可以直接复制下面的警告。前面加个#define
//#include<stdio.h>
//int main()
//{
//	
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//
//
//}

//#include<stdio.h>
//int main()
//{
//	short s = 2;
//		int b = 10;
//		printf("%d\n", sizeof(s = b + 1));
//	
//			return 0;
//
//#include<stdio.h>
//int a = 123;
//int main()
//{
//	int a = 12;
//		printf("%d\n", a);
//	return 0;
//#include<stdio.h>
//int main()
//{
//	int x = 4 + 22;
//	int y = 60 - 10;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}
//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//	return 0;
//}
//int main()
//{
//	int x = 6/ 4;
//	/*float y = 6 / 4;*/
//	float y = 6.0 / 4;
//	printf("%d\n", x);
//	printf("%f\n", y);
//	return 0;
//}
//int main()
//{
//	int score = 5;
//	score = (score / 20) * 100;
//	printf("%d\n", score);
//	return 0;
//
//
//}
//int main()
//{
//	int a = 6 % 4;
//	printf("%d\n", a);
//	return 0;
//
//
//}
//int main()
//{
//	int a = 6 % -4;
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int a = 1;
//	/*a = a + 3;*/
//	a += 3;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	/*int b = ++a;*/
//	/*int b = a++;*/
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	printf("%s will come tonight\n", "zhang san");
//	return 0;
//
//}
//int main()
//{
//	/*printf("%5d\n", 123);*/
//	printf("%12f\n", 123.45);
//	return 0;
//
//
//
//
//}
//int main()
//{
//	printf("%+d\n", 12);
//	printf("%+d", -12);
//	return 0;
//
//
//}
//int main()
//{
//	printf("%.2f", 3.145);
//	return 0;
//
//
//
//
//
//}
//int main()
//{
//	printf("%.5s", "hello world");
//	return 0;
//
//
//
//
//}
//int main()
//{
//	int score = 0;
//	printf("请输入成绩:");
//	scanf_s("%d", &score);
//	printf("成绩是:%d", score);
//	return 0;
//
//
//}
//int main()
//{
//	char name[11];
//	scanf_s("%10s", &name);
//	printf("%d", name);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf_s("%d-%d-%d", &year, &month, &day);
//	printf("%d %d %d", year, month, day);
//	return 0;
//
//
//
//
//}
//判断一个整数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	if(num % 2 ==1)
//		printf("输入的值为奇数");
//	else
//		printf("输入的值不是奇数");
//
//		return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age >= 18)
//		printf("已成年，可以谈恋爱");
//	else
//		printf("未成年，乖乖学习去");
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age >= 18)
//	{
//		printf("已成年");
//		printf("可以谈恋爱了");
//
//
//
//
//	}
//
//	else
//	{
//		printf("未成年");
//		printf("不可以早恋哦");
		/*return 0;*/
//	}
//}
//要求输⼊⼀个整数，判断输⼊的整数是0，还是正数或者负数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的值为0");
//	else
//	{
//		if (num > 0)
//			printf("输入的值为负数");
//		else
//			printf("输入的值为正数");
//	}
//	return 0;
//}
//输⼊⼀个⼈的年龄
//如果年龄
//< 18
//	岁，打印
//	"
//	少年
//	"
//	如果年龄在
//	18
//	岁⾄
//	44
//	岁打印
//	"
//	⻘年
//	"
//	如果年龄在
//	45
//	岁⾄
//	59
//	岁打印
//	"
//	中⽼年
//	"
//	如果年龄在
//	60
//	岁⾄
//	89
//	岁打印
//	"
//	⽼年
//	"
//	如果
//	90
//	岁及以上打印
//	"
//	⽼寿星
//	"
		/*int main()
		{
			int age = 0;
			scanf("%d", &age);
			if (age < 18)
				printf("少年");
			else
				if (age <=44)
					printf("青年");
				else
					if (age <= 59)
						printf("中老年");
					else
						if (age <= 89)
			printf("老年");
						else printf("老寿星");
			
			return 0;
		}*/
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//
//
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	printf("%d\n", m);
//	return 0;
//
//
//
//
//
//
//
//}
//我们有⼀个变量叫
//逻辑反操作
//flag
//, 如果flag为假，要做⼀个什么事情
//int main()
//{
//	int flag = 1;
//	if (!flag)
//		printf("do something");
//	return 0;
//}
//如果我们说⽉份是3⽉到5⽉，是春天，那使⽤代码怎么体现呢？
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (3 <= month && month <= 5)
//		printf("%d月是春天", month);
//	else printf("%d月不是春天", month);
//	return 0;

	//我们说⼀年中⽉份是12⽉或者1⽉或者2⽉是冬天，那么我们怎么使⽤代码体现呢？

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("%d月是冬天",month);
//	else printf("%d月不是冬天",month);
//	return 0;
//}
//闰年的判断

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	printf("%d年是闰年", year);
//	else 
//		printf("%d年不是闰年", year);
//	return 0;
//
//
//
//
//
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//
//
//
//
//}输⼊任意⼀个整数值，计算除3之后的余数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("整除");
//	if (num % 3 == 1)
//		printf("余数为1");
//	else
//		printf("余数为2");
//	return 0;
//
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("整除");
//		break;
//	case 1:printf("余数为1");
//		break;
//	case 2:printf("余数为2");
//		return 0;
//	}
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//
//	case 2:
//
//	case 3:
//
//	case 4:
//
//
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//
//	case 7:
//		printf("休息日\n");
//		return 0;
//	}
//}
//
//
//
//
//
//
//
//
//}
//int main()
//{
//	if (1)
//		printf("hehe\n");
//
//	return 0;
//
//
//
//}
//int main()
//{ 
//	while (1)
//	printf("hehe\n");
//	return 0;
//
//
//}
	//用while循环在屏幕上打印1到10的值	
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i = i + 1;
//	}
//	return 0;
//}
//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//例如：
//输⼊：1234，输出：4321
//输⼊：521，输出：125
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return 0;
//}





	


















	
	








































