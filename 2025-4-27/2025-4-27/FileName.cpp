//#include "SList.h"
//
//void SLTPrint(SLTNode* phead)
//{
//	SLTNode* cur = phead;
//	//while (cur->next != NULL)
//	//while(cur != NULL)
//	while (cur)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//		//cur++;
//	}
//	printf("NULL\n");
//}
//
//SLTNode* BuySLTNode(SLTDataType x)
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		return NULL;
//	}
//
//	newnode->data = x;
//	newnode->next = NULL;
//
//	return newnode;
//}
//
//void SLTPushBack(SLTNode** pphead, SLTDataType x)
//{
//	SLTNode* newnode = BuySLTNode(x);
//
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		// ��β
//		SLTNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		tail->next = newnode;
//	}
//}
//
//void SLTPushFront(SLTNode** pphead, SLTDataType x)
//{
//	SLTNode* newnode = BuySLTNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
//
//void SLTPopBack(SLTNode** pphead)
//{
//	// �������
//	assert(*pphead);
//
//	// ����ļ��
//	//if (*pphead == NULL)
//	//	return;
//
//	// 1��ֻ��һ���ڵ�
//	// 2������ڵ�
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		// ��β
//		//SLTNode* prev = NULL;
//		//SLTNode* tail = *pphead;
//		//while (tail->next != NULL)
//		//{
//		//	prev = tail;
//		//	tail = tail->next;
//		//}
//
//		//free(tail);
//		//tail = NULL;
//
//		//prev->next = NULL;
//
//		SLTNode* tail = *pphead;
//		while (tail->next->next != NULL)
//		{
//			tail = tail->next;
//		}
//
//		free(tail->next);
//		tail->next = NULL;
//	}
//}
//
//void SLTPopFront(SLTNode** pphead)
//{
//	// �������
//	assert(*pphead);
//
//	// ����ļ��
//	//if (*pphead == NULL)
//	//	return;
//
//	SLTNode* first = *pphead;
//	*pphead = first->next;
//	free(first);
//	first = NULL;
//}


//int TreeSize(BTNode* root)
//{
//	return root == NULL ? 0 :
//		TreeSize(root->left)
//		+ TreeSize(root->right)
//		+ 1;
//}




//int TreeHeight(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//
//	int leftHeight = TreeHeight(root->left);
//	int rightHeight = TreeHeight(root->right);
//
//	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
//}


//void ShellSort(int* a, int n)
//{
	/*int gap = 3;
	for (int j = 0; j < gap; j++)
	{
		for (int i = j; i < n - gap; i += gap)
		{
			int end = i;
			int tmp = a[i + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}*/

	// gap > 1 Ԥ����
	// gap == 1 ֱ�Ӳ�������
//	int gap = n;
//	while (gap > 1)
//	{
//		//gap /= 2;
//		gap = gap / 3 + 1;
//
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = a[i + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//		//printf("gap:%d->", gap);
//		//PrintArray(a, n);
//	}
//}



#include<stdio.h>
#include<stdlib.h>

// Shell������һ�ֻ��ڲ�������������㷨��ͨ������ȽϺͲ����������������
// ʱ�临�Ӷ�ƽ�����ԼΪO(n^(1.3~2))��ȡ���ڼ�����е�ѡ��

// ������shellSort
// ������
//   arr - ���ô��ݵĴ�������������
// ���ã���arr����ԭ��Shell����
//void shellSort(std::vector<int>& arr) {
//	int n = arr.size();
//
//	// ��ʼ������gap��ͨ��ȡ���鳤�ȵ�һ��
//	for (int gap = n / 2; gap > 0; gap /= 2) {
//		// ��ÿ��gap���з����������
//		// i��gap��ʼ����ʾÿ���д�����Ԫ�ص�λ��
//		for (int i = gap; i < n; i++) {
//			int temp = arr[i]; // ������Ԫ��
//			int j = i;
//
//			// ��ͬһ���У�����temp���Ԫ�غ���
//			// ����ǰһ��Ԫ������Ϊ j - gap
//			while (j >= gap && arr[j - gap] > temp) {
//				arr[j] = arr[j - gap];
//				j -= gap;
//			}
//
//			// ����temp
//			arr[j] = temp;
//		}
//	}
//}
//
//int main() {
//	// ����Shell����
//	std::vector<int> data = { 45, 12, 78, 34, 23, 9, 56, 15 };
//
//	std::cout << "����ǰ��";
//	for (int num : data) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	shellSort(data);
//
//	std::cout << "�����";
//	for (int num : data) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}
// 



//void shellSort(int a[], int n) {
//	// ʹ��ϣ���������У�gap = n/2, n/4, ...��
//	for (int gap = n / 2; gap > 0; gap /= 2) {
//		// ��ÿ�������н��в�������
//		for (int i = gap; i < n; i++) {
//			int temp = a[i];
//			int j;
//			// ��a[i]���뵽��ȷλ��
//			for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
//				a[j] = a[j - gap];
//			}
//			a[j] = temp;
//		}
//	}
//}
//
//int main() {
//	int a[] = { 2, 3, 1, 6, 4, 5 };
//	int n = sizeof(a) / sizeof(a[0]);  // ��ȷ����Ԫ�ظ���
//	shellSort(a, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//void shellsort(int a[], int n) {
//	for (int gap = n / 2; gap > 0; gap /= 2) {
//		for (int i = gap; i < n; i++) {
//			int temp = a[i]; int j;
//			for (j = 1; j >= gap && a[j - gap] > temp; j -= gap) {
//				a[j] = a[j - gap];
//			}
//			a[j] = temp;
//		}
//	}
//}
//using namespace std;
//#include<algorithm>
//
//#include <algorithm>  // for std::swap
//
//void selctorsort(int* a, int n) {
//	int left = 0, right = n - 1;
//	while (left < right) {
//		int mini = left, maxi = left;
//
//		// ɨ�赱ǰ�������䣬��λ��Сֵ�����ֵ�±�
//		for (int i = left + 1; i <= right; i++) {
//			if (a[i] < a[mini]) mini = i;
//			if (a[i] > a[maxi]) maxi = i;
//		}
//
//		// �Ƚ���Сֵ�ŵ����
//		std::swap(a[left], a[mini]);
//		// �����ֵԭ���� left�����������±�
//		if (maxi == left) maxi = mini;
//		// �ٽ����ֵ�ŵ��Ҷ�
//		std::swap(a[right], a[maxi]);
//
//		// ��С��������
//		left++;
//		right--;
//	}
//}
//
//int main() {
//	int a[] = { 1,4,5,3,2,6 };
//	int n = sizeof(a) / sizeof(a[0]);
//	selctorsort(a, n);
//	for (int i = 0; i <= sizeof(a) / sizeof(a[0]) - 1; i++)
//		printf("%d", a[i]);
//	return 0;
//}


