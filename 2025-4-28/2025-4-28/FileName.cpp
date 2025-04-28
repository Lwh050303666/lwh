//#include<stdio.h>
//void Merge(int sourceArr[], int tempArr[], int startIndex, int midIndex, int endIndex) {
//    int i = startIndex, j = midIndex + 1, k = startIndex;
//    while (i != midIndex + 1 && j != endIndex + 1) {
//        if (sourceArr[i] > sourceArr[j])
//            tempArr[k++] = sourceArr[j++];
//        else
//            tempArr[k++] = sourceArr[i++];
//    }
//    while (i != midIndex + 1)
//        tempArr[k++] = sourceArr[i++];
//    while (j != endIndex + 1)
//        tempArr[k++] = sourceArr[j++];
//    for (i = startIndex; i <= endIndex; i++)
//        sourceArr[i] = tempArr[i];
//}

////内部使用递归
//void MergeSort(int sourceArr[], int tempArr[], int startIndex, int endIndex) {
//    int midIndex;
//    if (startIndex < endIndex) {
//        midIndex = startIndex + (endIndex - startIndex) / 2;//避免溢出int
//        MergeSort(sourceArr, tempArr, startIndex, midIndex);
//        MergeSort(sourceArr, tempArr, midIndex + 1, endIndex);
//        Merge(sourceArr, tempArr, startIndex, midIndex, endIndex);
//    }
//}
//
//int main(int argc, char* argv[]) {
//    int a[8] = { 50, 10, 20, 30, 70, 40, 80, 60 };
//    int i, b[8];
//    MergeSort(a, b, 0, 7);
//    for (i = 0; i < 8; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//    return 0;
//}
#include<iostream>
using namespace std;
//
//namespace lwh {
//
//}

//int a = 0;
//
//namespace bit
//{
//	int a = 1;
//}

// 局部域->全局域 -> 展开了命名空间域 or 指定访问命名空间域
//int main()
//{
//	int a = 2;
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", bit::a);
//
//
//	return 0;
//}


//int main()
//{
//    int x = 10;
//    double d = 11.11;
//
//    // 自动识别类型
//    cout << x << " " << d << endl;
//
//    // >> 流提取运算符
//    std::cin >> x >> d;
//    cout << x << " " << d << endl;
//    printf("%d,%.2f\n", x, d);
//    cout << x << " " << d << endl;
//
//
//    return 0;
//}



//void Func(int a = 0)
//{
//	cout << a << endl;
//}

//int main()
//{
//	Func();     // 没有传参时，使用参数的默认值
//	Func(10);   // 传参时，使用指定的实参
//
//	return 0;
//}
// 全缺省
//void Func(int a = 10, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    Func();
//    Func(1);
//    Func(1,2);
//    Func(1,2,3);
//
//    return 0;
//}



// 半缺省 -- 从右往左缺省
//void Func(int a, int b = 20, int c = 30)
//{
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//    //Func();
//    Func(1);
//    Func(1,2);
//    Func(1,2,3);
//
//    return 0;
//}





//void f()
//{
//	cout << "f()" << endl;
//}

//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char a, int b)
//{
//	cout << "f(int b,char a)" << endl;
//}
//
//int main()
//{
//	f(1, 'x');
//	f('x', 1);
//
//
//	return 0;
//}
 //1、是否构成重载 -- 构成
 //2、问题。无参调用存在歧义
void f()
{
	cout << "f()" << endl;
}

void f(int a = 0)
{
	cout << "f(int a)" << endl;
}

int main()
{
	f(); // “f”: 对重载函数的调用不明确

	return 0;
}

