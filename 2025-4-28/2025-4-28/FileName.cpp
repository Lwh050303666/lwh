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

////�ڲ�ʹ�õݹ�
//void MergeSort(int sourceArr[], int tempArr[], int startIndex, int endIndex) {
//    int midIndex;
//    if (startIndex < endIndex) {
//        midIndex = startIndex + (endIndex - startIndex) / 2;//�������int
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

// �ֲ���->ȫ���� -> չ���������ռ��� or ָ�����������ռ���
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
//    // �Զ�ʶ������
//    cout << x << " " << d << endl;
//
//    // >> ����ȡ�����
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
//	Func();     // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	Func(10);   // ����ʱ��ʹ��ָ����ʵ��
//
//	return 0;
//}
// ȫȱʡ
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



// ��ȱʡ -- ��������ȱʡ
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
 //1���Ƿ񹹳����� -- ����
 //2�����⡣�޲ε��ô�������
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
	f(); // ��f��: �����غ����ĵ��ò���ȷ

	return 0;
}

