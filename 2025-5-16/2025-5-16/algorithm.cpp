//class mylinkedlist {
//public: struct linkednode {
//	int val;
//	linkednode* next;
//	linkednode(int val):val(val),next(nullptr){}
//
//};
//	  mylinkedlist() {
//		  _dummyhead = new linkednode(0);
//		  _size = 0;
//	  }
//	  //获取第index个节点的数值，如果index是非法数值则直接返回-1
//	  //注意index是从0开始的，第0个节点就是头节点
//	  int get() {
//		  if (index > (_size - 1) || index < 0) return -1;
//		  linkednode* cur = _dummyhead->next;
//		  while (index--) cur = cur->next;
//		  return cur->val;
//	  }
//	  //在链表最前面插入一个节点，插入完成后，新插入的节点为链表的新节点
//	  void addathead(int val)
//	  {
//		  linkednode* newnode = new linkednode(val);
//		  newnode->next = _dummyhead->next;
//		  _dummy->next = newnode;
//		  _size++;
//	  }
//	  //在链表最后面添加一个节点
//	  void addattail(int val)
//	  {
//		  linkednode* newnode = new linkednode(val);
//		  linkednode* cur = _dummyhead;
//		  while (cur->next != nullptr) cur = cur->next;
//		  cur->next = newnode;    _size++;
//	  }
//	  //在第index个节点之前插入一个新节点
//	  //如果index为0，那么新插入的节点为链表的头节点
//	  //如果index等于链表的长度，则说明新插入的节点为链表的尾节点
//	  //如果index大于链表的长度，则返回空
//	  void  addatindex(int index, int val) {
//		  if (index > _size)  return;
//		  linkednode* newnode = new linkednode(val);
//		  linkednode* cur = _dummyhead;
//		  while (index--)   cur = cur->next;
//		  newnode->next = cur->next;
//		  cur->next = newnode;
//		  _size++;
//	  }
//	  //删除第index个节点，如果index大于或等于链表的长度，则直接返回
//	  //注意index是从0开始的
//	  void deleteatindex(int index) {
//
//		  if (index >= _size || index < 0)  return;
//		  linkednode* cur = _dummyhead;
//		  while (index--)  cur = cur->next;
//		  linkednode* tmp = cur->next;
//		  cur->next = cur->next->next;
//		  delete tmp;
//		  _size--;
//	  }
//	  //打印链表
//	  void printlinkedlist() {
//		  linkednode* cur = _dummyhead;
//		  while (cur->next != nullptr) {
//			  cout << cur->next->val << " ";
//			  cur = cur->next;
//		  }   
//		  cout << endl;
//	  }
//private:
//	int _size;
//	linkednode* dummyhead;
//
//
//
//
//};



//反转一个链表，但是不能申请额外的空间
//class solution {//双指针法
//public: listnode* reverselist(listnode* head) {
//	listnode* temp;//保存cur的下一个节点
//	listnode* cur = head;
//	listnode* pre = nullptr;
//	while (cur) {
//		//保存cur的下一个节点，因为接下来要改变cur->next的指向了
//		temp = cur->next;
//		cur->next = pre;//反转指针
//		//更新pre和cur指针
//		pre = cur;
//		cur = temp;
// }
//	return pre;
//
//}
// };



////递归法
//class solution {
//public:
//	listnode* reverse(listnode* pre, listnode* cur) {
//		if (cur == nullptr)   return pre;
//		listnode* temp = cur->next;
//		cur->next = pre;  
//		//可以和双指针法的代码进行对比，如下递归的写法
//		//pre=cur;
//		//cur=temp;
//		return reverse(cur, temp);
//	}
//	listnode* reverselist(listnode* head) {
//		//和双指针法的初始化是一样的逻辑
//		//listnode * cur=head;
//		//listnode * pre=nullptr;
//		return reverse(nullptr, head);
//	}
//};




//删除链表的倒数第n个节点(n从1开始)
//class  solution {
//public:listnode* removenthfromend(listnode* head, int n) {
//	listnode* dummyhead = new listnode(0);
//	dummyhead->next = head;
//	listnode* slow = dummyhead;
//	listnode* fast = dummyhead;
//	while (n-- && fast != nullptr) fast = fast->next;
//	//fast再提前移动一步，因为需要让slow指向删除节点的上一个节点
//	fast = fast->next;
//	while (fast != nullptr) {
//		fast = fast->next; 
//		slow = slow->next;
//	}
//	slow->next = slow->next->next;
//	return dummyhead->next;
//}
//};



//class solution {
//public:
//	listnode* detectcycle(listnode* head) {
//		listnode* fast = head;
//		listnode* slow = head;
//		while (fast != nullptr && fast->next != nullptr)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//			//快慢指针相遇，此时从head和相遇点同时查找直至相遇
//			if (slow == fast) {
//				listnode* index1 = fast;
//				listnode* index2 = head;
//				while (index1 != index2) {
//					index1 = inde1->next;
//					idnex2 = index2->next;
//				}
//				return index2;//返回环的入口
//			}
//		}return nullptr;
//	}
//};



//class solution {
//public: bool isanagram(string s, string t) {
//	int record[26] = { 0 };
//	for (int i = 0; i < s.size(); i++)  record[s[i] - 'a']++;
//	for (int i = 0; i < t.size(); i++)    record[t[i] - 'a']++;
//	for (int i = 0; i < 26; i++) {
//		if (record[i] != 0)   return false;
//	}
//	return  true;
//}
//};




//class solution {
//public: vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//	unordered_set<int>result_set;//存放结果
//	unordered_set<int> nums_set(nums1.begin(), nums1.end());
//	for (int num : nums2) {
//		//发现nums2的元素在nums_set中出现过
//		if (nums_set.find(num) != nums_set.end())   result_set.insert(num);
//	}
//	return vector<int>(result_set.begin(), result_set.end());
//}
//};



//class solution {
//public: vector<int>twosum(vector<int>& nums, int target) {
//	std::unordered_map<int, int>map;
//	for (int i = 0; i < nums.size(); i++) {
//		auto iter = map.find(target - nums[i]);
//		if (iter != map.end())  return { iter->second,i };
//		map.insert(pair<int, int>(nums[i], i));
//	}
//	return {};
//}
//};





//class solution {
//public:  int foursumcount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//	unordered_map<int, int>map; //key:a+b的数值     value：a+b出现的次数
//	//遍历a，b数组，统计两个数组元素之和及其出现次数，并放到map中
//	for (int a : A) {
//		for (int b : B)  map[a + b]++;	}
//	int count = 0; //统计a+b+c+d出现的次数
//	//在遍历C,D数组时，如果0-(c+d)在map中出现过，就统计map中key对应的value，即两数之和出现的次数
//	for (int c : C) {
//		for (int d : D) {
//			if (map.find(0 - (c + d)) != map.end())    count += map[0 - (c + d)];
//		}
//	}
//	return count;
//}
//};


 


