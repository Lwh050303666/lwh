//#include <stdio.h>
////�鲢����
//const int N = 10000;  // �������������С
//
//int arr[N + 10], temp[N + 10];  // arrΪ����������飬tempΪ��������
//
//// �ϲ��������������Ѿ��ź����������ϲ�Ϊһ����������
//void merge(int arr[], int left, int mid, int right, int temp[]) {
//    int i = left;  // ��벿����ʼָ��
//    int j = mid + 1;  // �Ұ벿����ʼָ��
//    int k = left;  // temp�������ʼλ��
//
//    // �ϲ�����������
//    while (i <= mid && j <= right) {
//        if (arr[i] <= arr[j]) {
//            temp[k++] = arr[i++];  // �����벿�ֵ�Ԫ�ؽ�С������temp����
//        }
//        else {
//            temp[k++] = arr[j++];  // ���򣬷����Ұ벿�ֵ�Ԫ��
//        }
//    }
//
//    // ����벿��ʣ���Ԫ�ط���temp����
//    while (i <= mid) {
//        temp[k++] = arr[i++];
//    }
//
//    // ���Ұ벿��ʣ���Ԫ�ط���temp����
//    while (j <= right) {
//        temp[k++] = arr[j++];
//    }
//
//    // ��temp�����е�Ԫ�ظ��ƻ�ԭ����arr��
//    for (i = left; i <= right; i++) {
//        arr[i] = temp[i];
//    }
//}
//
//// �鲢����������
//void merge_sort(int arr[], int left, int right, int temp[]) {
//    if (left < right) {
//        int mid = (left + right) / 2;  // �����м�λ��
//        merge_sort(arr, left, mid, temp);  // �ݹ�������벿��
//        merge_sort(arr, mid + 1, right, temp);  // �ݹ������Ұ벿��
//        merge(arr, left, mid, right, temp);  // �ϲ������������������
//    }
//}
//
//int main() {
//    int n;
//
//    // ��������ĳ���
//    scanf("%d", &n);
//
//    // ���������Ԫ��
//    for (int i = 1; i <= n; ++i) {
//        scanf("%d", &arr[i]);
//    }
//
//    // ���ù鲢����
//    merge_sort(arr, 1, n, temp);
//
//    // �������������
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
//// �Զ���ȽϺ�������������
//bool compare(int a, int b) {
//    return a > b;  // ��� a > b������ true��ʵ�ֽ���
//}
//
//int main() {
//    int arr[] = { 10, 2, 9, 5, 3 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // ʹ���Զ���ȽϺ�����������
//    sort(arr, arr + n, compare);
//
//    // ���������
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
//// �ṹ������    ����ѧ���ṹ��
//struct Student {
//    string name;
//    int score;
//};
//
//// �Զ���ȽϺ������Ȱ��ɼ���������ɼ���ͬ�ٰ���������
//bool compare(Student a, Student b) {
//    if (a.score == b.score) {
//        return a.name < b.name;  // ����ɼ���ͬ������������
//    }
//    return a.score > b.score;  // ���ɼ���������
//}
//
//int main() {
//    Student students[] = { {"Alice", 88}, {"Bob", 95}, {"Charlie", 95}, {"David", 85} };
//    int n = sizeof(students) / sizeof(students[0]);
//
//    // ʹ���Զ���ȽϺ�����������
//    sort(students, students + n, compare);
//
//    // ���������
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
//        double mid = (l + r) / 2; // ����м�λ�ã��õ���ֵ����Ŀ��ֵ���бȶԡ�
//        if (f(mid) < a) {
//            ans = (int)(mid * 1000);
//            l = mid; // ����ѯ�����л�������
//        }
//        else {
//            r = mid; // ����ѯ�����л����Ұ��
//        }
//    }
//    cout << ans << '\n';
//    return 0;
//}
//// ���Ƕ��庯��ֵ��Ϊ 1,1,1,1,...,0,0,0,0
//// ��ʱ�õ���ans��Ϊ����f(ans)=1ʱ��ans
//while (l <= r) {
//    mid = (l + r) / 2;
//    if (f(mid) == 1) {
//        ans = mid;
//        l = mid + 1; // �л����Ұ��
//    }
//    else {
//        r = mid - 1; // �л�������
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
{//��������λ��
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
