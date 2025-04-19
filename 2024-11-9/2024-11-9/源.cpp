#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr3[5];
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[] = { 1,2,3,4 };
//	return 0;
//}



//int main()
//{
//	int n = 10;
//	int arr[n];
//
//	return 0;
//}

//

//
#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	//return (x > y ? x : y);
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//
//	int m = get_max(a, b);
//	//输出
//	printf("%d\n", m);
//
//	return 0;
//}
//
#include <stdio.h>

/*
int main()
{
    int a = 0;
    int b = 0;
    //5 3
    //1 2
    //0 0
    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a>b)
            printf("%d>%d\n", a,b);
        else if(a<b)
            printf("%d<%d\n", a, b);
        else
            printf("%d=%d\n", a, b);
    }

    return 0;
}
*/
//
//
//int main() {
//    int a = 0;
//    int b = 0;
//
//    while (scanf("%d %d", &a, &b) != EOF) {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//
//    return 0;
//}
//
//
//
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n % 2 == 0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) == 1)
//    {
//        if (score >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) == 1)
//    {
//        if (score >= 90 && score <= 100)
//        {
//            printf("Perfect\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    double score[5] = { 0.0 };//0 1 2 3 4
//    int i = 0;
//    while (i < 5)
//    {
//   
//        int j = 0;
//        double sum = 0.0;
//    
//        while (j < 5)
//        {
//            scanf("%lf", &score[j]);
//            sum += score[j];
//            j++;
//        }
//        j = 0;
//       
//        while (j < 5)
//        {
//            printf("%.1lf ", score[j]);
//            j++;
//        }
//        printf("%.1lf\n", sum);
//        i++;
//    }
//    return 0;
//}
//




//
//
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//     
//        int i = 0;
//        while (i < n)
//        {
//            printf("*");
//            i++;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//    //转换
//    int h = seconds / 3600;
//    int m = (seconds % 3600) / 60;
//    int s = (seconds % 3600) % 60;
//    printf("%d %d %d\n", h, m, s);
//
//    return 0;
//}
//


//
//#include <stdio.h>
//
//int main() {
//    int t = 0;
//    while (scanf("%d", &t) == 1) {
//        if (t > 0)
//            printf("1\n");
//        else if (t < 0)
//            printf("0\n");
//        else
//            printf("0.5\n");
//    }
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    char sex[5];
//    int age;
//};
//
//void Print(struct Stu* ps)
//{
//    //printf("%s %s %d\n", (*ps).name, (*ps).sex, (*ps).age);
//    //->
// 
//    printf("%s %s %d\n", ps->name, ps->sex, ps->age);
//}
//
//int main()
//{
//    int num = 0;
//    struct Stu s = {"zhangsan", "男", 20};
//    struct Stu s2 = { "如花", "女", 18 };
//
//    Print(&s);
//    
//   
//    //printf("%s\n", s2.name);
//    //printf("%s\n", s2.sex);
//    //printf("%d\n", s2.age);
//
//    return 0;
//}
//
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);//20
//
//    //if (age >= 18)
//    //    printf("成年\n");
//
//    //if (age >= 18)
//    //    printf("成年\n");
//    //else
//    //    printf("未成年\n");
//
//    if (age < 16)
//        printf("少年\n");
//    else if (age >= 16 && age < 30)
//        printf("青年\n");
//    else if (age >= 30 && age < 40)
//        printf("中年\n");
//    else if (age >= 40 && age < 56)
//        printf("壮年\n");
//    else if (age >= 56 && age < 80)
//        printf("老年\n");
//    else
//        printf("老寿星\n");
//
//    return 0;
//}
//
//int main()
//{
//    int age = 20;
//    if (age >= 18)
//    {
//        printf("成年\n");
//        printf("谈恋爱\n");
//    }
//        
//
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//             printf("hehe\n");
//    }    
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

//
/
//

//
//int main()
//{
//    int condition = 1;
//
//    if (condition) {
//        return x;
//    }
//    return y;
//
//
//
//    if (condition)
//    {
//        return x;
//    }
//    else
//    {
//        return y;
//    }
//
//    return 0;
//}
//



//int main()
//{
//    int num = 5;
//    if (10 == num)
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//}


//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    if (num % 2 == 1)
//        printf("奇数\n");
//    else
//        printf("不是奇数\n");
//
//    return 0;
//}
//

//int main()
//{
//    
//    int i = 1;
//    while (i <= 100)
//    {
//        if (i % 2 == 1)
//        {
//            printf("%d ", i);
//        }
//        i++;
//    }
//    return 0;
//}


//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);
//        i+=2;
//    }
//    return 0;
//}

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    if (1 == day)
//    {
//        printf("星期1\n");
//    }
//    else if (2 == day)
//    {
//        printf("星期2\n");
//    }
//    //...
//    return 0;
//}
//
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    int n = 2;
//    switch (day)
//    {
//    default:
//        printf("选择错误\n");
//        break;
//    case 1:
//        printf("星期1\n");
//        break;
//    case 2:
//        printf("星期2\n");
//        break;
//    case 3:
//        printf("星期3\n");
//        break;
//    case 4:
//        printf("星期4\n");
//        break;
//    case 5:
//        printf("星期5\n");
//        break;
//    case 6:
//        printf("星期6\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//    }
//    return 0;
//}


//
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    int n = 2;
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("工作日\n");
//        break;
//    case 6:
//    case 7:
//        printf("休息日\n");
//        break;
//    default:
//        printf("选择错误\n");
//        break;
//    }
//    return 0;
//}

#include <stdio.h>
int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1: m++;
    case 2: n++;
    case 3:
        switch (n)
        {
        case 1: n++;
        case 2:
            m++; n++;
            break;
        }
    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}