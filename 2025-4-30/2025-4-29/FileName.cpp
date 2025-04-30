//对程序员来说，思维是最重要的
//你今天学了什么呢，务必要务实一点
#include <iostream>
#include <algorithm>
using namespace std;

//// 修正后的快速排序，使用 Hoare 分区并显式传入边界
//void quicksort(int a[], int lo, int hi) {
//    if (lo >= hi) return;                              // 区间长度 ≤1 时直接返回 :contentReference[oaicite:6]{index=6}
//    int i = lo, j = hi;
//    int pivot = a[lo];                                 // 选首元素为基准
//    while (i < j) {
//        while (i < j && a[j] >= pivot) j--;            // 右指针左移至第一个 < pivot 元素
//        while (i < j && a[i] <= pivot) i++;            // 左指针右移至第一个 > pivot 元素
//        if (i < j) swap(a[i], a[j]);                   // 交换满足条件的元素 :contentReference[oaicite:7]{index=7}
//    }
//    swap(a[lo], a[i]);                                 // 将基准放到分区分界处 :contentReference[oaicite:8]{index=8}
//    quicksort(a, lo, i - 1);                           // 递归排序左子区 :contentReference[oaicite:9]{index=9}
//    quicksort(a, i + 1, hi);                           // 递归排序右子区 :contentReference[oaicite:10]{index=10}
//}
//
//int main() {
//    int a[] = { 0,5,6,3,2,4,1,9 };
//    int s = sizeof(a) / sizeof(a[0]);
//    quicksort(a, 0, s - 1);
//    for (int i = 0; i < s; i++)                         // 完整、安全输出所有元素 :contentReference[oaicite:11]{index=11}
//        cout << a[i] << " ";
//    cout << endl;
//    return 0;
//}
//int d[50] = { 0 };
//void merge(int d[],int s[],int l,int mid,int r) {
//	if (l >= r) return;
//	int i = l, j = mid + 1, k = 0;
//	while (l <= mid && j <= r)
//	{
//		if (s[i] <= s[j])
//			d[k++] = s[i++];
//		else d[k++] = s[j++];
//
//	}
//	while (i <= mid) d[k++] = s[i++];
//	while (j <= r) d[k++] = s[j++];
//	for (int i = 0; i <= t; i++)
//		d[i] = s[i];
//	return;
//
//	
//}
//void mergesort(int a[],int l,int r) {
//	int mid = l + r >> 1;
//	mergesort(a, l, mid);
//	mergesort(a, mid + 1, r);
//	int t = sizeof(a) / sizeof(a[0]) - 1;
//	for (int i = 1; i <= t; i++)
//	 d[i] = a[i];	
//	merge(d, a, l, mid, r);
//}


//bool check() {
//
//}
////区间[l,r]被划分成[l,mid]和[mid+1,r]使用
//int bsearch_1(int l, int r) {
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (check(mid)) r = mid;
//		else l = mid + 1;
//	}
//	return 1;
//}
////区间[l,r]被划分成[l,mid-1]和[mid,r]使用
//int bsearch_2(int l, int r) {
//	while (l < r) {
//		int mid = l + r + 1 >> 1;
//		if (check(mid))  l = mid;
//		else r = mid - 1;
//	}return 1;
//}


//高精度加法
//vector<int> add(vector<int>& A, vector<int>& B)
//{
//    if (A.size() < B.size()) return add(B, A);
//
//    vector<int> C;
//    int t = 0;
//    for (int i = 0; i < A.size(); i++)
//    {
//        t += A[i];
//        if (i < B.size()) t += B[i];
//        C.push_back(t % 10);
//        t /= 10;
//    }
//
//    if (t) C.push_back(t);
//    return C;
//}

//高精度减法
//void sub(int a[], int b[], int c[]) {
//	clear(c);
//	for (int i = 0; i < len - 1; ++i) {
//		c[i] += a[i] - b[i];
//		if (c[i] < 0) {
//			c[i + 1] -= 1;
//			c[i] += 10;
//		}
//	}
//}


//高精度乘低精度
//vector<int>mul(vector<int>& A, int b) {
//	vector<int>C;
//	int t = 0;
//	for (int i = 0; i < A.size() || t; i++)
//	{
//		if (i < A.size()) t += A[i] * b;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	while (C.size() > 1 && C.back() == 0) C.pop_back;
//	return c;
//}




