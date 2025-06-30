#pragma once
#include<pthread.h>

class  Mutex
{
    public: Mutex(pthread_mutex_t * lock):lock_(lock)




}
uint_t 


vector<int>a;
vector<int>t1{1,2,3,4};
#include<iostream>
using namespace std;
vector<int>a(n)
vector<int>a(n);
struct node(){
int x,y;
friend

}

vector<int>a(5,4);
 push_back();
 pop_back();
 insert();
 empty();
 size();
vector a{1,2,3,4,5};
 front();
 back();
 at(index);//返回c[index]，会进行边界检查  如果越界就会报错
 begin();//迭代器
 end();//迭代器
 reserve(sz);为数组提前分配sz的内存大小，即改变了 capacity 的大小，主要是为了防止在 push_back 过程中多次的内存拷贝
 assign(beg, end) ;//将另外一个容器[x.begin(), x.end()) 里的内容拷贝到c中
 assign(n,val);//将n 个val值拷贝到c数组中，这会清除掉容器中以前的内容，c数组的size将变为n，capacity 不会改变
 resize(n,v);//改变数组大小为n,n个空间数值赋为v，如果没有默认赋值为0
 erase(first,last);//
使用 vi.resize(n, v) 函数时，若 vi 之前指定过大小为 pre

pre > n ：即数组大小变小了，数组会保存前 n 个元素，前 n 个元素值为原来的值，不是都为 v
pre < n ：即数组大小变大了，数组会在后面插入 n - pre 个值为 v 的元素
也就是说，这个初始值 v 只对新插入的元素生效。

//下面开始stack容器
stack<int>s;
s.push();
s.pop();
s.top();
s.empty();
s.size();


queue<int>q;
q.front();
q.back();
q.push();
q.pop();
q.size();
q.empty();
//双端队列   头尾都可以插入或者删除元素的容器叫双端队列
#include<deque>
deque<int>dq;
dq.push_back()/dq.push_front();
dq.pop_back()/dq.pop_front();
dq.back()  dq.front();
dq.erase(iterator it)//删除双端队列中的某一个元素
erase(iterator first,iterator last)	删除双端队列中[first,last)中的元素
dq.empty();
dq.size();
dq.clear();

priority_queue<int>q;
q.top();
q.push();
q.pop();
q.size();
q.empty();
erase(iterator first,iterator last)	删除双端队列中[first,last)中的元素

priority_queue<int> pq; // 默认大根堆, 即每次取出的元素是队列中的最大值
priority_queue<int, vector<int>, greater<int>> q; // 小根堆, 每次取出的元素是队列中的最小值
priority_queue<int> q1; // 默认大根堆, 即每次取出的元素是队列中的最大值
priority_queue<int, vector<int>, less<int> > q2; // 大根堆, 每次取出的元素是队列中的最大值，同第一行

priority_queue<int, vector<int>, greater<int> > q3; // 小根堆, 每次取出的元素是队列中的最小值

struct cmp1 {
	bool operator()(int x, int y) {
		return x > y;
	}
};
struct cmp2 {
	bool operator()(const int x, const int y) {
		return x < y;
	}
};
priority_queue<int, vector<int>, cmp1> q1; // 小根堆
priority_queue<int, vector<int>, cmp2> q2; // 大根堆


//定义的比较结构体
//注意：cmp是个结构体 
struct cmp {//自定义堆的排序规则 
	bool operator()(const Point& a,const Point& b) {
		return  x < b.x;
	}
};

//初始化定义， 
priority_queue<Point, vector<Point>, cmp> q; // x大的在堆顶

struct node{
int x,y;
friend bool operator < (Point a, Point b){//为两个结构体参数，结构体调用一定要写上friend
return  x<b.x;
}
};

struct node{
int a,b;
bool operator < (const Point & a) const{
    return x< x;
}
};
 
pair类型
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>>q;
    q.push({7,8});
}

map<int>mp;
mp.find(key);
mp.erase(iterator it);
mp.erase(key);
mp.erase(iterator first,iterator last);//删除一个区间内的所有元素
mp.size();//返回映射的对数
mp.clear();//清除map中的所有元素
mp.insert();//插入元素，插入元素时要构造键值对
mp.empty();//如果map为空返回true  否则返回false
mp.begin();
mp.end();
mp.rbegin();//返回指向map最后一个元素的迭代器
mp.rend();//返回指向map 第一个元素的上一个的逆向迭代器
mp.count(key);//查看元素是否存在，因为map中键是唯一的，所以存在返回1，不存在就返回0
mp.lower_bound();//返回一个迭代器，指向键值>=key的第一个元素
mp.upper_bound();//返回一个迭代器，指向键值>key的第一个元素
下面说明部分函数方法的注意点

注意点一：
查找元素是否存在时，可以使用 ① mp.find() ② mp.count() ③ mp[key]
但是第三种情况，如果不存在对应的key时，会自动创建一个键值对（产生一个额外的键值对空间）
所以为了不增加额外的空间负担，最好使用前两种方法。

6.5.2 效率比较
map：

优点：内部用红黑树实现，内部元素具有有序性，查询删除等操作复杂度为
O
(
l
o
g
N
)
O(logN)

缺点：占用空间，红黑树里每个节点需要保存父子节点和红黑性质等信息，空间占用较大。

unordered_map：

优点：内部用哈希表实现，查找速度非常快（适用于大量的查询操作）。
缺点：建立哈希表比较耗时。
两者方法函数基本一样，差别不大。

注意：

随着内部元素越来越多，两种容器的插入删除查询操作的时间都会逐渐变大，效率逐渐变低。

使用[]查找元素时，如果元素不存在，两种容器都是创建一个空的元素；如果存在，会正常索引对应的值。所以如果查询过多的不存在的元素值，容器内部会创建大量的空的键值对，后续查询创建删除效率会大大降低。

查询容器内部元素的最优方法是：先判断存在与否，再索引对应值（适用于这两种容器)

hash是什么？ 人们有很多疑问
set<int>st;
st.begin()/s.rbegin();
s.end()/s.rend();
s.clear();
s.empty();
s.insert(element);//插入元素
s.size();
s.erase(iterator i)/s.erase(first,last)/s.erase(key_value);
s.find();
s.count();
s.lower_bound();
s.upper_bound();

string支持"+" "+="等运算符
c_str

int n;
string s;
cin>>n;
getline(cin,s);//此时读取相当于读取了前一个回车字符  因为getline只以换行符\n为终止条件
而cin是以空白字符(如\n,空格等)为终止条件
s.c_str();
s.size();//当前的尺寸
s.max_size();//由平台和硬件限制的所能表示的最大大小
s.capacity();//当前的容量
s.push_back();
s.insert(pos,element);//在pos位置插入element
s.append(str);//在s字符串末尾添加str字符串
s.erase(iterator p)//删除字符串中p所指向的字符
s.erase(iterator first,iterator last);//删除字符串中迭代器区间[first,last)上所有字符
s.erase(pos,len);//删除字符串中从索引位置pos开始的len个字符
s.clear();//删除字符串中所有字符
s.find(str,pos);
s.find(c,pos);
s.rfind(c,pos);
s.rfind(str,pos);
s.find_first_of(str,pos);
s.find_first_not_of(str,pos);
s.find_last_of(str,pos);
s.find_last_not_of(str,pos);


#include<bits/stdc++.h>
using namespace std;
int main() {
	bitset<4> bitset1;　　  //无参构造，长度为４，默认每一位为0
	
	bitset<9> bitset2(12);　//长度为9，二进制保存，前面用0补充
	
	string s = "100101";
	bitset<10> bitset3(s);　　//长度为10，前面用0补充
	
	char s2[] = "10101";
	bitset<13> bitset4(s2);　　//长度为13，前面用0补充
	
	cout << bitset1 << endl;　　//0000
	cout << bitset2 << endl;　　//000001100
	cout << bitset3 << endl;　　//0000100101
	cout << bitset4 << endl;　//0000000010101
	return 0;
}

bitset<4> foo (string("1001"));
bitset<4> bar (string("0011"));

cout << (foo ^= bar) << endl;// 1010 (foo对bar按位异或后赋值给foo)

cout << (foo &= bar) << endl;// 0001 (按位与后赋值给foo)

cout << (foo |= bar) << endl;// 1011 (按位或后赋值给foo)

cout << (foo<<=2) << endl;// 0100 (左移2位，低位补0，有自身赋值)

cout << (foo>>=1) << endl;// 0100 (右移1位，高位补0，有自身赋值)

cout << (~bar) << endl;// 1100 (按位取反)

cout << (bar<<1) << endl;// 0110 (左移，不赋值)

cout << (bar>>1) << endl;// 0001 (右移，不赋值)

cout << (foo==bar) << endl;// false (1001==0011为false)

cout << (foo!=bar) << endl;// true  (1001!=0011为true)

cout << (foo&bar) << endl;// 0001 (按位与，不赋值)

cout << (foo|bar) << endl;// 1011 (按位或，不赋值)

cout << (foo^bar) << endl;// 1010 (按位异或，不赋值)


//可以通过 [] 访问元素(类似数组)，注意最低位下标为0，类似于数的二进制表示，如下：
bitset<4> f("1011"); 
for (int i = 0; i < 4; ++i) {
    cout << f[i];
} // 输出1101
array<int,100>{0};
array<string,2>s{"ha","string("haha")};
 begin();
 end();
 rbegin();
 rend();
 size();
max_size();
empty();
at(n);
front();
back();
data();
fill(x);//将x这个值赋值给容器中的每个元素  相当于初始化
array1.swap(array2);//交换array1和array2容器中的所有元素，但前提是它们具有相同的长度和类型


begin();
end();
rbegin();
rend();
size();
max_size();












