//最短路问题 dijkstra算法  floyd算法  今天一定熟练模版
//#include <vector>
//#include <queue>
//#include <limits>
//using namespace std;
//
//const long long INF = numeric_limits<long long>::max();
//
//vector<long long> dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
//    int n = graph.size();
//    vector<long long> dist(n, INF);
//    dist[start] = 0;
//
//    // 使用最小堆，存储（距离，节点）
//    priority_queue<pair<long long, int>,
//        vector<pair<long long, int>>,
//        greater<pair<long long, int>>> pq;
//    pq.emplace(0, start);
//
//    while (!pq.empty()) {
//        auto [d, u] = pq.top();
//        pq.pop();
//
//        // 如果当前距离大于记录的距离，跳过
//        if (d > dist[u]) continue;
//
//        // 遍历所有邻接节点
//        for (auto [v, w] : graph[u]) {
//            long long new_dist = dist[u] + w;
//            // 如果找到更短的路径，则更新
//            if (new_dist < dist[v]) {
//                dist[v] = new_dist;
//                pq.emplace(new_dist, v);
//            }
//        }
//    }
//
//    return dist;
//}





//#include <vector>   // 引入 vector 容器，用于存储动态数组
//#include <queue>    // 引入 queue 容器，用于实现优先队列
//#include <limits>   // 引入 limits 库，用于获取数值类型的最大值
//using namespace std; // 使用标准命名空间，避免每次使用标准库时都需要加上 std:: 前缀
//
//const long long INF = numeric_limits<long long>::max(); // 定义一个常量 INF，表示无穷大，用于初始化距离

/**
 * @brief Dijkstra 算法实现，用于计算从指定起点到图中所有其他节点的最短距离。
 *
 * @param graph 图的邻接表表示，其中 graph[i] 存储节点 i 的所有邻接节点及其边权重。
 *              每个邻接节点表示为一个 pair<int, int>，其中 first 是邻接节点的索引，second 是边的权重。
 * @param start 起始节点的索引。
 * @return vector<long long>，包含从起始节点到所有其他节点的最短距离。如果无法到达某个节点，则距离为 INF。
// */
//vector<long long> dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
//    int n = graph.size();                   // 获取图中节点的数量
//    vector<long long> dist(n, INF);         // 初始化距离向量，所有节点的初始距离都设为无穷大
//    dist[start] = 0;                         // 起始节点到自身的距离为 0
//
//    // 使用最小堆（优先队列），存储（距离，节点）对。
//    // 优先队列会自动将距离最小的节点排在前面。
//    priority_queue<pair<long long, int>,    // 存储的元素类型为 pair<long long, int>，表示（距离，节点）
//        vector<pair<long long, int>>, // 底层容器使用 vector
//        greater<pair<long long, int>>> pq; // 使用 greater 仿函数，使得队列为最小堆
//
//    pq.emplace(0, start);                   // 将起始节点加入优先队列，距离为 0
//
//    while (!pq.empty()) {                  // 当优先队列不为空时，循环继续
//        auto [d, u] = pq.top();            // 获取队列中距离最小的节点。d 是距离，u 是节点索引
//        pq.pop();                           // 从队列中移除该节点
//
//        // 如果当前距离大于记录的距离，说明已经找到了更短的路径，直接跳过。
//        // 这种情况的出现是由于同一个节点可能多次进入优先队列，但只有第一次出队时才是最短距离。
//        if (d > dist[u]) continue;
//
//        // 遍历节点 u 的所有邻接节点
//        for (auto [v, w] : graph[u]) {      // v 是邻接节点的索引，w 是边 (u, v) 的权重
//            long long new_dist = dist[u] + w; // 计算从起始节点经过节点 u 到达节点 v 的距离
//
//            // 如果找到更短的路径，则更新距离，并将节点 v 加入优先队列
//            if (new_dist < dist[v]) {       // 如果新的距离小于当前记录的距离
//                dist[v] = new_dist;         // 更新节点 v 的最短距离
//                pq.emplace(new_dist, v);   // 将节点 v 加入优先队列，以便后续更新其邻接节点的距离
//            }
//        }
//    }
//
//    return dist;                            // 返回从起始节点到所有其他节点的最短距离向量
//}
//
//
//
//
//
//
//#include <iostream>  // 引入输入输出流库，用于控制台的输入和输出
//#include <vector>    // 引入向量容器库，用于存储动态数组
//#include <climits>   // 引入 limits 库，用于获取整数类型的最大值和最小值
//
//using namespace std; // 使用标准命名空间，避免每次使用标准库时都需要加上 std:: 前缀
//
///**
// * @brief Floyd-Warshall 算法实现，用于计算图中所有节点对之间的最短路径。
// *
// * @param graph 图的邻接矩阵表示，其中 graph[i][j] 存储节点 i 到节点 j 的边的权重。
// *              如果节点 i 和节点 j 之间没有边，则 graph[i][j] 的值为 INF（表示无穷大）。
// *              graph[i][i] 的值为 0（节点到自身的距离为 0）。
// * @param n 图中节点的数量。
// * @return vector<vector<int>>，包含所有节点对之间的最短路径长度。
// *         result[i][j] 表示节点 i 到节点 j 的最短路径长度。
// */
//vector<vector<int>> floydWarshall(vector<vector<int>>& graph, int n) {
//    // 1. 初始化距离矩阵
//    // 创建一个二维向量 dist，用于存储节点 i 到节点 j 的最短距离。
//    // 初始时，dist 的值与 graph 相同，即 dist[i][j] = graph[i][j]。
//    vector<vector<int>> dist = graph;
//
//    // 2. 核心算法：三重循环
//    //   - 最外层循环：k 从 0 到 n-1，表示允许经过的中间节点。
//    //   - 中间层循环：i 从 0 到 n-1，表示起始节点。
//    //   - 最内层循环：j 从 0 到 n-1，表示目标节点。
//    //
//    //   对于每一对节点 (i, j)，检查是否存在一个经过节点 k 的更短路径。
//    //   如果 dist[i][k] + dist[k][j] < dist[i][j]，则更新 dist[i][j] 的值为 dist[i][k] + dist[k][j]。
//    for (int k = 0; k < n; ++k) {        // 遍历所有节点，作为中间节点
//        for (int i = 0; i < n; ++i) {    // 遍历所有节点，作为起始节点
//            for (int j = 0; j < n; ++j) { // 遍历所有节点，作为目标节点
//                // 检查是否可以通过节点 k 找到更短的路径
//                //   - 首先，确保 dist[i][k] 和 dist[k][j] 都不是无穷大，以避免整数溢出。
//                //   - 如果 dist[i][k] + dist[k][j] 小于当前 dist[i][j]，则更新 dist[i][j]。
//                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
//                    dist[i][k] + dist[k][j] < dist[i][j]) {
//                    dist[i][j] = dist[i][k] + dist[k][j];  // 更新最短路径长度
//                }
//            }
//        }
//    }
//
//    // 3. 返回结果
//    // 算法结束后，dist 矩阵中存储的是所有节点对之间的最短路径长度。
//    return dist;
//}
//
//int main() {
//    // 1. 定义图的邻接矩阵
//    //   - n：图中节点的数量。
//    //   - graph：邻接矩阵，其中 graph[i][j] 表示节点 i 到节点 j 的边的权重。
//    //     如果节点 i 和节点 j 之间没有边，则 graph[i][j] 的值为 INT_MAX（表示无穷大）。
//    //     graph[i][i] 的值为 0（节点到自身的距离为 0）。
//    int n = 4;  // 示例图有 4 个节点
//    vector<vector<int>> graph = {
//        //{0,   5,  INT_MAX, 10},  // 节点 0 到其他节点的距离
//        //{INT_MAX, 0,   3,  INT_MAX},  // 节点 1 到其他节点的距离
//        //{INT_MAX, INT_MAX, 0,   1},  // 节点 2 到其他节点的距离
//        //{INT_MAX, INT_MAX, INT_MAX, 0}   // 节点 3 到其他节点的距离
//    };
//
//    // 2. 调用 Floyd-Warshall 算法
//    // 调用 floydWarshall 函数，计算所有节点对之间的最短路径。
//    vector<vector<int>> result = floydWarshall(graph, n);
//
//    // 3. 打印结果
//    // 遍历 result 矩阵，打印每个节点对之间的最短路径长度。
//    cout << "所有节点对之间的最短路径长度:" << endl;
//    for (int i = 0; i < n; ++i) {
//        cout << "节点 " << i << " 到各节点的最短路径: ";
//        for (int j = 0; j < n; ++j) {
//            if (result[i][j] == INT_MAX) {
//                cout << "INF ";  // 如果距离为无穷大，则输出 "INF"
//            }
//            else {
//                cout << result[i][j] << " "; // 否则，输出最短路径长度
//            }
//        }
//        cout << endl;
//    }
//
//    return 0; // 程序正常结束
//}



////floyd算法
//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//vector<vector<int>>floydWarshall(vector<vector<int>>& graph, int n) {
//	vector<vector<int>>dist = graph;//graph用来记录dist[i][j]的边和权值
//	for (int k = 0; k < n; ++k) {
//		for (int i = 0; i < n; ++i) {
//			for (int j = 0; j < n; ++j) {
//				//检查是否可以通过节点k找到更短的路径
//				if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
//					dist[i][j] = dist[i][k] + dist[k][j];
//				}
//			}
//		}
//
//	}
//	return dist;
//}




////dijkstra算法
//#include<vector>
//#include<queue>
//#include<limits>
//using namespace std;
//const long long INF = numeric_limits<long long>::max();
//
//vector<long long> dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
//	int n = graph.size();
//	vector<long long>dist(n, INF);//初始化距离向量，所有节点的初始距离都无穷大
//	dist[start] = 0;//初始化最初节点
//	priority_queue<pair<long long, int>,
//		vector<pair<long long, int>>,
//		greater<pair<long long, int>>>pq;//存储的元素类型为pair,表示[距离，节点]
//	pq.emplace(0, start);
//	while (!pq.empty()) {
//		auto [d, u] = pq.top();
//		pq.pop();
//		if (d > dist[u]) continue;
//		for (auto [v, w] : graph[u]) {
//			long long new_dist = dist[u] + w;
//			if (new_dist < dist[v]) {
//				dist[v] = new_dist;
//				pq.emplace(new_dist, v);
//			}
//		}
//	}
//	return dist;
// }
//
// 
//
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int n, m;
//int a[501][501];
//bool b[501][501] = { 0 };
//int tempx[4] = { -1,1,0,0 };//上，下，左右四个方向上操作
//int tempy[4] = { 0,0,-1,-1 };
//struct node {   
//    int x;
//    int y;
//    int requiretime;
//    int readytime;
//    int finishtime;
//    node(int tempx, int tempy, int tempreadytime) { //构造函数
//        x = tempx;
//        y = tempy;
//        readytime = tempreadytime;
//        requiretime = a[x][y];
//        finishtime = tempreadytime + a[x][y];
//    }
//    bool operator < (const node tempnode) const {//重写<
//        if (finishtime != tempnode.finishtime) return finishtime < tempnode.finishtime;
//        else if (x != tempnode.x) return x < tempnode.x;
//        else return y < tempnode.y;
//    }
//};
//bool isok(int x, int y) {  //此函数用来判断目标点是否合理
//    if (x >= 1 && x <= n && y >= 1 && y <= m && b[x][y] == 0)  return true;
//    else return false;
//}
//void BFS() {
//    set<node> s;
//    s.insert(node(1, 1, 0));
//    b[1][1] = 1;
//    while (!s.empty())
//    {
//        node top = s.begin();
//        s.erase(s.begin());
//        for (int i = 0; i < 4; i++) {//往四个方向探索
//            int newx = top.x + tempx[i];
//            int newy = top.y + tempy[i];
//            if (isok(newx, newy)) {
//                s.insert(node(newx, newy, top.finishtime));
//                b[newx][newy] = 1;
//            }
//        }
//        if (s.size() ==1) cout << s.begin()->finishtime;  //当集合中仅剩一个点时，该点的finishtime即为结果
//    }
//}
//int main() {
//    cin >> n >> m; //输入地图
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    BFS();
//    return 0;
//}
  





////小乐乐排电梯
//#include<stdio.h>
//int n;
//int how(int x){
//	int y = n / 12;
//	int ans = y + 1;
//	printf("%d", ans);
// }
//int main() {
//	scanf_s("%d", &n);
//	int cnt = how(n);
//	int ans = (n - 1) * 4 + 2;
//	printf("%d", ans);
//
//
//}


////求10个整数中的最大值
//#include<iostream>
//using namespace std;
//int a, b, c, d, e, f, g, h, i, h, j;
//int main() {
//	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
//	ma
//}

#include<stdio.h>
int sum ;
int main() {
	for (int i = 1; i <= 100; i + 2) {
		int sum1 = 0;
		int sum1 += 1 / i;
	}
}




