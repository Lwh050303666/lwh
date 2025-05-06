
//#include <iostream>
//using namespace std;
//int n, k;
//int main() {
//	cin >> n >> ' ' >> k;
//	return 0;
//}
//const int N = 1e7;
//int n, x, a[N], sum, l, r, ans = 1e7;
//int main() {
//    cin >> n >> x;
//    for (int i = 1; i <= n; i++)
//        cin >> a[i];
//    for (l = 0; l <= n - 1; l++) {
//
//        while (sum < x) {
//            sum = sum - a[l] + a[r];
//            r++;
//        }
//        ans = min(r - l + 1, ans);
//        r++;
//
//    }
//    cout << l << r;
//    return 0;
//
//    //滑动窗口
//}

//#include<iostream>
//#include<climits>
//using namespace std;
//const int N = 1e7;
//int n, x, a[N];
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> x;
//	int len = INT_MAX, bestr = 0, left = 0, sum = 0;
//	for (int right = 0; right < n; right++) {
//		sum += a[right];
//		while (sum >= x) {
//			int currentlen = right - left + 1;
//			if (currentlen < len) {
//				len = currentlen;
//				bestr = right;
//			}
//			sum -= a[left];
//			left++;
//		}
//	}
//}





//#include<queue>
//#include <iostream>
//using namespace std;
//const int N = 1e5;
//int n, k, a[N], ans;
//int main() {
//	//每次都把最大的变小
//	cin >> n >> k;
//	for (int i = 0; i <= n - 1; i++)
//		cin >> a[i];
//	priority_queue<int> pq;
//	for (auto num : a[N])
//		pq.push(num);
//	while (k--) {
//		auto eve = pq.top();
//		eve /= 2;
//		pq.pop();
//		pq.push(eve);
//	}
//	for (auto sum : pq)
//		ans += sum;
//	cout << ans;
//}

//#include<queue>
//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int n, k, a[N];
//long long sum;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i]; sum += a[i];
//	}
//	priority_queue<int>pq;
//	for (int i = 0; i <n; i++) {
//		if (a[i] % 2 == 0) pq.push(a[i]);
//	}
//	while (k--) {
//		int eve = pq.top();
//		pq.pop();    sum -= (eve / 2);
//		if (eve % 2 == 0) { eve /= 2;  pq.push(eve); }
//
//	}
//	cout << sum;
//	return 0;
//}
#include<utility>
#include<vector>
#include<iostream>
using namespace std;
//void quick_sort(int q[], int l, int r)
//{
//    if (l >= r) return;
//
//    int i = l - 1, j = r + 1, x = q[l + r >> 1];
//    while (i < j)
//    {
//        do i++; while (q[i] < x);
//        do j--; while (q[j] > x);
//        if (i < j) swap(q[i], q[j]);
//    }
//    quick_sort(q, l, j), quick_sort(q, j + 1, r);
//}
//
//int main() {
//	int q[] = { 3,5,3,4,5,6 };
//	quick_sort(q, 0, 5);
//	for (int i = 0; i <= 5; i++)
//		cout << q[i];
//	return 0;
//
//}


//归并排序
//int mid;
//void merge_sort(int q[], int l, int r) {
//    int tmp[] = { 0 };
//    if (l < r)    mid = l + r / 2;
//    else return;
//    merge_sort(q, l, mid);   merge_sort(q, mid + 1, r);
//    //合并
//    int i = l, j = mid + 1, k = 0;
//    while (i <= mid && j <= r)
//        if (q[i] <= q[j])   tmp[k++] = q[i++];
//        else tmp[k++] = q[j++];
//    while (i <= mid)   tmp[k++] = q[i++];
//    while (j <= r) tmp[k++] = q[j++];
//    for (i = l, j = 0; i <= r; i++, j++)  q[i] = tmp[j];
//}



//bool check(int x) {/* ... */ } // 检查x是否满足某种性质
//
//// 区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用：
//int bsearch_1(int l, int r)
//{
//    while (l < r)
//    {
//        int mid = l + r >> 1;
//        if (check(mid)) r = mid;    // check()判断mid是否满足性质
//        else l = mid + 1;
//    }
//    return l;
//}
//// 区间[l, r]被划分成[l, mid - 1]和[mid, r]时使用：
//int bsearch_2(int l, int r)
//{
//    while (l < r)
//    {
//        int mid = l + r + 1 >> 1;
//        if (check(mid)) l = mid;
//        else r = mid - 1;
//    }
//    return l;
//}



//bool check(int x){}//检查x是否满足某种性质
////区间[l,r]被划分成[l,mid]和[mid+1,r]时使用
//int bsearch_1(int l, int r) {
//	while(l<r)
//	{
//		int mid = l + r >> 1;
//		if (check(mid))  r = mid;
//		else l = mid + 1;
//	}
//	return 1;
//}
////区间[l,r]被划分成[l,mid-1]和[mid,r]时使用
//int bsearch_2(int l, int r) {
//	while (l < r) {
//		int mid = l + r + 1 > 1;
//		if (check(mid))   l = mid;
//		else r = mid - 1;
//	}
//	return 1;
//}


//高精度加法
//vector<int>add(vector<int>& A, vector<int>& B) {
//	if (A.size() < B.size())   return add(B, A);
//	vector<int> C;
//	//目前是A的数量大
//	int t = 0;
//	for (int i = 0; i < A.size(); i++) {
//		t += A[i];
//		if (i < B.size()) t += B[i];
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	if (t) C.push_back(t);
//	return C;
//}


//vector<int> add(vector<int>& A, vector<int>& B) {
//	if (A.size() < B.size())  return add(B, A);
//	vector<int>C;
//	int t = 0;
//	for (int i = 0; i < A.size(); i++) {
//		t += A[i];
//		if (i < B.size())  t += B[i];
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	if (t) C.push_back(t);
//	return C;
//}


//高精度减法
//vector<int>sub(vector<int>& A, vector<int>& B) {
//	vector<int>C;
//	for (int i = 0, t = 0; i < A.size(); i++) {
//		t = A[i] - t;
//		if (i < B.size()) t -= B[i];
//		C.push_back((t + 10) % 10);
//		if (t < 0)t = 1; else t = 0;
//	}
//	while (C.size() > 1 && C.back() == 0)  C.pop_back();
//	return C;
//}



