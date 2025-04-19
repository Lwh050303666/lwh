//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long  LL;
//typedef pair<LL，LL> PLLLL;
//const LL N = 1e5 + 10;
//PLLLL F[N];
//PLLLL Q[N];
//LL n，len;
//bool check(LL time) {
//	int counter = 0;
//	for (int i = 0; i < n; i++) {
//		if (time >= F[i].second) {
//			LL t = time - F[i].second;
//			Q[counter].first = max((LL)1, F[i].first - t);
//			Q[counter].second = min(F[i].first + t, len);
//			counter++;
//		}
//		else {
//			//未开阀，所以不做任何处理
//		}
//	}
//	sort(Q, Q + counter);
//	LL lp，rp；
//		lp = Q[0].first;
//	rp = Q[0].second;
//	for (int i = 1; i < counter; i++) {
//		if (Q[i].first <= rp + 1)
//		{
//			rp = max(rp, Q[i].second);
//		}
//		else {
//			//区间没有连接上   也就是存在传感器接收不到的地方，退出循环
//			break;
//		}
//	}
//	return(lp == 1 && rp == len);
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n >> len;
//	for (int i = 0; i < n; i++) {
//		cin >> F[i].first >> F[i].second;
//	}
//	LL l = 1, r = 2e9 + 10;
//	while (l < r) {
//		LL mid = (l + r) / 2;
//		if (check(mid)) {
//			r = mid;
//		}
//		else {
//			l = mid + 1;
//		}
//	}
//	cout << r;
//	return 0;
//}
//ios_base::sync_with_stdio(0);
//cin.tie(0);
//cout.tie(0);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, h;
	cin >> n >> h;
	vector<int> a(n + 1);  // 从 a[1] 开始存储
	long long sum_total = 0;
	vector<long long> prefix(n + 1, 0);  // 前缀和数组

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		sum_total += a[i];
		prefix[i] = prefix[i - 1] + a[i];
	}

	if (sum_total <= h) {
		cout << sum_total << endl;
		return 0;
	}

	long long del = sum_total - h;
	long long max_remove = 0;  // 记录最大可移除的糖分

	// 遍历每个右端点 j，二分查找左端点 i
	for (int j = 1; j <= n; ++j) {
		long long target = prefix[j] - del;
		int left = 0, right = j;
		int best_i = -1;

		// 二分查找最小的 i 使 prefix[i] >= target
		while (left <= right) {
			int mid = (left + right) / 2;
			if (prefix[mid] >= target) {
				best_i = mid;
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}

		// 找到合法 i 时更新最大值
		if (best_i != -1 && best_i <= j) {
			long long current = prefix[j] - prefix[best_i];
			if (current <= del && current > max_remove) {
				max_remove = current;
			}
		}
	}

	cout << (sum_total - max_remove) << endl;
	return 0;
}


#include<iostream>
using namespace std;
int n, m; //输入参数：n表示元素个数，m表示需要选择的元素数量
int node[30]; 

void dfs(int u, int cnt) {
	if (n - u + cnt < m) return;
	if (cnt == m) {
		for (int i = 1; i <= m; ++i) {
			cout << node[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = u + 1; i <= n; ++i) {
		node[cnt + 1] = i;
		dfs(i, cnt + 1);
		node[cnt + 1] = 0;
	}
}
int main() {
	cin >> n >> m;
	dfs(0, 0);
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int n, m;
int p[30], vis[30];
int ans = 0;
bool chk(int c) {
	for (int i = 1; i < c; ++i) {
		if (abs(c - i) == abs(p[i] - p[c]))
			return false;
	}
	return true;
}
void dfs(int cnt) {
	if (cnt == n) {
		ans++;
		return;
	}
	for (int i = 1; i <= n; ++i) {
		if (!vis[i]) {
			vis[i] = 1;
			p[cnt + 1] = i;
			if (chk(cnt + 1)) {
				dfs(cnt + 1);
			}
			p[cnt + 1] = 0;
			vis[i] = 0;
		}
	}
}
int main() {
	cin >> n;
	dfs(0);
	cout << ans << '\n';
	return 0;
}
#include <iostream>

using namespace std;

int n, m; // n为幻方中的数字总数（固定为9），m未使用
int node[30], vis[30]; // node数组存储当前幻方各位置的数字，vis标记数字是否已使用
int ans[30], anscnt = 0; // ans存储找到的正确解，anscnt记录解的数量

// 检查当前node数组是否构成有效的3阶幻方
bool chk() {
    // 计算第一行的和作为基准值tmp
    int tmp = node[1] + node[2] + node[3];
    // 检查每一行、每一列、两条对角线的和是否等于tmp
    if (tmp != node[4] + node[5] + node[6]) // 第二行
        return false;
    if (tmp != node[7] + node[8] + node[9]) // 第三行
        return false;
    if (tmp != node[1] + node[4] + node[7]) // 第一列
        return false;
    if (tmp != node[2] + node[5] + node[8]) // 第二列
        return false;
    if (tmp != node[3] + node[6] + node[9]) // 第三列
        return false;
    if (tmp != node[1] + node[5] + node[9]) // 主对角线
        return false;
    if (tmp != node[3] + node[5] + node[7]) // 副对角线
        return false;
    return true; // 所有条件满足，是幻方
}

// 深度优先搜索填充幻方，cnt表示已填充的位置数
void dfs(int cnt) {
    if (cnt == n) { // 所有位置已填满
        if (chk()) { // 检查是否构成幻方
            // 记录解并增加计数
            for (int i = 1; i <= 9; ++i) {
                ans[i] = node[i];
            }
            anscnt++;
        }
        return;
    }
    // 处理下一个位置（cnt+1）
    if (node[cnt + 1] != 0) { // 当前位置已有预设数字，跳过
        dfs(cnt + 1);
        return;
    }
    // 尝试填入未使用的数字
    for (int i = 1; i <= 9; ++i) {
        if (!vis[i]) {
            vis[i] = 1; // 标记为已使用
            node[cnt + 1] = i; // 填入数字i
            dfs(cnt + 1); // 递归填充下一个位置
            node[cnt + 1] = 0; // 回溯，清空当前填入的数字
            vis[i] = 0; // 取消标记
        }
    }
}

int main() {
    n = 9; // 幻方共9个位置
    // 读取初始幻方状态，并标记已使用的数字
    for (int i = 1; i <= n; ++i) {
        cin >> node[i];
        if (node[i] != 0) {
            vis[node[i]] = 1; // 若数字已存在，标记为已使用
        }
    }
    dfs(0); // 从第0个位置开始搜索
    // 根据解的数量输出结果
    if (anscnt == 1) { // 唯一解
        // 输出第一行
        for (int i = 1; i <= 3; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        // 输出第二行
        for (int i = 4; i <= 6; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        // 输出第三行
        for (int i = 7; i <= 9; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    } else { // 无解或多解
        cout << "Too Many\n";
    }
    return 0;
}





































