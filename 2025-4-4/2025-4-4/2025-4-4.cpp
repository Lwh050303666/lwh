//#include <stdio.h>
////归并排序
//const int N = 10000;  // 定义数组的最大大小
//
//int arr[N + 10], temp[N + 10];  // arr为待排序的数组，temp为辅助数组
//
//// 合并操作：将两个已经排好序的子数组合并为一个有序数组
//void merge(int arr[], int left, int mid, int right, int temp[]) {
//    int i = left;  // 左半部分起始指针
//    int j = mid + 1;  // 右半部分起始指针
//    int k = left;  // temp数组的起始位置
//
//    // 合并两个子数组
//    while (i <= mid && j <= right) {
//        if (arr[i] <= arr[j]) {
//            temp[k++] = arr[i++];  // 如果左半部分的元素较小，放入temp数组
//        }
//        else {
//            temp[k++] = arr[j++];  // 否则，放入右半部分的元素
//        }
//    }
//
//    // 将左半部分剩余的元素放入temp数组
//    while (i <= mid) {
//        temp[k++] = arr[i++];
//    }
//
//    // 将右半部分剩余的元素放入temp数组
//    while (j <= right) {
//        temp[k++] = arr[j++];
//    }
//
//    // 将temp数组中的元素复制回原数组arr中
//    for (i = left; i <= right; i++) {
//        arr[i] = temp[i];
//    }
//}
//
//// 归并排序主函数
//void merge_sort(int arr[], int left, int right, int temp[]) {
//    if (left < right) {
//        int mid = (left + right) / 2;  // 计算中间位置
//        merge_sort(arr, left, mid, temp);  // 递归排序左半部分
//        merge_sort(arr, mid + 1, right, temp);  // 递归排序右半部分
//        merge(arr, left, mid, right, temp);  // 合并已排序的左右两部分
//    }
//}
//
//int main() {
//    int n;
//
//    // 输入数组的长度
//    scanf("%d", &n);
//
//    // 输入数组的元素
//    for (int i = 1; i <= n; ++i) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 调用归并排序
//    merge_sort(arr, 1, n, temp);
//
//    // 输出排序后的数组
//    for (int i = 1; i <= n; ++i) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// 自定义比较函数：降序排序
//bool compare(int a, int b) {
//    return a > b;  // 如果 a > b，返回 true，实现降序
//}
//
//int main() {
//    int arr[] = { 10, 2, 9, 5, 3 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // 使用自定义比较函数进行排序
//    sort(arr, arr + n, compare);
//
//    // 输出排序结果
//    for (int i = 0; i < n; ++i) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// 结构体排序    定义学生结构体
//struct Student {
//    string name;
//    int score;
//};
//
//// 自定义比较函数：先按成绩降序，如果成绩相同再按名字升序
//bool compare(Student a, Student b) {
//    if (a.score == b.score) {
//        return a.name < b.name;  // 如果成绩相同，按名字升序
//    }
//    return a.score > b.score;  // 按成绩降序排序
//}
//
//int main() {
//    Student students[] = { {"Alice", 88}, {"Bob", 95}, {"Charlie", 95}, {"David", 85} };
//    int n = sizeof(students) / sizeof(students[0]);
//
//    // 使用自定义比较函数进行排序
//    sort(students, students + n, compare);
//
//    // 输出排序结果
//    for (int i = 0; i < n; ++i) {
//        cout << students[i].name << ": " << students[i].score << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//const int D[] = { 1, 0, 0, 0, 1, 0, 1, 0, 2, 1 };
//
//struct st
//{
//    int a;
//    int b;
//} s[N];
//
//int f(int x)
//{
//    int cnt = 0;
//    while (x)
//    {
//        cnt += D[x % 10];
//        x /= 10;
//    }
//    return cnt;
//}
//
//bool cmp(st x, st y)
//{
//    if (x.b != y.b)
//        return x.b < y.b;
//    return x.a < y.a;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> s[i].a;
//        s[i].b = f(s[i].a);
//    }
//    sort(s, s + n, cmp);
//    for (int i = 0; i < n; i++)
//        cout << s[i].a << " ";
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//double a;
//int b;
//
//double f(double x) {
//    double res = 1;
//    for (int i = 1; i <= b; ++i) res *= x;
//    return res;
//}
//
//int main() {
//    cin >> a >> b;
//    double l = 0, r = a;
//    int ans = 0;
//    while ((r - l) > 1e-6) {
//        double mid = (l + r) / 2; // 求出中间位置，得到其值，与目标值进行比对。
//        if (f(mid) < a) {
//            ans = (int)(mid * 1000);
//            l = mid; // 将查询区间切换到左半段
//        }
//        else {
//            r = mid; // 将查询区间切换到右半段
//        }
//    }
//    cout << ans << '\n';
//    return 0;
//}
//// 我们定义函数值域为 1,1,1,1,...,0,0,0,0
//// 此时得到的ans即为最大的f(ans)=1时的ans
//while (l <= r) {
//    mid = (l + r) / 2;
//    if (f(mid) == 1) {
//        ans = mid;
//        l = mid + 1; // 切换到右半段
//    }
//    else {
//        r = mid - 1; // 切换到左半段
//    }
//}
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int n, k;
//const int N = 1e5 + 100;
//int H[N], W[N];
//bool chk(int x) {
//    long long t = k;
//    for (int i = 1; i <= n; ++i) {
//        t -= 1ll * (H[i] / x) * (W[i] / x);
//        if (t <= 0) return true;
//    }
//    return false;
//}
//int main() {
//    cin >> n >> k;
//    for (int i = 1; i <= n; ++i) {
//        cin >> H[i] >> W[i];
//    }
//    int l = 1, r = 100000, ans = 1, mid;
//    while (l <= r) {
//        mid = (l + r) / 2;
//        if (chk(mid)) {
//            ans = mid;
//            l = mid + 1;
//        }
//        else {
//            r = mid - 1;
//        }
//    }
//    cout << ans << '\n';
//    return 0;
//}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int N, A[N + 1];
int main()
{//可以用中位数
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    sort(&A[1], &A[N]);
    if (N % 2 == 1) {
        int mid = N + 1 / 2;
        int cnt = A[mid];
        for (int i = 1; i <= mid; i++) {
            int ans = A[mid] - A[i];
            cout << ans;
        }
        for (int i = mid + 1; i <= N; i++)
            cout << 0;
    }
    else {
        int mid = (N + 1 / 2) + 1;
        int cnt = A[mid];
        for (int i = 1; i <= mid; i++) {
            int ans = A[mid] - A[i];
            cout << ans;
        }
        for (int i = mid + 1; i <= N; i++)
            cout << 0;
    }
