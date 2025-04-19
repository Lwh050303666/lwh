#include <iostream>
#include<bits/stdc++.h>
const int x = 1000;
using namespace std;
int N, M, u[x], v[x], c[x], C[x];//g����Ϊ����ĳ���к���Ҫ�ĸ���ʱ��
vector<vector<pair<int, int>>>graph;
vector<int>dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
    int N = graph.size();


    vector<int> dist(N, INT_MAX);//��Ȩֵ��������
    dist[1] = 0;
    //ʹ�����ȶ��лὫ����ԭ����С�Ľڵ�����ǰ��
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
    return dist;    //��������Ҫ�������Ҫ���������·��������ʲô

}


}
int main()
{
    cin >> N >> M;
    // ���ڴ��������Ĵ���   dijkstra�㷨
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
vector<vector<int>> upda(n, vector<int>(n, INT_MAX));//��һ��int��Ȩֵ���ڶ����Žڵ�
vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
floydWarshall(vector < vector<int>& dist, int n) {
    forr(int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }   //���������ö��ַ�

}
int main()
{
    cin >> n >> ' ' >> Q;
    // ���ڴ��������Ĵ���  ��һ�����е���һ������ʱ���ܴ��ڶ���·��  ��floyd�㷨���Խ������
    for (int i = 0; i < n; i++)//ÿ����·�Ļҳ��ȶ�������ֵ
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
    //���빤�����Ѿ���ɣ�������Ҫ���ľ���ͨ���߼�д����Ӧ�Ĵ���

    return 0;
}