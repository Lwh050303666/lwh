//#include<stdio.h>
////�룺��Ϊ���Ϊ��  ����һ��Ϊ���Ϊ��    ��򣺲���ͬʱΪ�棬��ͬΪ��
////дһ���������ز����������� 1 �ĸ�����
////
////���磺 15    0000 1111    4 �� 1
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
//const int A = 101; // ����Խ��
//int N, M, arr[A][A], cnt;
//int main() {
//    scanf("%d %d", &N, &M);
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            scanf("%d", &arr[i][j]); // ��� &
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

//����
//KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������
//
//����������
//��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ���(1��n��10, 1��m��10)
//
//��2��n + 1�У�ÿ������m����������Χ - 231~231 - 1�����ÿո�ָ���������n * m��������ʾ��һ�������е�Ԫ�ء�
//
//���������
//���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
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


















