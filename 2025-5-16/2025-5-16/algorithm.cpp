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
//	  //��ȡ��index���ڵ����ֵ�����index�ǷǷ���ֵ��ֱ�ӷ���-1
//	  //ע��index�Ǵ�0��ʼ�ģ���0���ڵ����ͷ�ڵ�
//	  int get() {
//		  if (index > (_size - 1) || index < 0) return -1;
//		  linkednode* cur = _dummyhead->next;
//		  while (index--) cur = cur->next;
//		  return cur->val;
//	  }
//	  //��������ǰ�����һ���ڵ㣬������ɺ��²���Ľڵ�Ϊ������½ڵ�
//	  void addathead(int val)
//	  {
//		  linkednode* newnode = new linkednode(val);
//		  newnode->next = _dummyhead->next;
//		  _dummy->next = newnode;
//		  _size++;
//	  }
//	  //��������������һ���ڵ�
//	  void addattail(int val)
//	  {
//		  linkednode* newnode = new linkednode(val);
//		  linkednode* cur = _dummyhead;
//		  while (cur->next != nullptr) cur = cur->next;
//		  cur->next = newnode;    _size++;
//	  }
//	  //�ڵ�index���ڵ�֮ǰ����һ���½ڵ�
//	  //���indexΪ0����ô�²���Ľڵ�Ϊ�����ͷ�ڵ�
//	  //���index��������ĳ��ȣ���˵���²���Ľڵ�Ϊ�����β�ڵ�
//	  //���index��������ĳ��ȣ��򷵻ؿ�
//	  void  addatindex(int index, int val) {
//		  if (index > _size)  return;
//		  linkednode* newnode = new linkednode(val);
//		  linkednode* cur = _dummyhead;
//		  while (index--)   cur = cur->next;
//		  newnode->next = cur->next;
//		  cur->next = newnode;
//		  _size++;
//	  }
//	  //ɾ����index���ڵ㣬���index���ڻ��������ĳ��ȣ���ֱ�ӷ���
//	  //ע��index�Ǵ�0��ʼ��
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
//	  //��ӡ����
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



//��תһ���������ǲ����������Ŀռ�
//class solution {//˫ָ�뷨
//public: listnode* reverselist(listnode* head) {
//	listnode* temp;//����cur����һ���ڵ�
//	listnode* cur = head;
//	listnode* pre = nullptr;
//	while (cur) {
//		//����cur����һ���ڵ㣬��Ϊ������Ҫ�ı�cur->next��ָ����
//		temp = cur->next;
//		cur->next = pre;//��תָ��
//		//����pre��curָ��
//		pre = cur;
//		cur = temp;
// }
//	return pre;
//
//}
// };



////�ݹ鷨
//class solution {
//public:
//	listnode* reverse(listnode* pre, listnode* cur) {
//		if (cur == nullptr)   return pre;
//		listnode* temp = cur->next;
//		cur->next = pre;  
//		//���Ժ�˫ָ�뷨�Ĵ�����жԱȣ����µݹ��д��
//		//pre=cur;
//		//cur=temp;
//		return reverse(cur, temp);
//	}
//	listnode* reverselist(listnode* head) {
//		//��˫ָ�뷨�ĳ�ʼ����һ�����߼�
//		//listnode * cur=head;
//		//listnode * pre=nullptr;
//		return reverse(nullptr, head);
//	}
//};




//ɾ������ĵ�����n���ڵ�(n��1��ʼ)
//class  solution {
//public:listnode* removenthfromend(listnode* head, int n) {
//	listnode* dummyhead = new listnode(0);
//	dummyhead->next = head;
//	listnode* slow = dummyhead;
//	listnode* fast = dummyhead;
//	while (n-- && fast != nullptr) fast = fast->next;
//	//fast����ǰ�ƶ�һ������Ϊ��Ҫ��slowָ��ɾ���ڵ����һ���ڵ�
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
//			//����ָ����������ʱ��head��������ͬʱ����ֱ������
//			if (slow == fast) {
//				listnode* index1 = fast;
//				listnode* index2 = head;
//				while (index1 != index2) {
//					index1 = inde1->next;
//					idnex2 = index2->next;
//				}
//				return index2;//���ػ������
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
//	unordered_set<int>result_set;//��Ž��
//	unordered_set<int> nums_set(nums1.begin(), nums1.end());
//	for (int num : nums2) {
//		//����nums2��Ԫ����nums_set�г��ֹ�
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
//	unordered_map<int, int>map; //key:a+b����ֵ     value��a+b���ֵĴ���
//	//����a��b���飬ͳ����������Ԫ��֮�ͼ�����ִ��������ŵ�map��
//	for (int a : A) {
//		for (int b : B)  map[a + b]++;	}
//	int count = 0; //ͳ��a+b+c+d���ֵĴ���
//	//�ڱ���C,D����ʱ�����0-(c+d)��map�г��ֹ�����ͳ��map��key��Ӧ��value��������֮�ͳ��ֵĴ���
//	for (int c : C) {
//		for (int d : D) {
//			if (map.find(0 - (c + d)) != map.end())    count += map[0 - (c + d)];
//		}
//	}
//	return count;
//}
//};


 


