#include<iostream>
using namespace std;
//���ַ�
//int search(vector<int>& nums, int target) {
//	int left = 0, right = nums.size() - 1;
//	while (left <= right)
//	{
//		//��ֹ�������ͬ��(left+right)/2;
//		int middle = left + (right - left) / 2;
//		if (nums[middle] > target)   right = middle - 1;
//		else if (nums[middle] < target) left = middle + 1;
//		else return middle;
//	}
//	return -1;
//}



////������ֵ�������[left,right)
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
//	//�Ƴ�Ԫ��;���������ռ�����飬�Ƴ�Ԫ�ز����������Ƴ�����һ�ָ���
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


//˫ָ�뷨�൱�����������飬slowindex�����¼������val��Ԫ�صĸ���
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
//		int result = INT32_MAX;//���յĽ��
//		int sum = 0;//�������Ԫ��֮��
//		int sublength = 0;   //������ĳ���
//		for (int i = 0; i < nums.size(); i++) {
//			sum = 0;
//			for (int j = i; j < nums.size(); j++) {
//				sum += nums[j];
//				if (sum >= s)//һ������������Ԫ��֮�ͳ���s�͸���result
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
//		int sum = 0;//�������ڵ���ֵ֮��
//		int i = 0;//�������ڵ���ʼλ��
//		int sublength = 0;//�������ڵĳ���
//		for (int j = 0; j < nums.size(); j++) {
//			sum += nums[j];
//			//ע������ʹ��while,ÿ�θ���i(��ʼλ�ã������ϱȽ��������Ƿ񻹷�������
//			while (sum >= s) {
//				sublength = j - i + 1;//��ȡ������ĳ���
//				result = result < sublength ? result : sublength;
//				//�������ֳ��������ڵľ���֮�������ϱ��i
//				sum -= nums[i++];
//			}
//		}
//		return result == INT32_MAX ? 0 : result;
//	}
//};



////�������59����������
//class Solution {
//public:
//    vector<vector<int>> generateMatrix(int n) {
//        vector<vector<int>> res(n, vector<int>(n, 0));
//        int startx = 0, starty = 0;//����ÿѭ��һ��Ȧ����ʼλ��
//        int loop = n / 2;//ÿ��Ȧѭ�����Σ����nΪ����3����ôloop=1��ֻ��ѭ��һȦ  
//        int mid = n / 2; //�����м��λ�ã����磺nΪ3���м��λ�þ���(1,1)
//        int count = 1;//������������ÿһ���ո�ֵ
//        int offset = 1;//ÿһȦѭ������Ҫ����ÿһ���߱����ĳ���
//        int i, j;
//        while (loop--) {
//            i = startx;
//            j = starty;
//            //���濪ʼ��4��for����ģ��ת��һȦ
//            //ģ��������д�����(����ҿ�)
//            for (j = starty; j < starty + n - offset; j++) res[startx][j] = count++;
//            for (i = startx; i < startx + n - offset; i++) res[i][j] = count++;
//            for (; j > starty; j--)  res[i][j] = count++;
//            for (; i > startx; i--)  res[i][j] = count++;
//            //�ڶ�Ȧ��ʼ��ʱ����ʼλ��Ҫ���Լ�1
//            //���磺��һȦ����ʼλ���ǣ�0,0�����ڶ�Ȧ����ʼλ����(1,1);
//            startx++; starty++;
//            //offset���ڿ���ÿһȦ��ÿһ���߱����ĳ���
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



////��ͷ��㵥����ɾ���ڵ�
//class solution {
//public:
//	listnode* removeelements(listnode* head, int val) {
//		//ɾ��ͷ�ڵ�
//		while (head != NULL && head->val == val) {
//			listnode* tmp = head;
//			head = head->next;
//			delete tmp;
//		}
//		//ɾ����ͷ�ڵ�
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
//		listnode* dummyhead = new listnode(0);//����һ������ͷ�ڵ�
//		dummyhead->next = head;//������ͷ�ڵ�ָ��head���������ִ��ɾ������
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










