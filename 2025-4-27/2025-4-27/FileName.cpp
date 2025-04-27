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
//		// 找尾
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
//	// 暴力检查
//	assert(*pphead);
//
//	// 温柔的检查
//	//if (*pphead == NULL)
//	//	return;
//
//	// 1、只有一个节点
//	// 2、多个节点
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		// 找尾
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
//	// 暴力检查
//	assert(*pphead);
//
//	// 温柔的检查
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

	// gap > 1 预排序
	// gap == 1 直接插入排序
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

// Shell排序是一种基于插入排序的排序算法，通过分组比较和插入来加速排序过程
// 时间复杂度平均情况约为O(n^(1.3~2))，取决于间隔序列的选择

// 函数：shellSort
// 参数：
//   arr - 引用传递的待排序整型向量
// 作用：对arr进行原地Shell排序
//void shellSort(std::vector<int>& arr) {
//	int n = arr.size();
//
//	// 初始化增量gap，通常取数组长度的一半
//	for (int gap = n / 2; gap > 0; gap /= 2) {
//		// 对每个gap进行分组插入排序
//		// i从gap开始，表示每组中待插入元素的位置
//		for (int i = gap; i < n; i++) {
//			int temp = arr[i]; // 待插入元素
//			int j = i;
//
//			// 在同一组中，将比temp大的元素后移
//			// 组内前一个元素索引为 j - gap
//			while (j >= gap && arr[j - gap] > temp) {
//				arr[j] = arr[j - gap];
//				j -= gap;
//			}
//
//			// 插入temp
//			arr[j] = temp;
//		}
//	}
//}
//
//int main() {
//	// 测试Shell排序
//	std::vector<int> data = { 45, 12, 78, 34, 23, 9, 56, 15 };
//
//	std::cout << "排序前：";
//	for (int num : data) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	shellSort(data);
//
//	std::cout << "排序后：";
//	for (int num : data) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}
// 



//void shellSort(int a[], int n) {
//	// 使用希尔增量序列（gap = n/2, n/4, ...）
//	for (int gap = n / 2; gap > 0; gap /= 2) {
//		// 对每个子序列进行插入排序
//		for (int i = gap; i < n; i++) {
//			int temp = a[i];
//			int j;
//			// 将a[i]插入到正确位置
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
//	int n = sizeof(a) / sizeof(a[0]);  // 正确计算元素个数
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
//		// 扫描当前无序区间，定位最小值和最大值下标
//		for (int i = left + 1; i <= right; i++) {
//			if (a[i] < a[mini]) mini = i;
//			if (a[i] > a[maxi]) maxi = i;
//		}
//
//		// 先将最小值放到左端
//		std::swap(a[left], a[mini]);
//		// 若最大值原本在 left，需修正其下标
//		if (maxi == left) maxi = mini;
//		// 再将最大值放到右端
//		std::swap(a[right], a[maxi]);
//
//		// 缩小无序区间
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


