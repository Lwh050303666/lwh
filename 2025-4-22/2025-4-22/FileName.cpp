////滑动窗口    前提：单调          利用单调性规避了很多没有必要的枚举行为
////#include <iostream>
////#include<algorithm>
////using namespace std;
////int N, M, del;
////const int x = 1e5 + 10;
////int a[x];
////int main()
////{
////	cin >> N >> M;
////	for (int i = 1; i <= N; i++)
////		cin >> a[i];
////	// 请在此输入您的代码 
////	sort(a, a + N);
////	int ans = 1e9;
////	//滑动窗口，连续的子数组，最大值和最小值的差值最小
////	for (int l = 1; l <= N - M - 1; l++) {
////		int r = l + M - 1;
////		del = a[r] - a[l];
////		ans = min(del, ans);
////		r++;
////	}
////	cout << ans;
////	return 0;
////}
//#include<algorithm>
//#include <iostream>
//using namespace std;
////const int N = 1e5 + 10;
////int n, a[N], l, r, group = 0;
////int main()
////{
////	cin >> n;//双指针法？
////	for (int i = 1; i <= n; i++)
////		cin >> a[i];
////	sort(a + 1, a + n);
////	if (a[N] / a[1] < 2)  return 0;
////	else   for (l = 1; l <= n; l++) {
////		r = l + 1;
////		if (a[r] / a[l] >= 2) {
////			group++;
////			l++;
////		}
////		r++;
////	}
////	cout << group;
////	//每个小组最少也得两个人
////	  // 请在此输入您的代码
////	return 0;
////}
//
////#include<algorithm>
////#include <iostream>
////using namespace std;
////const int N = 1e5 + 10;
////int n, a[N], l, r, group = 0;
////int main()
////{
////	cin >> n;//双指针法？
////	for (int i = 1; i <= n; i++)
////		cin >> a[i];
////	sort(a + 1, a + n + 1);
////	if (a[n] / a[1] < 2)  return 0;
////	else   for (l = 1; l <= n - 1; l++) {
////		for (r = l + 1; r <= n ; r++) {
////		if (a[r] / a[l] >= 2) {
////			group++;
////			break;
////		}
////	}
////
////}
////	cout << group;
////	return 0;
////	//每个小组最少也得两个人
////	  // 请在此输入您的代码
////
////}
//
//
//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//// 网格最大边长
//const int MAXN = 20;
//
//int n;
//int topCnt[MAXN], leftCnt[MAXN];
//bool vis[MAXN][MAXN];
//vector<int> path, answer;
//
//// 四个方向：下, 右, 上, 左
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//// 判断当前坐标是否在合法范围内且未被访问且箭靶仍可射
//bool valid(int x, int y) {
//    return x >= 0 && x < n && y >= 0 && y < n && !vis[x][y]
//        && topCnt[y] >= 0 && leftCnt[x] >= 0;
//}
//
//// 深度优先搜索
//bool dfs(int x, int y) {
//    // 到达终点时，不再射箭，直接检查所有箭靶是否归零
//    if (x == n - 1 && y == n - 1) {
//        if (all_of(topCnt, topCnt + n, [](int v) { return v == 0; }) &&
//            all_of(leftCnt, leftCnt + n, [](int v) { return v == 0; })) {
//            path.push_back(x * n + y);
//            answer = path;
//            return true;
//        }
//        return false;
//    }
//
//    // 进入新格（除起点外）要射箭
//    if (!(x == 0 && y == 0)) {
//        topCnt[y]--;
//        leftCnt[x]--;
//    }
//    vis[x][y] = true;
//    path.push_back(x * n + y);
//
//    // 依次向四个方向尝试
//    for (int dir = 0; dir < 4; ++dir) {
//        int nx = x + dx[dir], ny = y + dy[dir];
//        if (valid(nx, ny)) {
//            if (dfs(nx, ny)) return true;
//        }
//    }
//
//    // 回溯：撤销操作
//    path.pop_back();
//    vis[x][y] = false;
//    if (!(x == 0 && y == 0)) {
//        topCnt[y]++;
//        leftCnt[x]++;
//    }
//    return false;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    // 读入
//    cin >> n;
//    for (int i = 0; i < n; ++i) cin >> topCnt[i];
//    for (int i = 0; i < n; ++i) cin >> leftCnt[i];
//
//    // 启动 DFS
//    dfs(0, 0);
//
//    // 输出结果
//    for (int i = 0; i < (int)answer.size(); ++i) {
//        if (i) cout << ' ';
//        cout << answer[i];
//    }
//    cout << "\n";
//    return 0;
//}
//
//
//

//滑动窗口
class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums)
	{
		int n = nums.size(), sum = 0, len = INT_MAX;
		for (int left = 0, right = 0; right < n; right++) {
			sum += nums[right];
			while (sum >= target)
			{
				len = min(len, right - left + 1);
				sum -= nums[left++];
			}
		}
		return len == INT_MAX ? 0 : len;
	}

};
















