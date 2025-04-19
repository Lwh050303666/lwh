#define CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);

	SLTPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 1);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);
}

int main()
{
	TestSList3();

	return 0;
}

//void Func(int y)
//{
//	y = 1;
//}

//void Func(int* p)
//{
//	*p = 1;
//}
//
//int main()
//{
//	int x = 0;
//	Func(&x);
//
//	return 0;
//}

//void Func(int* ptr)
//{
//	ptr = (int*)malloc(sizeof(int));
//}
//
//int main()
//{
//	int* px = NULL;
//	Func(px);
//  free(px);
// 
//
//	return 0;
//}

//void Func(int** pptr)
//{
//	*pptr = (int*)malloc(sizeof(int));
//}
//
//int main()
//{
//	int* px = NULL;
//	Func(&px);
//
//	free(px);
//
//	return 0;
//}