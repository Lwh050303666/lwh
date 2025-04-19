#include <vector>   // ���� vector ���������ڴ洢��̬����
#include <queue>    // ���� queue ����������ʵ�����ȶ���
#include <limits>   // ���� limits �⣬���ڻ�ȡ��ֵ���͵����ֵ
using namespace std; // ʹ�ñ�׼�����ռ䣬����ÿ��ʹ�ñ�׼��ʱ����Ҫ���� std:: ǰ׺

const long long INF = numeric_limits<long long>::max(); // ����һ������ INF����ʾ��������ڳ�ʼ������

/**
 * @brief Dijkstra �㷨ʵ�֣����ڼ����ָ����㵽ͼ�����������ڵ����̾��롣
 *
 * @param graph ͼ���ڽӱ��ʾ������ graph[i] �洢�ڵ� i �������ڽӽڵ㼰���Ȩ�ء�
 *              ÿ���ڽӽڵ��ʾΪһ�� pair<int, int>������ first ���ڽӽڵ��������second �Ǳߵ�Ȩ�ء�
 * @param start ��ʼ�ڵ��������
 * @return vector<long long>����������ʼ�ڵ㵽���������ڵ����̾��롣����޷�����ĳ���ڵ㣬�����Ϊ INF��
 */
vector<long long> dijkstra(const vector<vector<pair<int, int>>>& graph, int start) {
    int n = graph.size();                   // ��ȡͼ�нڵ������
    vector<long long> dist(n, INF);         // ��ʼ���������������нڵ�ĳ�ʼ���붼��Ϊ�����
    dist[start] = 0;                         // ��ʼ�ڵ㵽����ľ���Ϊ 0

    // ʹ����С�ѣ����ȶ��У����洢�����룬�ڵ㣩�ԡ�
    // ���ȶ��л��Զ���������С�Ľڵ�����ǰ�档
    priority_queue<pair<long long, int>,    // �洢��Ԫ������Ϊ pair<long long, int>����ʾ�����룬�ڵ㣩
        vector<pair<long long, int>>, // �ײ�����ʹ�� vector
        greater<pair<long long, int>>> pq; // ʹ�� greater �º�����ʹ�ö���Ϊ��С��

    pq.emplace(0, start);                   // ����ʼ�ڵ�������ȶ��У�����Ϊ 0

    while (!pq.empty()) {                  // �����ȶ��в�Ϊ��ʱ��ѭ������
        auto [d, u] = pq.top();            // ��ȡ�����о�����С�Ľڵ㡣d �Ǿ��룬u �ǽڵ�����
        pq.pop();                           // �Ӷ������Ƴ��ýڵ�

        // �����ǰ������ڼ�¼�ľ��룬˵���Ѿ��ҵ��˸��̵�·����ֱ��������
        // ��������ĳ���������ͬһ���ڵ���ܶ�ν������ȶ��У���ֻ�е�һ�γ���ʱ������̾��롣
        if (d > dist[u]) continue;

        // �����ڵ� u �������ڽӽڵ�
        for (auto [v, w] : graph[u]) {      // v ���ڽӽڵ��������w �Ǳ� (u, v) ��Ȩ��
            long long new_dist = dist[u] + w; // �������ʼ�ڵ㾭���ڵ� u ����ڵ� v �ľ���

            // ����ҵ����̵�·��������¾��룬�����ڵ� v �������ȶ���
            if (new_dist < dist[v]) {       // ����µľ���С�ڵ�ǰ��¼�ľ���
                dist[v] = new_dist;         // ���½ڵ� v ����̾���
                pq.emplace(new_dist, v);   // ���ڵ� v �������ȶ��У��Ա�����������ڽӽڵ�ľ���
            }
        }
    }

    return dist;                            // ���ش���ʼ�ڵ㵽���������ڵ����̾�������
}






#include <iostream>  // ��������������⣬���ڿ���̨����������
#include <vector>    // �������������⣬���ڴ洢��̬����
#include <climits>   // ���� limits �⣬���ڻ�ȡ�������͵����ֵ����Сֵ

using namespace std; // ʹ�ñ�׼�����ռ䣬����ÿ��ʹ�ñ�׼��ʱ����Ҫ���� std:: ǰ׺

/**
 * @brief Floyd-Warshall �㷨ʵ�֣����ڼ���ͼ�����нڵ��֮������·����
 *
 * @param graph ͼ���ڽӾ����ʾ������ graph[i][j] �洢�ڵ� i ���ڵ� j �ıߵ�Ȩ�ء�
 *              ����ڵ� i �ͽڵ� j ֮��û�бߣ��� graph[i][j] ��ֵΪ INF����ʾ����󣩡�
 *              graph[i][i] ��ֵΪ 0���ڵ㵽����ľ���Ϊ 0����
 * @param n ͼ�нڵ��������
 * @return vector<vector<int>>���������нڵ��֮������·�����ȡ�
 *         result[i][j] ��ʾ�ڵ� i ���ڵ� j �����·�����ȡ�
 */
vector<vector<int>> floydWarshall(vector<vector<int>>& graph, int n) {
    // 1. ��ʼ���������
    // ����һ����ά���� dist�����ڴ洢�ڵ� i ���ڵ� j ����̾��롣
    // ��ʼʱ��dist ��ֵ�� graph ��ͬ���� dist[i][j] = graph[i][j]��
    vector<vector<int>> dist = graph;

    // 2. �����㷨������ѭ��
    //   - �����ѭ����k �� 0 �� n-1����ʾ���������м�ڵ㡣
    //   - �м��ѭ����i �� 0 �� n-1����ʾ��ʼ�ڵ㡣
    //   - ���ڲ�ѭ����j �� 0 �� n-1����ʾĿ��ڵ㡣
    //
    //   ����ÿһ�Խڵ� (i, j)������Ƿ����һ�������ڵ� k �ĸ���·����
    //   ��� dist[i][k] + dist[k][j] < dist[i][j]������� dist[i][j] ��ֵΪ dist[i][k] + dist[k][j]��
    for (int k = 0; k < n; ++k) {        // �������нڵ㣬��Ϊ�м�ڵ�
        for (int i = 0; i < n; ++i) {    // �������нڵ㣬��Ϊ��ʼ�ڵ�
            for (int j = 0; j < n; ++j) { // �������нڵ㣬��ΪĿ��ڵ�
                // ����Ƿ����ͨ���ڵ� k �ҵ����̵�·��
                //   - ���ȣ�ȷ�� dist[i][k] �� dist[k][j] ������������Ա������������
                //   - ��� dist[i][k] + dist[k][j] С�ڵ�ǰ dist[i][j]������� dist[i][j]��
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                    dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];  // �������·������
                }
            }
        }
    }

    // 3. ���ؽ��
    // �㷨������dist �����д洢�������нڵ��֮������·�����ȡ�
    return dist;
}

int main() {
    // 1. ����ͼ���ڽӾ���
    //   - n��ͼ�нڵ��������
    //   - graph���ڽӾ������� graph[i][j] ��ʾ�ڵ� i ���ڵ� j �ıߵ�Ȩ�ء�
    //     ����ڵ� i �ͽڵ� j ֮��û�бߣ��� graph[i][j] ��ֵΪ INT_MAX����ʾ����󣩡�
    //     graph[i][i] ��ֵΪ 0���ڵ㵽����ľ���Ϊ 0����
    int n = 4;  // ʾ��ͼ�� 4 ���ڵ�
    vector<vector<int>> graph = {
        {0,   5,  INT_MAX, 10},  // �ڵ� 0 �������ڵ�ľ���
        {INT_MAX, 0,   3,  INT_MAX},  // �ڵ� 1 �������ڵ�ľ���
        {INT_MAX, INT_MAX, 0,   1},  // �ڵ� 2 �������ڵ�ľ���
        {INT_MAX, INT_MAX, INT_MAX, 0}   // �ڵ� 3 �������ڵ�ľ���
    };

    // 2. ���� Floyd-Warshall �㷨
    // ���� floydWarshall �������������нڵ��֮������·����
    vector<vector<int>> result = floydWarshall(graph, n);

    // 3. ��ӡ���
    // ���� result ���󣬴�ӡÿ���ڵ��֮������·�����ȡ�
    cout << "���нڵ��֮������·������:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "�ڵ� " << i << " �����ڵ�����·��: ";
        for (int j = 0; j < n; ++j) {
            if (result[i][j] == INT_MAX) {
                cout << "INF ";  // �������Ϊ���������� "INF"
            }
            else {
                cout << result[i][j] << " "; // ����������·������
            }
        }
        cout << endl;
    }

    return 0; // ������������
}