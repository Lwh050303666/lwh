#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//struct SListNode
//{
//	SLTDataType data;
//	struct SListNode* next;
//};
//
//typedef struct SListNode SLTNode;

void SLTPrint(SLTNode* phead);
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);

void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);


// 
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
// pos֮ǰ
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
// posλɾ
void SListErase(SLTNode** pphead, SLTNode* pos);

// pos
void SListInsertAfter(SLTNode* pos, SLTDataType x);
// posλúɾ
void SListEraseAfter(SLTNode* pos);

