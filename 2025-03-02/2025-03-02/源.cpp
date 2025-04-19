#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int N, cnt = 0;
    cin >> N;
    int a[N + 1];
    for (int i = 1; i <= N + 1; i++)
    {
        cin >> a[i];
    }
    while (a[1] == a[2] == a[3] == a(N + 1)) {
        for (int i = 2; i < N + 2; i++)
        {
            a[i] = (a[i - 1] / 2 + a[i]) / 2;
        }
        a[1] = a[1] / 2 + a[N + 1] / 2;
        for (int i = 1; i < N + 2; i++) {
            if (a[i] % 2 == 1)
                a[i]++;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}