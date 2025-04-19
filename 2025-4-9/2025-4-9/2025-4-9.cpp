//////并查集
////#include <iostream>  // 包含输入输出流库
////
////using namespace std; // 使用标准命名空间
////
////const int N = 2e5 + 100; // 定义常量N为200000+100，用于数组大小，确保足够大以容纳输入数据
////
////int f[N]; // 并查集的父节点数组，f[i]表示节点i的父节点
////
////// 并查集的查找函数，带路径压缩优化
////int Get(int x) { // 查找x所在集合的根节点（代表元素）
////    if (x == f[x]) return x; // 如果x的父节点是自身，说明x就是根节点，直接返回
////    else {
////        f[x] = Get(f[x]); // 递归查找x的祖先节点，并在回溯时将x的父节点直接指向根节点（路径压缩）
////        return f[x]; // 返回找到的根节点
////    }
////}
////
////int main() {
////    int n, m; // n为元素数量，m为操作次数
////    cin >> n >> m; // 输入n和m的值
////
////    // 初始化并查集，每个元素初始时自己是一个独立的集合
////    for (int i = 1; i <= n; ++i) {
////        f[i] = i; // 每个节点的父节点初始指向自己
////    }
////
////    int opt, a, b; // opt表示操作类型，a和b是操作涉及的两个元素
////    while (m--) { // 处理m个操作
////        cin >> opt >> a >> b; // 读取操作类型和元素
////
////        // 找到a和b的根节点，路径压缩会在Get函数中自动完成
////        a = Get(a);
////        b = Get(b);
////
////        if (opt == 1) { // 操作类型1：合并a和b所在的集合
////            if (a != b) { // 如果a和b不在同一集合中
////                f[a] = b; // 将a的根节点的父节点指向b的根节点，合并两个集合
////            }
////        }
////        else { // 操作类型2：查询a和b是否属于同一集合
////            if (a == b) { // 如果根节点相同
////                cout << "YES" << endl; // 输出YES
////            }
////            else {
////                cout << "NO" << endl; // 否则输出NO
////            }
////        }
////    }
////
////    return 0; // 程序正常结束
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
////递推模版
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



////递归模版
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



////动态规划模版
////1.自底向上递推（迭代法）模板
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




////自顶向下记忆化搜索模版
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



////strlen的模拟(非递归实现）
//#include <stdio.h>
//
//size_t strlen_iterative(const char* str) {
//    size_t length = 0;           // 初始化长度计数器为 0
//    while (str[length] != '\0') { // 循环直到遇到空字符
//        length++;                 // 每次循环增加计数器
//    }
//    return length;                 // 返回最终长度
//}
//
//int main() {
//    char str[] = "Hello,World!";
//    size_t len = strlen_iterative(str);
//    printf("Length of the string: %zu\n", len); // 输出字符串长度
//    return 0;
//}
//
//
//
////strlen的模拟（递归实现）
//#include <stdio.h>
//
//size_t strlen_recursive(const char* str) {
//    if (*str == '\0') {      // 递归终止条件：遇到空字符
//        return 0;             // 返回 0
//    }
//    else {
//        return 1 + strlen_recursive(str + 1); // 递归调用，每次地址加 1
//    }
//}
//
//int main() {
//    char str[] = "Hello, World!";
//    size_t len = strlen_recursive(str);
//    printf("Length of the string: %zu\n", len); // 输出字符串长度
//    return 0;
//}

 
//递归的方式打印一个数的每一位
//#include <stdio.h>
//
//void printDigits(int n) {
//    if (n < 0) {
//        printf("-");      // 处理负数
//        n = -n;
//    }
//    if (n > 9) {
//        printDigits(n / 10); // 递归调用，打印除最后一位之外的所有位
//    }
//    printf("%d ", n % 10);     // 打印最后一位
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



////递归和非递归分别实现求第n个斐波那契数
////递归
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
////非递归
//#include <stdio.h>
//
//// 使用迭代方法计算斐波那契数列的第 n 项
//int fibonacci_iterative(int n) {
//    if (n <= 0) {
//        return 0; // 如果 n 小于等于 0，返回 0
//    }
//    if (n == 1) {
//        return 1; // 如果 n 等于 1，返回 1
//    }
//
//    int a = 0; // 存储 F(n-2)
//    int b = 1; // 存储 F(n-1)
//    int temp;  // 临时变量，用于存储 F(n)
//
//    for (int i = 2; i <= n; i++) {
//        temp = a + b; // 计算 F(n) = F(n-1) + F(n-2)
//        a = b;          // 更新 F(n-2) = F(n-1)
//        b = temp;       // 更新 F(n-1) = F(n)
//    }
//
//    return b; // 返回 F(n)
//}
//
//int main() {
//    int n;
//    printf("请输入要计算的斐波那契数列的项数 (n): ");
//    scanf("%d", &n);
//
//    if (n < 0) {
//        printf("请输入一个非负整数。\n");
//        return 1; // 返回错误代码
//    }
//
//    int result = fibonacci_iterative(n);
//    printf("斐波那契数列的第 %d 项是: %d\n", n, result);
//
//    return 0;
//}



//#include <stdio.h>
//
//void reverse_string(char* str) {
//    // 1. 计算字符串长度的递归函数
//    int strlen_recursive(const char* s) {
//        if (*s == '\0') {
//            return 0;
//        }
//        else {
//            return 1 + strlen_recursive(s + 1);
//        }
//    }
//
//    // 2. 交换字符的函数
//    void swap(char* a, char* b) {
//        char temp = *a;
//        *a = *b;
//        *b = temp;
//    }
//
//    // 3. 反转字符串的递归函数
//    void reverse_recursive(char* s, int start, int end) {
//        if (start >= end) {
//            return; // 递归终止条件：当 start >= end 时，停止递归
//        }
//        swap(&s[start], &s[end]);              // 交换首尾字符
//        reverse_recursive(s, start + 1, end - 1); // 递归调用，处理剩余部分
//    }
//
//    int length = strlen_recursive(str);   // 计算字符串长度
//    reverse_recursive(str, 0, length - 1); // 调用递归反转函数
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


////递归和非递归分别实现求n的阶乘
////递归
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



////非递归
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



////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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



//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#include <stdio.h>
//
//// 初始化数组为全 0
//void init(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr[i] = 0; // 将数组的每个元素赋值为 0
//    }
//}
//
//// 打印数组的每个元素
//void print(const int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]); // 打印数组的每个元素，并在元素之间添加空格
//    }
//    printf("\n"); // 打印换行符，使输出更清晰
//}
//
//// 逆置数组元素
//void reverse(int arr[], int size) {
//    int start = 0;       // 数组起始位置
//    int end = size - 1;  // 数组末尾位置
//
//    while (start < end) {
//        // 交换 arr[start] 和 arr[end]
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        start++; // 起始位置向后移动
//        end--;   // 末尾位置向前移动
//    }
//}
//
//int main() {
//    int arr[10];          // 定义一个包含 10 个元素的整型数组
//    int size = sizeof(arr) / sizeof(arr[0]); // 计算数组大小
//
//    printf("初始化前的数组: ");
//    print(arr, size); // 打印初始化前的数组，内容为随机值
//
//    init(arr, size);  // 初始化数组为全 0
//    printf("初始化后的数组: ");
//    print(arr, size); // 打印初始化后的数组
//
//    // 给数组赋值，以便观察逆置效果
//    for (int i = 0; i < size; i++) {
//        arr[i] = i + 1;
//    }
//    printf("赋值后的数组: ");
//    print(arr, size); // 打印赋值后的数组
//
//    reverse(arr, size); // 逆置数组元素
//    printf("逆置后的数组: ");
//    print(arr, size); // 打印逆置后的数组
//
//    return 0;
//}


////实现对一个整形数组的冒泡排序
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
//// 冒泡排序函数
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; i++) {          // 外层循环：控制排序轮数
//        for (int j = 0; j < size - i - 1; j++) {   // 内层循环：每轮比较和交换
//            if (arr[j] > arr[j + 1]) {             // 如果前一个元素大于后一个元素
//                // 交换 arr[j] 和 arr[j + 1]
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//// 打印数组函数
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };  // 待排序的数组
//    int size = sizeof(arr) / sizeof(arr[0]);   // 计算数组大小
//
//    printf("排序前的数组: ");
//    printArray(arr, size);                     // 打印排序前的数组
//
//    bubbleSort(arr, size);                      // 调用冒泡排序函数
//
//    printf("排序后的数组: ");
//    printArray(arr, size);                     // 打印排序后的数组
//
//    return 0;
//}







////三子棋游戏
////该程序实现了一个简单的命令行三子棋游戏，支持两个玩家轮流下棋，并判断胜负或平局。
//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义棋盘大小
//#define BOARD_SIZE 3
//
//// 定义棋盘
//char board[BOARD_SIZE][BOARD_SIZE];
//
//// 初始化棋盘
//void initBoard() {
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = ' '; // 初始化为空格
//        }
//    }
//}
//
//// 打印棋盘
//void printBoard() {
//    printf("  1 2 3\n");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1);
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%c", board[i][j]);
//            if (j < BOARD_SIZE - 1) {
//                printf("|"); // 列分隔符
//            }
//        }
//        printf("\n");
//        if (i < BOARD_SIZE - 1) {
//            printf("  -----\n"); // 行分隔符
//        }
//    }
//}
//
//// 玩家下棋
//void playerMove(char player) {
//    int row, col;
//    while (1) {
//        printf("玩家 %c, 请输入您的落子位置 (行 列, 例如: 1 2): ", player);
//        if (scanf("%d %d", &row, &col) != 2) {
//            printf("输入错误，请重新输入。\n");
//            // 清空输入缓冲区
//            while (getchar() != '\n');
//            continue;
//        }
//        row--; // 转换为数组索引
//        col--; // 转换为数组索引
//
//        if (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ') {
//            board[row][col] = player;
//            break; // 落子成功，跳出循环
//        }
//        else {
//            printf("位置无效，请重新输入。\n");
//        }
//    }
//}
//
//// 检查是否有玩家获胜
//int checkWin(char player) {
//    // 检查行
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
//            return 1; // 该玩家获胜
//        }
//    }
//
//    // 检查列
//    for (int j = 0; j < BOARD_SIZE; j++) {
//        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
//            return 1; // 该玩家获胜
//        }
//    }
//
//    // 检查对角线
//    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
//        return 1; // 该玩家获胜
//    }
//    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
//        return 1; // 该玩家获胜
//    }
//
//    return 0; // 没有玩家获胜
//}
//
//// 检查是否平局
//int checkDraw() {
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            if (board[i][j] == ' ') {
//                return 0; // 还有空位，游戏未结束
//            }
//        }
//    }
//    return 1; // 没有空位，平局
//}
//
//int main() {
//    char currentPlayer = 'X'; // 玩家 X 先下
//    int gameContinue = 1;      // 游戏是否继续的标志
//
//    initBoard(); // 初始化棋盘
//
//    printf("欢迎来到三子棋游戏！\n");
//    printBoard(); // 打印初始棋盘
//
//    while (gameContinue) {
//        playerMove(currentPlayer); // 玩家下棋
//        printBoard();           // 打印棋盘
//
//        if (checkWin(currentPlayer)) {
//            printf("玩家 %c 获胜！\n", currentPlayer);
//            gameContinue = 0; // 结束游戏
//        }
//        else if (checkDraw()) {
//            printf("平局！\n");
//            gameContinue = 0; // 结束游戏
//        }
//        else {
//            // 切换玩家
//            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
//        }
//    }
//    printf("游戏结束。\n");
//    return 0;
//}








//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// 定义游戏参数
//#define BOARD_SIZE 10       // 棋盘大小
//#define NUM_MINES 15        // 雷的数量
//#define COVERED_CELL '■'   // 未翻开的格子显示
//#define MINE '*'           // 雷的显示
//#define EMPTY ' '            // 空白格显示
//
//// 定义棋盘
//char board[BOARD_SIZE][BOARD_SIZE];       // 实际雷区
//char displayBoard[BOARD_SIZE][BOARD_SIZE]; // 显示给玩家的棋盘
//
//// 初始化游戏
//void initBoard() {
//    // 初始化随机数种子
//    srand(time(NULL));
//
//    // 初始化棋盘为空
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = EMPTY;
//            displayBoard[i][j] = COVERED_CELL; // 初始时所有格子都未翻开
//        }
//    }
//
//    // 布置雷
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
//    // 计算每个格子周围的雷数
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
//                    board[i][j] = count + '0'; // 将数字转换为字符
//                }
//            }
//        }
//    }
//}
//
//// 打印游戏界面
//void printBoard() {
//    printf("  ");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // 打印列号
//    }
//    printf("\n");
//
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // 打印行号
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%c ", displayBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// 翻开格子
//int revealCell(int row, int col) {
//    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || displayBoard[row][col] != COVERED_CELL) {
//        return 0; // 无效操作
//    }
//
//    if (board[row][col] == MINE) {
//        displayBoard[row][col] = MINE; // 踩到雷，显示雷
//        return 1;                      // 踩到雷，返回 1
//    }
//
//    displayBoard[row][col] = board[row][col]; // 显示该格子的内容
//
//    // 如果翻开的是空白格，则自动翻开周围的格子
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
//// 检查是否胜利
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
//    initBoard(); // 初始化棋盘
//
//    printf("欢迎来到扫雷游戏！\n");
//
//    while (!gameOver) {
//        printBoard(); // 打印当前棋盘
//
//        printf("请输入要翻开的格子 (行 列, 例如: 1 2): ");
//        if (scanf("%d %d", &row, &col) != 2) {
//            printf("输入错误，请重新输入。\n");
//            // 清空输入缓冲区
//            while (getchar() != '\n');
//            continue;
//        }
//        row--;
//        col--;
//
//        gameOver = revealCell(row, col); // 翻开格子
//        if (gameOver) {
//            printf("踩到雷了！游戏结束！\n");
//            printBoard();
//            break;
//        }
//
//        if (checkWin()) {
//            printf("恭喜你，扫雷成功！\n");
//            printBoard();
//            gameOver = 1;
//            break;
//        }
//    }
//
//    printf("游戏结束。\n");
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// 定义游戏参数
//#define BOARD_SIZE 10       // 棋盘大小
//#define NUM_MINES 15        // 雷的数量
//#define COVERED_CELL '■'   // 未翻开的格子显示
//#define MINE '*'           // 雷的显示
//#define EMPTY ' '            // 空白格显示
//
//// 定义棋盘
//char board[BOARD_SIZE][BOARD_SIZE];       // 实际雷区
//char displayBoard[BOARD_SIZE][BOARD_SIZE]; // 显示给玩家的棋盘
//
//// 初始化游戏
//void initBoard() {
//    // 初始化随机数种子
//    srand(time(NULL));
//
//    // 初始化棋盘为空
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = EMPTY;
//            displayBoard[i][j] = COVERED_CELL; // 初始时所有格子都未翻开
//        }
//    }
//
//    // 布置雷
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
//    // 计算每个格子周围的雷数
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
//                    board[i][j] = count + '0'; // 将数字转换为字符
//                }
//            }
//        }
//    }
//}
//
//// 打印游戏界面
//void printBoard() {
//    printf("  ");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // 打印列号
//    }
//    printf("\n");
//
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%d ", i + 1); // 打印行号
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%c ", displayBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// 翻开格子
//int revealCell(int row, int col) {
//    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || displayBoard[row][col] != COVERED_CELL) {
//        return 0; // 无效操作
//    }
//
//    if (board[row][col] == MINE) {
//        displayBoard[row][col] = MINE; // 踩到雷，显示雷
//        return 1;                      // 踩到雷，返回 1
//    }
//
//    displayBoard[row][col] = board[row][col]; // 显示该格子的内容
//
//    // 如果翻开的是空白格，则自动翻开周围的格子
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
//// 检查是否胜利
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
//    initBoard(); // 初始化棋盘
//
//    printf("欢迎来到扫雷游戏！\n");
//
//    while (!gameOver) {
//        printBoard(); // 打印当前棋盘
//
//        printf("请输入要翻开的格子 (行 列, 例如: 1 2): ");
//        if (scanf("%d %d", &row, &col) != 2) {
//            printf("输入错误，请重新输入。\n");
//            // 清空输入缓冲区
//            while (getchar() != '\n');
//            continue;
//        }
//        row--;
//        col--;
//
//        gameOver = revealCell(row, col); // 翻开格子
//        if (gameOver) {
//            printf("踩到雷了！游戏结束！\n");
//            printBoard();
//            break;
//        }
//
//        if (checkWin()) {
//            printf("恭喜你，扫雷成功！\n");
//            printBoard();
//            gameOver = 1;
//            break;
//        }
//    }
//
//    printf("游戏结束。\n");
//    return 0;
//}





////扫雷游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// 定义游戏参数
//#define BOARD_SIZE 10       // 棋盘大小
//#define NUM_MINES 15        // 雷的数量
//#define COVERED_CELL '■'   // 未翻开的格子显示
//#define MARKED_CELL 'P'    // 标记为雷的格子显示
//#define MINE '*'           // 雷的显示
//#define EMPTY ' '            // 空白格显示
//
//// 定义棋盘
//char board[BOARD_SIZE][BOARD_SIZE];       // 实际雷区
//char displayBoard[BOARD_SIZE][BOARD_SIZE]; // 显示给玩家的棋盘
//
//// 函数声明
//void initBoard();
//void printBoard();
//int revealCell(int row, int col);
//int checkWin();
//int isValidCell(int row, int col);
//void markCell(int row, int col);
//
//// 初始化游戏
//void initBoard() {
//    // 初始化随机数种子
//    srand(time(NULL));
//
//    // 初始化棋盘为空
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            board[i][j] = EMPTY;
//            displayBoard[i][j] = COVERED_CELL; // 初始时所有格子都未翻开
//        }
//    }
//
//    // 布置雷
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
//    // 计算每个格子周围的雷数
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
//                    board[i][j] = count + '0'; // 将数字转换为字符
//                }
//            }
//        }
//    }
//}
//
//// 打印游戏界面
//void printBoard() {
//    printf("  ");
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%2d ", i + 1); // 打印列号
//    }
//    printf("\n");
//
//    for (int i = 0; i < BOARD_SIZE; i++) {
//        printf("%2d ", i + 1); // 打印行号
//        for (int j = 0; j < BOARD_SIZE; j++) {
//            printf("%2c ", displayBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//// 翻开格子
//int revealCell(int row, int col) {
//    if (!isValidCell(row, col) || displayBoard[row][col] != COVERED_CELL) {
//        return 0; // 无效操作
//    }
//
//    if (board[row][col] == MINE) {
//        displayBoard[row][col] = MINE; // 踩到雷，显示雷
//        return 1;                      // 踩到雷，返回 1
//    }
//
//    displayBoard[row][col] = board[row][col]; // 显示该格子的内容
//
//    // 如果翻开的是空白格，则自动翻开周围的格子
//    if (board[row][col] == EMPTY) {
//        for (int x = -1; x <= 1; x++) {
//            for (int y = -1; y <= 1; y++) {
//                if (x == 0 && y == 0) continue; // 跳过当前格子
//                revealCell(row + x, col + y);
//            }
//        }
//    }
//    return 0;
//}
//
//// 标记格子为雷
//void markCell(int row, int col) {
//    if (!isValidCell(row, col) || displayBoard[row][col] != COVERED_CELL) {
//        return; // 无效操作
//    }
//    displayBoard[row][col] = MARKED_CELL; // 标记为雷
//}
//
//// 检查是否胜利
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
//// 检查坐标是否有效
//int isValidCell(int row, int col) {
//    return row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE;
//}
//
//int main() {
//    int row, col;
//    int gameOver = 0;
//    char action;
//
//    initBoard(); // 初始化棋盘
//
//    printf("欢迎来到扫雷游戏！\n");
//
//    while (!gameOver) {
//        printBoard(); // 打印当前棋盘
//
//        printf("请输入操作 (f: 翻开, m: 标记, q: 退出), 以及坐标 (行 列, 例如: f 1 2): ");
//        if (scanf(" %c %d %d", &action, &row, &col) != 3) {
//            printf("输入错误，请重新输入。\n");
//            // 清空输入缓冲区
//            while (getchar() != '\n');
//            continue;
//        }
//        row--;
//        col--;
//
//        switch (action) {
//        case 'f': // 翻开格子
//            gameOver = revealCell(row, col); // 翻开格子
//            if (gameOver) {
//                printf("踩到雷了！游戏结束！\n");
//                printBoard();
//                break;
//            }
//            break;
//        case 'm': // 标记格子
//            markCell(row, col);
//            break;
//        case 'q': // 退出游戏
//            gameOver = 1;
//            printf("退出游戏。\n");
//            break;
//        default:
//            printf("无效操作，请重新输入。\n");
//        }
//
//        if (checkWin()) {
//            printf("恭喜你，扫雷成功！\n");
//            printBoard();
//            gameOver = 1;
//            break;
//        }
//    }
//
//    printf("游戏结束。\n");
//    return 0;
//}


//不允许创建临时变量，交换两个整数的内容
//这道题应该可以用位运算来解决问题
//1.算术运算
//void swap(int* a, int* b) {
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}


////位运算符
//void swap(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}


////获得月份天数
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


//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//#include<stdio.h>
//int n;
////该题实际上是递归
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




 
//输入两个整数，求两个整数二进制格式有多少个位不同
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
//    printf("请输入两个整数: ");
//    scanf("%d %d", &num1, &num2);
//
//    int xorResult = num1 ^ num2;
//    int differentBits = countSetBits(xorResult);
//
//    printf("两个整数二进制格式有 %d 位不同。\n", differentBits);
//
//    return 0;
//}



//打印整数二进制的奇数位和偶数位  获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//
//void Find_even(int a) {
//    printf("二进制中的偶数位序列为：\n");
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
//    printf("二进制中的奇数位序列为：\n");
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
//    printf("请输入一个整数：\n");
//    scanf("%d", &a);
//    Find_even(a);
//    Find_odd(a);
//    return 0;
//}




//////假如该数是负数的话
//#include <stdio.h>
//#include <stdint.h> // 为了使用int32_t，确保跨平台一致性
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
//    int32_t num = -10; // 示例负整数
//    printEvenOddBits(num);
//    return 0;
//}



//#include<climits>
//#include<iostream>
//using namespace std;
//int main() {
//cout << "int 类型的位数" << sizeof(int) * CHAR_BIT << endl;
//	return 0;
//}




////统计二进制中1的个数
//#include <stdio.h>
//
//// 方法1: 循环计数
//int countSetBits_Loop(int n) {
//    int count = 0;
//    while (n) {
//        count += n & 1;  // 检查最低位是否为1
//        n >>= 1;          // 右移一位
//    }
//    return count;
//}
//
//// 方法2: Brian Kernighan算法
//int countSetBits_BrianKernighan(int n) {
//    int count = 0;
//    while (n) {
//        n &= (n - 1);  // 清除最低位的1
//        count++;
//    }
//    return count;
//}
//
//// 方法3: 使用内置函数 (如果编译器支持)
//int countSetBits_Builtin(int n) {
//    return __builtin_popcount(n);
//}
//
//int main() {
//    int num = 7;
//
//    printf("Number of set bits (Loop): %d\n", countSetBits_Loop(num));
//    printf("Number of set bits (Brian Kernighan): %d\n", countSetBits_BrianKernighan(num));
//#ifdef __GNUC__ // 确保编译器支持 __builtin_popcount
//    printf("Number of set bits (Builtin): %d\n", countSetBits_Builtin(num));
//#endif
//
//    return 0;
//}





////编写代码在一个整形有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到则输出：找不到。
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
//    printf("请输入要查找的数字: ");
//    scanf("%d", &targetNumber);
//
//    int index = binarySearch(sortedArray, arraySize, targetNumber);
//
//    if (index != -1) {
//        printf("找到了！ 数字 %d 的下标是 %d\n", targetNumber, index);
//    }
//    else {
//        printf("找不到\n");
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
//        // DP[i][k] 表示跳到位置i使用了k次跳跃的最大昆虫数量
//        vector<vector<int>> dp(N + 1, vector<int>(K + 1, -1));
//        dp[0][0] = insects[0];  // 初始位置0，跳跃次数0
//
//        for (int pos = 0; pos < N; ++pos) {
//            for (int jumps = 0; jumps <= K; ++jumps) {
//                if (dp[pos][jumps] == -1) continue;
//
//                // 尝试所有可能的跳跃距离
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

















































