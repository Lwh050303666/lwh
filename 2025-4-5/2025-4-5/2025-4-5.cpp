//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long  LL;
//typedef pair<LL��LL> PLLLL;
//const LL N = 1e5 + 10;
//PLLLL F[N];
//PLLLL Q[N];
//LL n��len;
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
//			//δ���������Բ����κδ���
//		}
//	}
//	sort(Q, Q + counter);
//	LL lp��rp��
//		lp = Q[0].first;
//	rp = Q[0].second;
//	for (int i = 1; i < counter; i++) {
//		if (Q[i].first <= rp + 1)
//		{
//			rp = max(rp, Q[i].second);
//		}
//		else {
//			//����û��������   Ҳ���Ǵ��ڴ��������ղ����ĵط����˳�ѭ��
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
	vector<int> a(n + 1);  // �� a[1] ��ʼ�洢
	long long sum_total = 0;
	vector<long long> prefix(n + 1, 0);  // ǰ׺������

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
	long long max_remove = 0;  // ��¼�����Ƴ����Ƿ�

	// ����ÿ���Ҷ˵� j�����ֲ�����˵� i
	for (int j = 1; j <= n; ++j) {
		long long target = prefix[j] - del;
		int left = 0, right = j;
		int best_i = -1;

		// ���ֲ�����С�� i ʹ prefix[i] >= target
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

		// �ҵ��Ϸ� i ʱ�������ֵ
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
int n, m; //���������n��ʾԪ�ظ�����m��ʾ��Ҫѡ���Ԫ������
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

int n, m; // nΪ�÷��е������������̶�Ϊ9����mδʹ��
int node[30], vis[30]; // node����洢��ǰ�÷���λ�õ����֣�vis��������Ƿ���ʹ��
int ans[30], anscnt = 0; // ans�洢�ҵ�����ȷ�⣬anscnt��¼�������

// ��鵱ǰnode�����Ƿ񹹳���Ч��3�׻÷�
bool chk() {
    // �����һ�еĺ���Ϊ��׼ֵtmp
    int tmp = node[1] + node[2] + node[3];
    // ���ÿһ�С�ÿһ�С������Խ��ߵĺ��Ƿ����tmp
    if (tmp != node[4] + node[5] + node[6]) // �ڶ���
        return false;
    if (tmp != node[7] + node[8] + node[9]) // ������
        return false;
    if (tmp != node[1] + node[4] + node[7]) // ��һ��
        return false;
    if (tmp != node[2] + node[5] + node[8]) // �ڶ���
        return false;
    if (tmp != node[3] + node[6] + node[9]) // ������
        return false;
    if (tmp != node[1] + node[5] + node[9]) // ���Խ���
        return false;
    if (tmp != node[3] + node[5] + node[7]) // ���Խ���
        return false;
    return true; // �����������㣬�ǻ÷�
}

// ��������������÷���cnt��ʾ������λ����
void dfs(int cnt) {
    if (cnt == n) { // ����λ��������
        if (chk()) { // ����Ƿ񹹳ɻ÷�
            // ��¼�Ⲣ���Ӽ���
            for (int i = 1; i <= 9; ++i) {
                ans[i] = node[i];
            }
            anscnt++;
        }
        return;
    }
    // ������һ��λ�ã�cnt+1��
    if (node[cnt + 1] != 0) { // ��ǰλ������Ԥ�����֣�����
        dfs(cnt + 1);
        return;
    }
    // ��������δʹ�õ�����
    for (int i = 1; i <= 9; ++i) {
        if (!vis[i]) {
            vis[i] = 1; // ���Ϊ��ʹ��
            node[cnt + 1] = i; // ��������i
            dfs(cnt + 1); // �ݹ������һ��λ��
            node[cnt + 1] = 0; // ���ݣ���յ�ǰ���������
            vis[i] = 0; // ȡ�����
        }
    }
}

int main() {
    n = 9; // �÷���9��λ��
    // ��ȡ��ʼ�÷�״̬���������ʹ�õ�����
    for (int i = 1; i <= n; ++i) {
        cin >> node[i];
        if (node[i] != 0) {
            vis[node[i]] = 1; // �������Ѵ��ڣ����Ϊ��ʹ��
        }
    }
    dfs(0); // �ӵ�0��λ�ÿ�ʼ����
    // ���ݽ������������
    if (anscnt == 1) { // Ψһ��
        // �����һ��
        for (int i = 1; i <= 3; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        // ����ڶ���
        for (int i = 4; i <= 6; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        // ���������
        for (int i = 7; i <= 9; ++i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    } else { // �޽����
        cout << "Too Many\n";
    }
    return 0;
}





































