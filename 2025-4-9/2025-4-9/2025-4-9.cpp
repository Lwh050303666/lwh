//////���鼯
////#include <iostream>  // ���������������
////
////using namespace std; // ʹ�ñ�׼�����ռ�
////
////const int N = 2e5 + 100; // ���峣��NΪ200000+100�����������С��ȷ���㹻����������������
////
////int f[N]; // ���鼯�ĸ��ڵ����飬f[i]��ʾ�ڵ�i�ĸ��ڵ�
////
////// ���鼯�Ĳ��Һ�������·��ѹ���Ż�
////int Get(int x) { // ����x���ڼ��ϵĸ��ڵ㣨����Ԫ�أ�
////    if (x == f[x]) return x; // ���x�ĸ��ڵ�������˵��x���Ǹ��ڵ㣬ֱ�ӷ���
////    else {
////        f[x] = Get(f[x]); // �ݹ����x�����Ƚڵ㣬���ڻ���ʱ��x�ĸ��ڵ�ֱ��ָ����ڵ㣨·��ѹ����
////        return f[x]; // �����ҵ��ĸ��ڵ�
////    }
////}
////
////int main() {
////    int n, m; // nΪԪ��������mΪ��������
////    cin >> n >> m; // ����n��m��ֵ
////
////    // ��ʼ�����鼯��ÿ��Ԫ�س�ʼʱ�Լ���һ�������ļ���
////    for (int i = 1; i <= n; ++i) {
////        f[i] = i; // ÿ���ڵ�ĸ��ڵ��ʼָ���Լ�
////    }
////
////    int opt, a, b; // opt��ʾ�������ͣ�a��b�ǲ����漰������Ԫ��
////    while (m--) { // ����m������
////        cin >> opt >> a >> b; // ��ȡ�������ͺ�Ԫ��
////
////        // �ҵ�a��b�ĸ��ڵ㣬·��ѹ������Get�������Զ����
////        a = Get(a);
////        b = Get(b);
////
////        if (opt == 1) { // ��������1���ϲ�a��b���ڵļ���
////            if (a != b) { // ���a��b����ͬһ������
////                f[a] = b; // ��a�ĸ��ڵ�ĸ��ڵ�ָ��b�ĸ��ڵ㣬�ϲ���������
////            }
////        }
////        else { // ��������2����ѯa��b�Ƿ�����ͬһ����
////            if (a == b) { // ������ڵ���ͬ
////                cout << "YES" << endl; // ���YES
////            }
////            else {
////                cout << "NO" << endl; // �������NO
////            }
////        }
////    }
////
////    return 0; // ������������
////}
////
////
////
////
////
////
////
////
////
////
////����ģ��
//#include<iostream>
//using namespace std;
//int iterative(int n) {
//	if (n <= 1)   return n;
//	int prev = 0, curr = 1;
//	for (int i = 2; i <= n; ++i) {
//		int next = prev + curr;
//		prev = curr;
//		curr = next;
//	}
//	return curr;
//}
//int main() {
//	cout << iterative(5);
//	return 0;
//}



////�ݹ�ģ��
//#include<iostream>
//using namespace std;
//int recursive(int n) {
//	if (n <= 1)  return n;
//	return recursive(n - 1) + recursive(n - 2);
//}
//int main() {
//	cout << recursive(5);
//	return 0;
//}



////��̬�滮ģ��
////1.�Ե����ϵ��ƣ���������ģ��
//#include<iostream>
//#include<vector>
//using namespace std;
//int do_bottom_up() {
//	int n = 10;
//	vector<int>dp(n + 1, 0);
//	dp[0] = 0;
//	dp[1] = 1;
//	for (int i = 2; i <= n; ++i) {
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	return dp[n];
//}
//int main() {
//	cout << "Bottom_up:" << do_bottom_up() << endl;
//	return 0; 
//}




////�Զ����¼��仯����ģ��
//#include<iostream>
//#include<vector>
//using namespace std;
//int fib_memoization(int n, vector<int>& memo) {
//	if (n <= 1)   return n;
//	if (memo[n] != -1) return memo[n];
//	memo[n] = fib_memoization(n - 1, memo) + fib_memoization(n - 2, memo);
//	return memo[n];
//}
//int do_top_down() {
//	int n = 10;
//	vector<int>memo(n + 1, -1);
//	return fib_memoization(n, memo);
//}
//int main() {
//	cout << "Top-Down:" << dp_top_down() << endl;
//	return 0;
//}






//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int a[103][103], dp[103][103];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			cin >> a[i][j];
//		}
//	}
//	dp[1][1] = a[1][1];
//	for (int i = 2; i <= n; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; ++i) {
//		ans = max(ans, dp[n][i]);
//	}
//	cout << ans << '\n';
//	return 0;
//}



//#include<stdio.h>
//int n,sum;
//int DigitSum(int x) {
//	int a = 0;
//	while (x >= 10){
//		a = x %10;
//		x=x / 10;
//	sum += a;
//}
//	sum += x;
//	return sum;
//
//
//}
//int main() {
//	scanf_s("%d", &n);
//	int ans=DigitSum(n);
//	printf("%d", ans);
//}



////strlen��ģ��(�ǵݹ�ʵ�֣�
//#include <stdio.h>
//
//size_t strlen_iterative(const char* str) {
//    size_t length = 0;           // ��ʼ�����ȼ�����Ϊ 0
//    while (str[length] != '\0') { // ѭ��ֱ���������ַ�
//        length++;                 // ÿ��ѭ�����Ӽ�����
//    }
//    return length;                 // �������ճ���
//}
//
//int main() {
//    char str[] = "Hello,World!";
//    size_t len = strlen_iterative(str);
//    printf("Length of the string: %zu\n", len); // ����ַ�������
//    return 0;
//}
//
//
//
////strlen��ģ�⣨�ݹ�ʵ�֣�
//#include <stdio.h>
//
//size_t strlen_recursive(const char* str) {
//    if (*str == '\0') {      // �ݹ���ֹ�������������ַ�
//        return 0;             // ���� 0
//    }
//    else {
//        return 1 + strlen_recursive(str + 1); // �ݹ���ã�ÿ�ε�ַ�� 1
//    }
//}
//
//int main() {
//    char str[] = "Hello, World!";
//    size_t len = strlen_recursive(str);
//    printf("Length of the string: %zu\n", len); // ����ַ�������
//    return 0;
//}

 
//�ݹ�ķ�ʽ��ӡһ������ÿһλ
//#include <stdio.h>
//
//void printDigits(int n) {
//    if (n < 0) {
//        printf("-");      // ������
//        n = -n;
//    }
//    if (n > 9) {
//        printDigits(n / 10); // �ݹ���ã���ӡ�����һλ֮�������λ
//    }
//    printf("%d ", n % 10);     // ��ӡ���һλ
//}
//
//int main() {
//    int num = 12345;
//    printf("Digits of %d are: ", num);
//    printDigits(num);
//    printf("\n");
//
//    num = -6789;
//    printf("Digits of %d are: ", num);
//    printDigits(num);
//    printf("\n");
//
//    return 0;
//}



////�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
////�ݹ�
//#include<stdio.h>
//int n;
//int fib(int x) {
//	if (x <= 2)  return (x-1);
//	else  return fib(x - 1) + fib(x - 2);
//}
//
//
//int main() {
//	scanf_s("%d", &n);
//	int ans=fib(n);
//	printf("%d", ans);
//		return 0;
//
//}
//
////�ǵݹ�
//#include <stdio.h>
//
//// ʹ�õ�����������쳲��������еĵ� n ��
//int fibonacci_iterative(int n) {
//    if (n <= 0) {
//        return 0; // ��� n С�ڵ��� 0������ 0
//    }
//    if (n == 1) {
//        return 1; // ��� n ���� 1������ 1
//    }
//
//    int a = 0; // �洢 F(n-2)
//    int b = 1; // �洢 F(n-1)
//    int temp;  // ��ʱ���������ڴ洢 F(n)
//
//    for (int i = 2; i <= n; i++) {
//        temp = a + b; // ���� F(n) = F(n-1) + F(n-2)
//        a = b;          // ���� F(n-2) = F(n-1)
//        b = temp;       // ���� F(n-1) = F(n)
//    }
//
//    return b; // ���� F(n)
//}
//
//int main() {
//    int n;
//    printf("������Ҫ�����쳲��������е����� (n): ");
//    scanf("%d", &n);
//
//    if (n < 0) {
//        printf("������һ���Ǹ�������\n");
//        return 1; // ���ش������
//    }
//
//    int result = fibonacci_iterative(n);
//    printf("쳲��������еĵ� %d ����: %d\n", n, result);
//
//    return 0;
//}



//#include <stdio.h>
//
//void reverse_string(char* str) {
//    // 1. �����ַ������ȵĵݹ麯��
//    int strlen_recursive(const char* s) {
//        if (*s == '\0') {
//            return 0;
//        }
//        else {
//            return 1 + strlen_recursive(s + 1);
//        }
//    }
//
//    // 2. �����ַ��ĺ���
//    void swap(char* a, char* b) {
//        char temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//
//    // 3. ��ת�ַ����ĵݹ麯��
//    void reverse_recursive(char* s, int start, int end) {
//        if (start >= end) {
//            return; // �ݹ���ֹ�������� start >= end ʱ��ֹͣ�ݹ�
//        }
//        swap(&s[start], &s[end]);              // ������β�ַ�
//        reverse_recursive(s, start + 1, end - 1); // �ݹ���ã�����ʣ�ಿ��
//    }
//
//    int length = strlen_recursive(str);   // �����ַ�������
//    reverse_recursive(str, 0, length - 1); // ���õݹ鷴ת����
//}
//
//int main() {
//    char str[] = "Hello, World!";
//    printf("Original string: %s\n", str);
//    reverse_string(str);
//    printf("Reversed string: %s\n", str);
//
//    char str2[] = "abcdefg";
//    printf("Original string: %s\n", str2);
//    reverse_string(str2);
//    printf("Reversed string: %s\n", str2);
//
//    return 0;
//}


////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
////�ݹ�
//#include<stdio.h>
//int n;
//int f(int x) {
//	if (x == 0)  return 1;
//	else return x * f(x - 1);
//}
//int main() {
//	scanf_s("%d", &n);
//	int ans=f(n);
//	printf("%d", ans);
//	return 0;
//}



////�ǵݹ�
//#include<stdio.h>
//int n,sum;
//int f(int x) {
//	int x, y, temp;
//	if (x<=1)  return 1;
//	for (int i = 1; i <= x; i++)
//		sum *= i;
//	return sum;
//		
//}
//int main() {
//	scanf_s("%d", &n);
//	int ans = f(n);
//	printf("%d", ans);
//	return 0;
//}



////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#include<stdio.h>
//#include<cstring>
//const int N=10;
//int main() {
//	scanf_s("%d", &N);
//	char A[N] = { "hello bit" }, B[N] = { "hello lwh" }, temp[N] = { 0 };
//	for (int i = 0; i <= N - 1; i++) {
//		temp[i] = B[i];
//		B[i] = A[i];
//		A[i] = temp[i];
//
//
//	}
//	
//
//
//
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include <stdio.h>
//
//// ��ʼ������Ϊȫ 0
//void init(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr[i] = 0; // �������ÿ��Ԫ�ظ�ֵΪ 0
//    }
//}
//
//// ��ӡ�����ÿ��Ԫ��
//void print(const int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]); // ��ӡ�����ÿ��Ԫ�أ�����Ԫ��֮����ӿո�
//    }
//    printf("\n"); // ��ӡ���з���ʹ���������
//}
//
//// ��������Ԫ��
//void reverse(int arr[], int size) {
//    int start = 0;       // ������ʼλ��
//    int end = size - 1;  // ����ĩβλ��
//
//    while (start < end) {
//        // ���� arr[start] �� arr[end]
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        start++; // ��ʼλ������ƶ�
//        end--;   // ĩβλ����ǰ�ƶ�
//    }
//}
//
//int main() {
//    int arr[10];          // ����һ������ 10 ��Ԫ�ص���������
//    int size = sizeof(arr) / sizeof(arr[0]); // ���������С
//
//    printf("��ʼ��ǰ������: ");
//    print(arr, size); // ��ӡ��ʼ��ǰ�����飬����Ϊ���ֵ
//
//    init(arr, size);  // ��ʼ������Ϊȫ 0
//    printf("��ʼ���������: ");
//    print(arr, size); // ��ӡ��ʼ���������
//
//    // �����鸳ֵ���Ա�۲�����Ч��
//    for (int i = 0; i < size; i++) {
//        arr[i] = i + 1;
//    }
//    printf("��ֵ�������: ");
//    print(arr, size); // ��ӡ��ֵ�������
//
//    reverse(arr, size); // ��������Ԫ��
//    printf("���ú������: ");
//    print(arr, size); // ��ӡ���ú������
//
//    return 0;
//}


////ʵ�ֶ�һ�����������ð������
//#include<stdio.h>
//int A[5] = { 1,0,3,2,4 }, tmp;
// void bubble_sort(int arr[]) {
//	 for (int j = 1; j <= 5; j++) {
//		 for (int i = 0; i <= 3; i++) {
//			 if (arr[i] > arr[i + 1])
//			 {
//				 tmp = A[i + 1];
//				 A[i + 1] = A[i];
//				 A[i] = tmp;
//				
//
//			 }
//
//
//
//
//		 }
//
//	 }
//
//
//}
//
//
//int main() {
//	bubble_sort(A);
//	for (int i = 0; i <= 4; i++)
//		printf("%d", A[i]);
//
//
//
//}



//#include <stdio.h>
//
//// ð��������
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; i++) {          // ���ѭ����������������
//        for (int j = 0; j < size - i - 1; j++) {   // �ڲ�ѭ����ÿ�ֱȽϺͽ���
//            if (arr[j] > arr[j + 1]) {             // ���ǰһ��Ԫ�ش��ں�һ��Ԫ��
//                // ���� arr[j] �� arr[j + 1]
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//// ��ӡ���麯��
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };  // �����������
//    int size = sizeof(arr) / sizeof(arr[0]);   // ���������С
//
//    printf("����ǰ������: ");
//    printArray(arr, size);                     // ��ӡ����ǰ������
//
//    bubbleSort(arr, size);                      // ����ð��������
//
//    printf("����������: ");
//    printArray(arr, size);                     // ��ӡ����������
//
//    return 0;
//}







////��������Ϸ
////�ó���ʵ����һ���򵥵���������������Ϸ��֧����������������壬���ж�ʤ����ƽ�֡�
//#include <stdio.h>
//#include <stdlib.h>
//
//// �������̴�С
//#define BOARD_SIZE 3
//
//// ��������
//char board[BOARD_SIZE][BOARD_SIZE];
//
//// ��ʼ������
//void initBoard() {
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = ' '; // ��ʼ��Ϊ�ո�
//        }
//    }
//}
//
//// ��ӡ����
//void printBoard() {
//    printf("  1 2 3\n");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1);
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%c", board[i][j]);
//            if (j < BOARD_SIZE - 1) {
//                printf("|"); // �зָ���
//            }
//        }
//        printf("\n");
//        if (i < BOARD_SIZE - 1) {
//            printf("  -----\n"); // �зָ���
//        }
//    }
//}
//
//// �������
//void playerMove(char player) {
//    int row, col;
//    while (1) {
//        printf("��� %c, ��������������λ�� (�� ��, ����: 1 2): ", player);
//        if (scanf("%d %d", &row, &col) != 2) {
//            printf("����������������롣\n");
//            // ������뻺����
//            while (getchar() != '\n');
//            continue;
//        }
//        row--; // ת��Ϊ��������
//        col--; // ת��Ϊ��������
//
//        if (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ') {
//            board[row][col] = player;
//            break; // ���ӳɹ�������ѭ��
//        }
//        else {
//            printf("λ����Ч�����������롣\n");
//        }
//    }
//}
//
//// ����Ƿ�����һ�ʤ
//int checkWin(char player) {
//    // �����
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
//            return 1; // ����һ�ʤ
//        }
//    }
//
//    // �����
//    for (int j = 0; j < BOARD_SIZE; j++) {
//        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
//            return 1; // ����һ�ʤ
//        }
//    }
//
//    // ���Խ���
//    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
//        return 1; // ����һ�ʤ
//    }
//    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
//        return 1; // ����һ�ʤ
//    }
//
//    return 0; // û����һ�ʤ
//}
//
//// ����Ƿ�ƽ��
//int checkDraw() {
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (board[i][j] == ' ') {
//                return 0; // ���п�λ����Ϸδ����
//            }
//        }
//    }
//    return 1; // û�п�λ��ƽ��
//}
//
//int main() {
//    char currentPlayer = 'X'; // ��� X ����
//    int gameContinue = 1;      // ��Ϸ�Ƿ�����ı�־
//
//    initBoard(); // ��ʼ������
//
//    printf("��ӭ������������Ϸ��\n");
//    printBoard(); // ��ӡ��ʼ����
//
//    while (gameContinue) {
//        playerMove(currentPlayer); // �������
//        printBoard();           // ��ӡ����
//
//        if (checkWin(currentPlayer)) {
//            printf("��� %c ��ʤ��\n", currentPlayer);
//            gameContinue = 0; // ������Ϸ
//        }
//        else if (checkDraw()) {
//            printf("ƽ�֣�\n");
//            gameContinue = 0; // ������Ϸ
//        }
//        else {
//            // �л����
//            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
//        }
//    }
//    printf("��Ϸ������\n");
//    return 0;
//}








//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// ������Ϸ����
//#define BOARD_SIZE 10       // ���̴�С
//#define NUM_MINES 15        // �׵�����
//#define COVERED_CELL '��'   // δ�����ĸ�����ʾ
//#define MINE '*'           // �׵���ʾ
//#define EMPTY ' '            // �հ׸���ʾ
//
//// ��������
//char board[BOARD_SIZE][BOARD_SIZE];       // ʵ������
//char displayBoard[BOARD_SIZE][BOARD_SIZE]; // ��ʾ����ҵ�����
//
//// ��ʼ����Ϸ
//void initBoard() {
//    // ��ʼ�����������
//    srand(time(NULL));
//
//    // ��ʼ������Ϊ��
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = EMPTY;
//            displayBoard[i][j] = COVERED_CELL; // ��ʼʱ���и��Ӷ�δ����
//        }
//    }
//
//    // ������
//    int minesPlaced = 0;
//    while (minesPlaced < NUM_MINES) {
//        int row = rand() % BOARD_SIZE;
//        int col = rand() % BOARD_SIZE;
//        if (board[row][col] == EMPTY) {
//            board[row][col] = MINE;
//            minesPlaced++;
//        }
//    }
//
//    // ����ÿ��������Χ������
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (board[i][j] != MINE) {
//                int count = 0;
//                for (int x = -1; x <= 1; x++) {
//                    for (int y = -1; y <= 1; y++) {
//                        int newRow = i + x;
//                        int newCol = j + y;
//                        if (newRow >= 0 && newRow < BOARD_SIZE && newCol >= 0 && newCol < BOARD_SIZE && board[newRow][newCol] == MINE) {
//                            count++;
//                        }
//                    }
//                }
//                if (count > 0) {
//                    board[i][j] = count + '0'; // ������ת��Ϊ�ַ�
//                }
//            }
//        }
//    }
//}
//
//// ��ӡ��Ϸ����
//void printBoard() {
//    printf("  ");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // ��ӡ�к�
//    }
//    printf("\n");
//
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // ��ӡ�к�
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%c ", displayBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// ��������
//int revealCell(int row, int col) {
//    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || displayBoard[row][col] != COVERED_CELL) {
//        return 0; // ��Ч����
//    }
//
//    if (board[row][col] == MINE) {
//        displayBoard[row][col] = MINE; // �ȵ��ף���ʾ��
//        return 1;                      // �ȵ��ף����� 1
//    }
//
//    displayBoard[row][col] = board[row][col]; // ��ʾ�ø��ӵ�����
//
//    // ����������ǿհ׸����Զ�������Χ�ĸ���
//    if (board[row][col] == EMPTY) {
//        for (int x = -1; x <= 1; x++) {
//            for (int y = -1; y <= 1; y++) {
//                revealCell(row + x, col + y);
//            }
//        }
//    }
//    return 0;
//}
//
//// ����Ƿ�ʤ��
//int checkWin() {
//    int uncoveredCells = 0;
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (displayBoard[i][j] != COVERED_CELL) {
//                uncoveredCells++;
//            }
//        }
//    }
//    return uncoveredCells == BOARD_SIZE * BOARD_SIZE - NUM_MINES;
//}
//
//int main() {
//    int row, col;
//    int gameOver = 0;
//
//    initBoard(); // ��ʼ������
//
//    printf("��ӭ����ɨ����Ϸ��\n");
//
//    while (!gameOver) {
//        printBoard(); // ��ӡ��ǰ����
//
//        printf("������Ҫ�����ĸ��� (�� ��, ����: 1 2): ");
//        if (scanf("%d %d", &row, &col) != 2) {
//            printf("����������������롣\n");
//            // ������뻺����
//            while (getchar() != '\n');
//            continue;
//        }
//        row--;
//        col--;
//
//        gameOver = revealCell(row, col); // ��������
//        if (gameOver) {
//            printf("�ȵ����ˣ���Ϸ������\n");
//            printBoard();
//            break;
//        }
//
//        if (checkWin()) {
//            printf("��ϲ�㣬ɨ�׳ɹ���\n");
//            printBoard();
//            gameOver = 1;
//            break;
//        }
//    }
//
//    printf("��Ϸ������\n");
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// ������Ϸ����
//#define BOARD_SIZE 10       // ���̴�С
//#define NUM_MINES 15        // �׵�����
//#define COVERED_CELL '��'   // δ�����ĸ�����ʾ
//#define MINE '*'           // �׵���ʾ
//#define EMPTY ' '            // �հ׸���ʾ
//
//// ��������
//char board[BOARD_SIZE][BOARD_SIZE];       // ʵ������
//char displayBoard[BOARD_SIZE][BOARD_SIZE]; // ��ʾ����ҵ�����
//
//// ��ʼ����Ϸ
//void initBoard() {
//    // ��ʼ�����������
//    srand(time(NULL));
//
//    // ��ʼ������Ϊ��
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = EMPTY;
//            displayBoard[i][j] = COVERED_CELL; // ��ʼʱ���и��Ӷ�δ����
//        }
//    }
//
//    // ������
//    int minesPlaced = 0;
//    while (minesPlaced < NUM_MINES) {
//        int row = rand() % BOARD_SIZE;
//        int col = rand() % BOARD_SIZE;
//        if (board[row][col] == EMPTY) {
//            board[row][col] = MINE;
//            minesPlaced++;
//        }
//    }
//
//    // ����ÿ��������Χ������
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (board[i][j] != MINE) {
//                int count = 0;
//                for (int x = -1; x <= 1; x++) {
//                    for (int y = -1; y <= 1; y++) {
//                        int newRow = i + x;
//                        int newCol = j + y;
//                        if (newRow >= 0 && newRow < BOARD_SIZE && newCol >= 0 && newCol < BOARD_SIZE && board[newRow][newCol] == MINE) {
//                            count++;
//                        }
//                    }
//                }
//                if (count > 0) {
//                    board[i][j] = count + '0'; // ������ת��Ϊ�ַ�
//                }
//            }
//        }
//    }
//}
//
//// ��ӡ��Ϸ����
//void printBoard() {
//    printf("  ");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // ��ӡ�к�
//    }
//    printf("\n");
//
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // ��ӡ�к�
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%c ", displayBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// ��������
//int revealCell(int row, int col) {
//    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || displayBoard[row][col] != COVERED_CELL) {
//        return 0; // ��Ч����
//    }
//
//    if (board[row][col] == MINE) {
//        displayBoard[row][col] = MINE; // �ȵ��ף���ʾ��
//        return 1;                      // �ȵ��ף����� 1
//    }
//
//    displayBoard[row][col] = board[row][col]; // ��ʾ�ø��ӵ�����
//
//    // ����������ǿհ׸����Զ�������Χ�ĸ���
//    if (board[row][col] == EMPTY) {
//        for (int x = -1; x <= 1; x++) {
//            for (int y = -1; y <= 1; y++) {
//                revealCell(row + x, col + y);
//            }
//        }
//    }
//    return 0;
//}
//
//// ����Ƿ�ʤ��
//int checkWin() {
//    int uncoveredCells = 0;
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (displayBoard[i][j] != COVERED_CELL) {
//                uncoveredCells++;
//            }
//        }
//    }
//    return uncoveredCells == BOARD_SIZE * BOARD_SIZE - NUM_MINES;
//}
//
//int main() {
//    int row, col;
//    int gameOver = 0;
//
//    initBoard(); // ��ʼ������
//
//    printf("��ӭ����ɨ����Ϸ��\n");
//
//    while (!gameOver) {
//        printBoard(); // ��ӡ��ǰ����
//
//        printf("������Ҫ�����ĸ��� (�� ��, ����: 1 2): ");
//        if (scanf("%d %d", &row, &col) != 2) {
//            printf("����������������롣\n");
//            // ������뻺����
//            while (getchar() != '\n');
//            continue;
//        }
//        row--;
//        col--;
//
//        gameOver = revealCell(row, col); // ��������
//        if (gameOver) {
//            printf("�ȵ����ˣ���Ϸ������\n");
//            printBoard();
//            break;
//        }
//
//        if (checkWin()) {
//            printf("��ϲ�㣬ɨ�׳ɹ���\n");
//            printBoard();
//            gameOver = 1;
//            break;
//        }
//    }
//
//    printf("��Ϸ������\n");
//    return 0;
//}





////ɨ����Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// ������Ϸ����
//#define BOARD_SIZE 10       // ���̴�С
//#define NUM_MINES 15        // �׵�����
//#define COVERED_CELL '��'   // δ�����ĸ�����ʾ
//#define MARKED_CELL 'P'    // ���Ϊ�׵ĸ�����ʾ
//#define MINE '*'           // �׵���ʾ
//#define EMPTY ' '            // �հ׸���ʾ
//
//// ��������
//char board[BOARD_SIZE][BOARD_SIZE];       // ʵ������
//char displayBoard[BOARD_SIZE][BOARD_SIZE]; // ��ʾ����ҵ�����
//
//// ��������
//void initBoard();
//void printBoard();
//int revealCell(int row, int col);
//int checkWin();
//int isValidCell(int row, int col);
//void markCell(int row, int col);
//
//// ��ʼ����Ϸ
//void initBoard() {
//    // ��ʼ�����������
//    srand(time(NULL));
//
//    // ��ʼ������Ϊ��
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = EMPTY;
//            displayBoard[i][j] = COVERED_CELL; // ��ʼʱ���и��Ӷ�δ����
//        }
//    }
//
//    // ������
//    int minesPlaced = 0;
//    while (minesPlaced < NUM_MINES) {
//        int row = rand() % BOARD_SIZE;
//        int col = rand() % BOARD_SIZE;
//        if (board[row][col] == EMPTY) {
//            board[row][col] = MINE;
//            minesPlaced++;
//        }
//    }
//
//    // ����ÿ��������Χ������
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (board[i][j] != MINE) {
//                int count = 0;
//                for (int x = -1; x <= 1; x++) {
//                    for (int y = -1; y <= 1; y++) {
//                        if (isValidCell(i + x, j + y) && board[i + x][j + y] == MINE) {
//                            count++;
//                        }
//                    }
//                }
//                if (count > 0) {
//                    board[i][j] = count + '0'; // ������ת��Ϊ�ַ�
//                }
//            }
//        }
//    }
//}
//
//// ��ӡ��Ϸ����
//void printBoard() {
//    printf("  ");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%2d ", i + 1); // ��ӡ�к�
//    }
//    printf("\n");
//
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%2d ", i + 1); // ��ӡ�к�
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%2c ", displayBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// ��������
//int revealCell(int row, int col) {
//    if (!isValidCell(row, col) || displayBoard[row][col] != COVERED_CELL) {
//        return 0; // ��Ч����
//    }
//
//    if (board[row][col] == MINE) {
//        displayBoard[row][col] = MINE; // �ȵ��ף���ʾ��
//        return 1;                      // �ȵ��ף����� 1
//    }
//
//    displayBoard[row][col] = board[row][col]; // ��ʾ�ø��ӵ�����
//
//    // ����������ǿհ׸����Զ�������Χ�ĸ���
//    if (board[row][col] == EMPTY) {
//        for (int x = -1; x <= 1; x++) {
//            for (int y = -1; y <= 1; y++) {
//                if (x == 0 && y == 0) continue; // ������ǰ����
//                revealCell(row + x, col + y);
//            }
//        }
//    }
//    return 0;
//}
//
//// ��Ǹ���Ϊ��
//void markCell(int row, int col) {
//    if (!isValidCell(row, col) || displayBoard[row][col] != COVERED_CELL) {
//        return; // ��Ч����
//    }
//    displayBoard[row][col] = MARKED_CELL; // ���Ϊ��
//}
//
//// ����Ƿ�ʤ��
//int checkWin() {
//    int uncoveredCells = 0;
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (displayBoard[i][j] != COVERED_CELL && displayBoard[i][j] != MARKED_CELL) {
//                uncoveredCells++;
//            }
//        }
//    }
//    return uncoveredCells == BOARD_SIZE * BOARD_SIZE - NUM_MINES;
//}
//
//// ��������Ƿ���Ч
//int isValidCell(int row, int col) {
//    return row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE;
//}
//
//int main() {
//    int row, col;
//    int gameOver = 0;
//    char action;
//
//    initBoard(); // ��ʼ������
//
//    printf("��ӭ����ɨ����Ϸ��\n");
//
//    while (!gameOver) {
//        printBoard(); // ��ӡ��ǰ����
//
//        printf("��������� (f: ����, m: ���, q: �˳�), �Լ����� (�� ��, ����: f 1 2): ");
//        if (scanf(" %c %d %d", &action, &row, &col) != 3) {
//            printf("����������������롣\n");
//            // ������뻺����
//            while (getchar() != '\n');
//            continue;
//        }
//        row--;
//        col--;
//
//        switch (action) {
//        case 'f': // ��������
//            gameOver = revealCell(row, col); // ��������
//            if (gameOver) {
//                printf("�ȵ����ˣ���Ϸ������\n");
//                printBoard();
//                break;
//            }
//            break;
//        case 'm': // ��Ǹ���
//            markCell(row, col);
//            break;
//        case 'q': // �˳���Ϸ
//            gameOver = 1;
//            printf("�˳���Ϸ��\n");
//            break;
//        default:
//            printf("��Ч���������������롣\n");
//        }
//
//        if (checkWin()) {
//            printf("��ϲ�㣬ɨ�׳ɹ���\n");
//            printBoard();
//            gameOver = 1;
//            break;
//        }
//    }
//
//    printf("��Ϸ������\n");
//    return 0;
//}


//����������ʱ������������������������
//�����Ӧ�ÿ�����λ�������������
//1.��������
//void swap(int* a, int* b) {
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}


////λ�����
//void swap(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}


////����·�����
//#include<stdio.h>
//int y, m, d[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//int cnt(int x, int y) {
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0 && y == 2)
//		printf("%d", 29);
//	else printf("%d", d[y]);
//	return 0;
//}
//void main() {
//	scanf_s("%d %d", &y, &m);
//	cnt(y, m);
//
//	
//
//}


//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//#include<stdio.h>
//int n;
////����ʵ�����ǵݹ�
//int rec(int x) {
//	if (x <= 2) return x;
//else return rec(x - 1) + rec(x - 2);
//}
//int main() {
//	scanf_s("%d", &n);
//int ans=rec(n);
//printf("%d", ans);
//return 0;
//
//}




 
//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
//#include <stdio.h>
//
//int countSetBits(int n) {
//    unsigned int count = 0;
//    while (n) {
//        count += n & 1;
//        n >>= 1;
//    }
//    return count;
//}
//
//int main() {
//    int num1, num2;
//
//    printf("��������������: ");
//    scanf("%d %d", &num1, &num2);
//
//    int xorResult = num1 ^ num2;
//    int differentBits = countSetBits(xorResult);
//
//    printf("�������������Ƹ�ʽ�� %d λ��ͬ��\n", differentBits);
//
//    return 0;
//}



//��ӡ���������Ƶ�����λ��ż��λ  ��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#include <stdio.h>
//
//void Find_even(int a) {
//    printf("�������е�ż��λ����Ϊ��\n");
//    int i = 32;
//    while (i > 0) {
//        i = i - 2;
//        int b = 0;
//        b = a >> i;
//        if ((b & 2) == 2) {
//            printf("1");
//        }
//        else {
//            printf("0");
//        }
//    }
//    printf("\n");
//}
//
//void Find_odd(int a) {
//    printf("�������е�����λ����Ϊ��\n");
//    int i = 32;
//    while (i > 0) {
//        i = i - 2;
//        int b = 0;
//        b = a >> i;
//        if ((b & 1) == 1) {
//            printf("1");
//        }
//        else {
//            printf("0");
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    int a;
//    printf("������һ��������\n");
//    scanf("%d", &a);
//    Find_even(a);
//    Find_odd(a);
//    return 0;
//}




//////��������Ǹ����Ļ�
//#include <stdio.h>
//#include <stdint.h> // Ϊ��ʹ��int32_t��ȷ����ƽ̨һ����
//
//void printEvenOddBits(int32_t num) {
//    printf("Original Number: %d\n", num);
//    printf("Binary representation: ");
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//
//    printf("Even bits: ");
//    for (int i = 30; i >= 0; i -= 2) {
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//
//    printf("Odd bits: ");
//    for (int i = 31; i >= 1; i -= 2) {
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//}
//
//int main() {
//    int32_t num = -10; // ʾ��������
//    printEvenOddBits(num);
//    return 0;
//}



//#include<climits>
//#include<iostream>
//using namespace std;
//int main() {
//cout << "int ���͵�λ��" << sizeof(int) * CHAR_BIT << endl;
//	return 0;
//}




////ͳ�ƶ�������1�ĸ���
//#include <stdio.h>
//
//// ����1: ѭ������
//int countSetBits_Loop(int n) {
//    int count = 0;
//    while (n) {
//        count += n & 1;  // ������λ�Ƿ�Ϊ1
//        n >>= 1;          // ����һλ
//    }
//    return count;
//}
//
//// ����2: Brian Kernighan�㷨
//int countSetBits_BrianKernighan(int n) {
//    int count = 0;
//    while (n) {
//        n &= (n - 1);  // ������λ��1
//        count++;
//    }
//    return count;
//}
//
//// ����3: ʹ�����ú��� (���������֧��)
//int countSetBits_Builtin(int n) {
//    return __builtin_popcount(n);
//}
//
//int main() {
//    int num = 7;
//
//    printf("Number of set bits (Loop): %d\n", countSetBits_Loop(num));
//    printf("Number of set bits (Brian Kernighan): %d\n", countSetBits_BrianKernighan(num));
//#ifdef __GNUC__ // ȷ��������֧�� __builtin_popcount
//    printf("Number of set bits (Builtin): %d\n", countSetBits_Builtin(num));
//#endif
//
//    return 0;
//}





////��д������һ���������������в��Ҿ����ĳ����
////Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include <stdio.h>
//#include <stdbool.h>
//
//int binarySearch(int arr[], int size, int target) {
//    int left = 0;
//    int right = size - 1;
//
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        if (arr[mid] == target) {
//            return mid;
//        }
//        else if (arr[mid] < target) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    return -1;
//}
//
//int main() {
//    int sortedArray[] = { 2, 5, 7, 10, 13, 17, 21, 25, 28, 32, 36, 40 };
//    int arraySize = sizeof(sortedArray) / sizeof(sortedArray[0]);
//    int targetNumber;
//
//    printf("������Ҫ���ҵ�����: ");
//    scanf("%d", &targetNumber);
//
//    int index = binarySearch(sortedArray, arraySize, targetNumber);
//
//    if (index != -1) {
//        printf("�ҵ��ˣ� ���� %d ���±��� %d\n", targetNumber, index);
//    }
//    else {
//        printf("�Ҳ���\n");
//    }
//
//    return 0;
//}





//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N, A, B, K;
//        cin >> N >> A >> B >> K;
//        vector<int> insects(N + 1);
//        for (int i = 1; i <= N; ++i) {
//            cin >> insects[i];
//        }
//
//        // DP[i][k] ��ʾ����λ��iʹ����k����Ծ�������������
//        vector<vector<int>> dp(N + 1, vector<int>(K + 1, -1));
//        dp[0][0] = insects[0];  // ��ʼλ��0����Ծ����0
//
//        for (int pos = 0; pos < N; ++pos) {
//            for (int jumps = 0; jumps <= K; ++jumps) {
//                if (dp[pos][jumps] == -1) continue;
//
//                // �������п��ܵ���Ծ����
//                for (int d = A; d <= B && pos + d <= N; ++d) {
//                    if (jumps + 1 <= K) {
//                        dp[pos + d][jumps + 1] = max(dp[pos + d][jumps + 1],
//                            dp[pos][jumps] + insects[pos + d]);
//                    }
//                }
//            }
//        }
//
//        int max_insects = 0;
//        for (int pos = 0; pos <= N; ++pos) {
//            for (int jumps = 0; jumps <= K; ++jumps) {
//                max_insects = max(max_insects, dp[pos][jumps]);
//            }
//        }
//
//        cout << max_insects << endl;
//    }
//
//    return 0;
//}

















































