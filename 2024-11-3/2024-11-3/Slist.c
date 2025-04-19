#define CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	//while (cur->next != NULL)
	//while(cur != NULL)
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
		//cur++;
	}
	printf("NULL\n");
}

SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		// 找尾
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}


void SLTPopBack(SLTNode** pphead)
{
	// 暴力检查
	assert(*pphead);

	// 温柔的检查
	//if (*pphead == NULL)
	//	return;

	// 1、只有一个节点
	// 2、多个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		// 找尾
		//SLTNode* prev = NULL;
		//SLTNode* tail = *pphead;
		//while (tail->next != NULL)
		//{
		//	prev = tail;
		//	tail = tail->next;
		//}

		//free(tail);
		//tail = NULL;

		//prev->next = NULL;

		SLTNode* tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	// 暴力检查
	assert(*pphead);

	// 温柔的检查
	//if (*pphead == NULL)
	//	return;

	SLTNode* first = *pphead;
	*pphead = first->next;
	free(first);
	first = NULL;
}