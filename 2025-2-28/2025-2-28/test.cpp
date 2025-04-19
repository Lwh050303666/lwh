//#include <iostream>
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//	int A, B, P, Q;
//	cin >>A >> B >>P >>Q;
//	int AP = abs(A - P);
//	int BQ = abs(B - Q);
//	if ( AP==1 || BQ == 1)
//		cout <<1 << endl;
//	else if (A == B && P == Q)
//		cout << 0 << endl;
//	else cout <<2 << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int cntday = 0;
//    int N, D;
//    cin >> N >> D;
//    int a[10000];
//    for (int i = 0; i <= N; i++)
//    {
//        cin >> a[i];
//    }
//    int dangerpeople = 0; int otherpeople = 0;
//    int day1 = 0; int day2 = 0;
//    for (int i = 0; i <= 10000; i++)
//    {
//        if (a[i] >= 80 || a[i] <= 9)
//            dangerpeople++;
//        else otherpeople++;
//    }
//    if (dangerpeople % D == 0)
//        day1 = dangerpeople / D;
//    else day1 = dangerpeople / D + 1;
//    if (otherpeople % D == 0)
//        day2 = otherpeople / D;
//    else day2 = otherpeople / D + 1;
//    int cntday = day1 + day2;
//    cout << cntday << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int cntday = 0;
//    int N, D;
//    cin >> N >> D;
//    int a[10000];
//    for (int i = 0; i <= N; i++)
//    {
//        cin >> a[i];
//    }
//    int dangerpeople = 0; int otherpeople = 0;
//    int day1 = 0; int day2 = 0;
//    for (int i = 0; i <= 10000; i++)
//    {
//        if (a[i] >= 80 || a[i] <= 9)
//            dangerpeople++;
//        else otherpeople++;
//    }
//    if (dangerpeople % D == 0)
//        day1 = dangerpeople / D;
//    else day1 = dangerpeople / D + 1;
//    if (otherpeople % D == 0)
//        day2 = otherpeople / D;
//    else day2 = otherpeople / D + 1;
//    int cntday = day1 + day2;
//    cout << cntday << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int A1, A2, A3, B1, B2, B3, C, D;
//	cin >> D >> C >> endl;
//	cin >> A1 >> A2 >> A3 >> endl;
//	cin >> B1 >> B2 >> B3 >> endl;
//	int suma = A1 + A2 + A3;
//	int sumb = B1 + B2 + B3;
//	if (D > C) 
//		cout << "YES";
//	else if (suma + sumb + C - 2D > suma + sumb + 2D)
//		cout << "YES";
//	else cout << "NO";
//	
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int A1, A2, A3, B1, B2, B3, C, D;
//	cin >> D >> C;
//	cin >> A1 >> A2 >> A3;
//	cin >> B1 >> B2 >> B3;
//	int suma = A1 + A2 + A3;
//	int sumb = B1 + B2 + B3;
//	if (D > C)
//		cout << "YES";
//	else if (suma + sumb + C -2*D > suma + sumb+ 2*D)
//		cout << "YES";
//	else cout << "NO";
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int T; cin >> T;
//	int a[5], s[11], temp;
//	while (T--) {
//		int ans = 0; temp = 0; memset(s, 0, sizeof s);
//		for (int i = 1; i <= 4; ++i) {
//			cin >> a[i]; s[a[i]]++;
//			temp = max(temp, s[a[i]]);
//		}
//		if (temp == 1 || temp == 2) ans = 2;
//		else if (temp == 3) ans = 1;
//		else ans = 0;
//		cout << ans << '\n';
//	}
//	return 0;
//}
//#include <bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int T; cin >> T;
//	int a[5], s[11], temp;
//	while (T--) {
//		int ans = 0; temp = 0; memset(s, 0, sizeof£¨s£©);
//		for (int i = 1; i <= 4; ++i) {
//			cin >> a[i]; s[a[i]]++;
//			temp = max(temp, s[a[i]]);
//		}
//		if (temp == 1 || temp == 2) ans = 2;
//		else if (temp == 3) ans = 1;
//		else ans = 0;
//		cout << ans << '\n';
//	}
//	return 0;
//}
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int T; cin >> T;
	int a[5], s[11], temp;
	while (T--) {
		int ans = 0;int temp = 0; memset(s, 0, sizeof s);
		for (int i = 1; i <= 4; ++i) {
			cin >> a[i]; s[a[i]]++;
			temp = max(temp, s[a[i]]);
		}
		if (temp == 1 || temp == 2) ans = 2;
		else if (temp == 3) ans = 1;
		else ans = 0;
		cout << ans << '\n';
	}
	return 0;
}