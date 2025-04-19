#include"Func.h"
//void f(int i)
//{
//	cout << i << endl;
//}
//
void test()
{
	f(10);
}

void Stack::Init(int defaultCapacity)
{
	a = (int*)malloc(sizeof(int) * capacity);
	if (nullptr == a)
	{
		perror("mallocռʧ");
		return;
	}

	capacity = defaultCapacity;
	top = 0;
}