#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//typedef int SLDataType;
//#define N 100000
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};

typedef int SLDataType;
#define INIT_CAPACITY 4
typedef struct SeqList
{
	SLDataType* a;
	int size;     
	int capacity; 
}SL;

// ÔöÉ¾²é¸Ä
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);

void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);



