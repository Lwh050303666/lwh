#include <iostream>
#include<bits/stdc++.h>
const int x = 1000;
using namespace std;
int N, M, u[x], v[x], c[x], C[x];//g数组为到达某城市后需要的隔离时间
vector<vector<pair<int, int>>>graph;
vector<int>dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
    int N = graph.size();


    vector<int> dist(N, INT_MAX);//（权值，索引）
    dist[1] = 0;
    //使用优先队列会将距离原点最小的节点排在前面
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    pq.emplace(0, 1);
    while (!pq.empty() {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;
        for (auto [v, w] : graph[u]) {
            int new_dist = dist[u] + w;
            if (new_dist < dist[v]) {
                dist[v] = new_dist;
                pre[v] = u;
                pq.emplace(new_dist, v);
            }
        }

    }
    return dist;    //现在最重要的情况是要搞清楚它的路径到底是什么

}


}
int main()
{
    cin >> N >> M;
    // 请在此输入您的代码   dijkstra算法
    for (int i = 1; i <= N; i++)
        cin >> C[i];
    for (int i = 1; i <= M; i++)
    {
        cin >> u[i] >> v[i] >> c[i];
        graph[u[i]].emplace_back(v[i], c[i] + C[v[i]]);
    }
    int cnt = dijkstra(graph, 1);
    int ans = cnt - C[N];
    return 0;
}





#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int n, Q, L[N][N], D[N][N], DEL[N][N], upda[N][N];
vector<vector<int>> upda(n, vector<int>(n, INT_MAX));//第一个int放权值，第二个放节点
vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
floydWarshall(vector < vector<int>& dist, int n) {
    forr(int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }   //这道题可以用二分法

}
int main()
{
    cin >> n >> ' ' >> Q;
    // 请在此输入您的代码  从一个城市到另一个城市时可能存在多条路线  用floyd算法可以解决问题
    for (int i = 0; i < n; i++)//每条道路的灰尘度都有下限值
        for (int j = 0; j < n; j++) {
            cin >> D[i][j];
            D[j][i] = D[i][j];
            if (n == j) cout << endl;
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> L[i][j];
            L[j][i] = L[i][j];
            if (n == j) cout << endl;
        }
    for (int i = 0; i < n; ++i) {
        dist[i][i] = 0;
    }
    upda = dist;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            DEL[i][j] = D[i][j] - L[i][j];
            dist[i][j] = D[i][j];
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0, j < n; j++) {
            for (auto& s : upda[i - 1][j])
                s -= 1;

        }
    }
    //输入工作都已经完成，接下来要做的就是通过逻辑写出对应的代码

    return 0;
}