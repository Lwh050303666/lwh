#include<iostream>
using namespace std;
//二分法
//int search(vector<int>& nums, int target) {
//	int left = 0, right = nums.size() - 1;
//	while (left <= right)
//	{
//		//防止溢出，等同于(left+right)/2;
//		int middle = left + (right - left) / 2;
//		if (nums[middle] > target)   right = middle - 1;
//		else if (nums[middle] < target) left = middle + 1;
//		else return middle;
//	}
//	return -1;
//}



////这个二分的区间是[left,right)
//int search(vector<int>& nums, int target) {
//	int left = 0;
//	int right = nums.size();
//	while (left < right) {
//		int middle = left + (right - left) / 2;
//		if (nums.[middle] > target)  right = middle - 1;
//		else if (nums.[middle] < target) left = middle + 1;
//		else return middle;
//	}
//	return -1;
//
//}

//class solution {
//	//移除元素;对于连续空间的数组，移除元素不是真正的移除而是一种覆盖
//	int removeElement(vector<int>& nums, int val) {
//		int size = nums.size();
//		for (int i = 0; i < size; i++) {
//			if (nums[i] == val)
//				for (int j = i + 1; j < size; j++) nums[j - 1] = nums[j];
//			i--; size--;
//		}
//	}
//	return false;
//};


//双指针法相当于用两个数组，slowindex数组记录不等于val的元素的个数
//class solution {
//public:int removeElement(vector<int>& nums, int val) {
//	int slowindex = 0;
//	for (int fastindex = 0; fastindex < nums.size(); fastindex++) {
//		if (val != nums[fastindex])
//			nums[slowindex++] = nums[fastindex];
//	}
//	return slowindex;
//}
//};


//class solution {
//	int minsubarraylen(int s, vector<int>& nums) {
//		int result = INT32_MAX;//最终的结果
//		int sum = 0;//子数组的元素之和
//		int sublength = 0;   //子数组的长度
//		for (int i = 0; i < nums.size(); i++) {
//			sum = 0;
//			for (int j = i; j < nums.size(); j++) {
//				sum += nums[j];
//				if (sum >= s)//一旦发现子数组元素之和超过s就更新result
//					sublength = j - i + 1;
//				result = result < sublength ? result : sublength;
//				break;
//			}
//		}return result == INT32_MAX ? 0 : result;
//	} 
//	
//};




//class Solution {
//public:
//	int minsubarraylen(int s, vector<int>& nums) {
//		int result = INT32_MAX;
//		int sum = 0;//滑动窗口的数值之和
//		int i = 0;//滑动窗口的起始位置
//		int sublength = 0;//滑动窗口的长度
//		for (int j = 0; j < nums.size(); j++) {
//			sum += nums[j];
//			//注意这里使用while,每次更新i(起始位置）并不断比较子数组是否还符合条件
//			while (sum >= s) {
//				sublength = j - i + 1;//获取子数组的长度
//				result = result < sublength ? result : sublength;
//				//这里体现出滑动窗口的精髓之处，不断变更i
//				sum -= nums[i++];
//			}
//		}
//		return result == INT32_MAX ? 0 : result;
//	}
//};



////力扣题号59，螺旋矩阵
//class Solution {
//public:
//    vector<vector<int>> generateMatrix(int n) {
//        vector<vector<int>> res(n, vector<int>(n, 0));
//        int startx = 0, starty = 0;//定义每循环一个圈的起始位置
//        int loop = n / 2;//每个圈循环几次，如果n为奇数3，那么loop=1，只是循环一圈  
//        int mid = n / 2; //矩阵中间的位置，例如：n为3，中间的位置就是(1,1)
//        int count = 1;//用来给矩阵中每一个空格赋值
//        int offset = 1;//每一圈循环都需要控制每一条边遍历的长度
//        int i, j;
//        while (loop--) {
//            i = startx;
//            j = starty;
//            //下面开始的4个for就是模拟转了一圈
//            //模拟填充上行从左到右(左闭右开)
//            for (j = starty; j < starty + n - offset; j++) res[startx][j] = count++;
//            for (i = startx; i < startx + n - offset; i++) res[i][j] = count++;
//            for (; j > starty; j--)  res[i][j] = count++;
//            for (; i > startx; i--)  res[i][j] = count++;
//            //第二圈开始的时候，起始位置要各自加1
//            //例如：第一圈的起始位置是（0,0），第二圈的起始位置是(1,1);
//            startx++; starty++;
//            //offset用于控制每一圈中每一条边遍历的长度
//            offset += 2;
//        }
//        if (n % 2)  res[mid][mid] = count;
//        return res;
//    }
//};




//struct listnode {
//	int val;
//	listnode* next;
//	listnode(int x) :
//		val(x),
//		next(nullptr) {
//
//	}
//};



////无头结点单链表删除节点
//class solution {
//public:
//	listnode* removeelements(listnode* head, int val) {
//		//删除头节点
//		while (head != NULL && head->val == val) {
//			listnode* tmp = head;
//			head = head->next;
//			delete tmp;
//		}
//		//删除非头节点
//		listnode* cur = head;
//		while (cur != NULL && cur->next != NULL) {
//			if (cur->next->val == val) {
//				listnode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;
//			}
//			else cur = cur->next;
//		}
//		return head;
//	}
//};




//class solution {
//public:
//	listnode* removeelements(listnode* head, int val) {
//		listnode* dummyhead = new listnode(0);//设置一个虚拟头节点
//		dummyhead->next = head;//将虚拟头节点指向head，方便后面执行删除操作
//		listnode * cur = dummyhead;
//		while (cur->next != = NULL) {
//			if (cur->next->val == val) {
//				listnode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;
//			}
//			else cur = cur->next;
//		}
//		head = dummyhead->next;
//		delete dummyhead;
//		return head;
//	}
//};










