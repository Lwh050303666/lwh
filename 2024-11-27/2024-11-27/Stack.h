#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
//#define N 10
//struct Stack
//{
//	int a[N];
//	int top;
//};

typedef int  STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);
void STDestroy(ST* ps);
void STPush(ST* ps, STDataType x);
void STPop(ST* ps);
int STSize(ST* ps);
bool STEmpty(ST* ps);
STDataType STTop(ST* ps);

