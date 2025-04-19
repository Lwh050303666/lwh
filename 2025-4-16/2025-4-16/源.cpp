//#include<stdio.h>
////与：都为真才为真  或：有一个为真就为真    异或：不相同时为真，相同为假
////写一个函数返回参数二进制中 1 的个数。
////
////比如： 15    0000 1111    4 个 1
//int m = 15,cnt;
//int f(int x) {
//	while (x) {
//		if ((x & 1) == 1)
//			cnt++;
//		x = x >> 1;
//	}
//	return cnt;
//}
//int main() {
//	int ans=f(m);
//	printf("%d", ans);
//	return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//const int A = 101; // 避免越界
//int N, M, arr[A][A], cnt;
//int main() {
//    scanf("%d %d", &N, &M);
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            scanf("%d", &arr[i][j]); // 添加 &
//            if (arr[i][j] > 0)
//                cnt += arr[i][j];
//        }
//        printf("%d", cnt);
//    }
//
//    return 0;
//}



//#include<stdio.h>
//int n;
//int main() {
//	printf("%d", n);
//}
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int count = 0;
//    int arr[10] = { 0 };
//    scanf("%d", &n);
//    if (n < 6)
//        printf("%d\n", n);
//    else
//        while (n)
//        {
//            count++;
//            arr[i++] = n % 6;
//            n /= 6;
//        }
//    for (int j = count; j > 0; j--)
//    {
//        printf("%d", arr[j - 1]);
//    }
//    return 0;
//}

//描述
//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
//
//输入描述：
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。(1≤n≤10, 1≤m≤10)
//
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
//
//输出描述：
//输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
//#include <stdio.h>
//const int A = 51;
//int N, M, arr[A];
//int main() {
//    rewind(stdin);
//    scanf("%d", &N);
//    
//    for (int i = 1; i <= N; i++) 
//        scanf("%d", &arr[i]);
//    
//    scanf("%d", &M);
//    for (int i = 1; i <= N; i++)
//    {
//        if (arr[i] != M)
//            printf("%d\n", arr[i]);
//
//    }
//    return 0;
//}


















