//////bfs
////bfs(s) {
////	Q = new queue() 
////    Q.pushs(s),visited[s]=true
////		while (！Q.empty()) {
////			u=Q.pop()
////				for each edge(u,v)
////					if (!visited[v]) {
////						Q.push(v)
////							visited[v] = true
////					}
////		}
////}
////#include<iostream>
////#include<queue>
////using namespace std;
////int N, M;
////int G[101][101], vis[101][101];
////int dx[4] = { 0,1,0,-1 };
////int dy[4] = { 1,0,-1,0 };
////struct point {
////	int x;
////	int y;
////	int step;
////};
////void bfs(int start_x, int start_y, int end_x, int end_y) {
////	queue<point> q;
////	q.push({ start_x,start_y,0 });
////	vis[start_x][start_y] = 1;
////	bool found = false;
////	while (!q.empty()) {
////		point curr = q.front();
////		q.pop();
////		if (curr.x == end_x && curr.y == end_y) {
////			cout << curr.step << endl;
////			found = true;
////			break;
////		}
////		for (int k = 0; k < 4; k++) {
////			int tx = curr.x + dx[k];
////			int ty = curr.y + dy[k];
////			if (tx >= 1 && tx <= N && ty >= 1 && ty <= M && G[tx][ty] == 1 && !vis[tx][ty]) {
////				vis[tx][ty] = 1;
////				q.push({ tx,ty,curr.step + 1 });
////			}
////		}
////	}
////	if (!found)
////		cout << "no answer" << endl;
////}
////int main() {
////	cin >> N >> M;
////	for (int i = 1; i <= N; i++)
////		for (int j = 1; j <= M; j++)
////			cin >> G[i][j];
////	for (int i = 1; i <= N; i++)
////		for (int j = 1; j <= M; j++)
////			vis[i][j] = 0;
////	int x1, y1, x2, y2;
////	cin >> x1 >> y1 >> x2 >> y2;
////	bfs(x1, y1, x2, y2);
////	return 0;
////}
//////基于范围的for循环
//std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
//cout << "修改前" << endl;
//for (auto& n : vec)
//std::cout << n++;
//
//cout << endl;
//cout << "修改后" << endl;
//for (auto j : vec)
//std::cout << j;
//基于范围的FOR循环的遍历是只读的遍历，除非将变量变量的类型声明为引用类型。
//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<vector>
//using namespace std;
//const int N = 2e3 + 10;
//typedef pair<int, int> PII;
//int dx[] = { 0,1,0,-1 };
//int dy[] = { 1,0,-1,0 };
//int n, m;
//int dist[N][N];
//bool is_door[N][N];
//vector<PII> door[N][N];
//void bfs() {
//	memset(dist, 0x3f, sizeof dist);
//	dist[n][n] = 0;
//	queue<PII>q;
//	q.push({ n,n });
//	while (!q.empty()) {
//		auto t = q.front();
//		q.pop();
//		for (int p = 0; p < 4; p++) {
//			int X = t.first + dx[p];
//			int Y = t.second + dy[p];
//			if (X<1 || X>n || Y<1 || Y>n) continue;
//			if (is_door[t.first][t.second]) {
//				for (auto s : door[t.first][t.second]) {
//					if (dist[s.first][s.second] > dist[t.first][t.second]) + 1){
//						dist[s.first][s.second] = dist[t.first][t.second] + 1;
//						q.push(s);
//					}
//				}
//
//			}
//			if (dist[X][Y] > dist[t.first][t.second] + 1) {
//				dist[X][Y] = dist[t.first][t.second] + 1;
//				q.push({ X,Y });
//			}
//		}
//	}
//}
//int main() {
//	cin >> n >> m;
//	while (m--) {
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		door[a][b].push_back({ c,d });
//		door[c][d].push_back({ a,b });
//		is_door[a][b] = is_door[c][d] = true;
//	}
//	bfs();
//	long long sum = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			sum += dist[i][j];
//		}
//	}
//	printf("%.21f\n", 1.0 * sum / (n * n));
//	return 0;
//}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//char c[20];
//LL ans = 0;
//int n, m;
//void dfs(int i, LL v) {
//	int x = c[i] - '0';
//	if (c[i]) {
//		int t = min(n, 9 - x);
//		n -= t;
//		dfs(i + 1, v * 10 + x + t);
//		n += t;
//		if (m > x) {
//			m -= x + 1;
//			dfs(i + 1, v * 10 + 9);
//			m += x + 1;
//		}
//	}
//	else {
//		ans = max(ans, v);
//	}
//}
//int main() {
//	scanf("%s%d%d", c, &n, &m);
//	dfs(0, 0);
//	printf("%lld\n", ans);
//	return 0;
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n, ans = 50;
//long long m, a[50], sum[50];
//void dfs(long long S, int i, int cnt) {
//	if (cnt >= ans) return;
//	if (S == m) ans = cnt;
//	if (i > n || S > m || S + sum[i] < m) return;
//	dfs(S, i + 1, cnt);
//	dfs(S + a[i], i + 1, cnt);
//	dfs(S + a[i] / 2, i + 1, cnt + 1);
//}
//int main() {
//	cin >> n >> m;
//	m <<= 1;
//	for (int i = 0; i < n; ++i) {
//		cin >> a[i];
//		a[i] <<= 1;
//	}
//	sort(a, a + n, greater<>());
//	for (int i = n - 1; i >= 0; --i) {
//		sum[i] = sum[i + 1] + a[i];
//	}
//	dfs(0, 0, 0);
//	if (ans == 50) {
//		cout << -1 << endl;
//	}
//	else {
//		cout << ans << endl;
//	}   return 0;
//}
//#include<stdio.h>
//int sum = 0,n;
//
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//
//		sum += i;
//
//	printf("%d", sum);
//
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int n;
//int main() {
//	cin >> n;
//for(int i=1;i<=n;i++)
//for (int j = 1; j <= n; j++) {
//	cout << i * j;
//	if (n == j)
//		printf("\n");
//}
//}


////交换两个整数
//#include<stdio.h>
//int a, b;
//void swap() {
//	int tmp = 0;
//	tmp = b;
//	b = a;
//	a = tmp;
//}
//void main() {
//	scanf_s("%d%d", &a, &b);
//	swap(a, b);
//}

////判断一年是不是闰年
//#include<stdio.h>
//int year;
//bool is_run(int x) {
//	if (x % 4 == 0 && 100 % x != 0 || 400 % x == 0)
//		return true;
//	else return false;
//}
//void main() {
//	scanf_s("%d", &year);
//	 is_run(year);
//}

//函数判断素数 素数指的是该数的因数只有1和它本身 我有一计
//#include <iostream>
//
//using namespace std;
//
//bool is_prime(int n) {
//    if (n <= 1) return false;  // 小于等于1的数不是素数
//    if (n == 2) return true;   // 2是唯一的偶数素数
//    if (n % 2 == 0) return false; // 排除其他偶数
//
//    // 从3开始检查奇数因子，直到i*i超过n
//    for (long long i = 3; i * i <= n; i += 2) {
//        if (n % i == 0) {
//            return false; // 发现因子，不是素数
//        }
//    }
//    return true; // 未发现因子，是素数
//}
//
//// 测试样例
//int main() {
//    for (int i = 100; i <= 200; i++) {
//        if (is_prime(i))
//            cout << i<<' ';
// }
//    return 0;
//}
// 
// 
//编写一个函数实现n的k次方，使用递归实现。
//#include <iostream>
//using namespace std;
//
//double my_pow(double n, int k) {
//    if (k == 0) return 1.0;          // 基准条件：任何数的0次方为1
//    if (k < 0) {                     // 处理负指数
//        return 1.0 / my_pow(n, -k);  // 转换为正指数计算
//    }
//    double half = my_pow(n, k / 2);  // 递归计算n^(k/2)
//    if (k % 2 == 0) {
//        return half * half;          // 偶数：n^k = (n^(k/2))^2
//    }
//    else {
//        return n * half * half;      // 奇数：n^k = n * (n^(k/2))^2
//    }
//}
//
//// 测试样例
//int main() {
//    cout << "2^5 = " << my_pow(2, 5) << endl;    // 32
//    cout << "3^-3 = " << my_pow(3, -3) << endl;  // 1/27 ≈ 0.037037
//    cout << "5^0 = " << my_pow(5, 0) << endl;    // 1
//    return 0;
//}
//#include<math.h>
//#include<iostream>
//using namespace std;
//int main() {
//	double x = pow(3.0, -3.0);
//	cout << x;
//}





















