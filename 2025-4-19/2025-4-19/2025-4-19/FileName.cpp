//按需实例化（调用了才会去实例化）



template<>
class Date<int, double>
{
public:
	Data() { cout << "Data<int,double>" << endl; }
private:

};
int main() {
	Data<int, int>d1;
	Data<int, double>d2;
}

//函数只有定义过后才会进符号表
//声明的本质是一种承诺，只有定义才是真实的，这种承诺只能通过编译阶段



//template//显式实例化
//class stack<int>;


//基类的私有成员在派生类中是不可见的
//当子类和父类有同名成员时，子类的成员隐藏了父类的成员


//父子类域中，成员函数名相同就构成隐藏关系


//派生类必须调用父类的构造函数去初始化父类成员

class Person {
	
};
class Student :public Person
{
public:
	Student(const char* name="张三",int id=0)
		:_id(0)
		,Person(name)//默认情况下派生类在自己的初始化列表只会调用父类的默认构造
		//派生类通过在自己的初始化列表像定义匿名对象一样显式调用父类的构造函数
	{ }//在初始化列表中初始化的顺序是先初始化父类对象再初始化子类对象
	Student(const Student & s)
		:Person(s)//拷贝构造也是去调用父类的拷贝构造，关键问题是调用父类的拷贝构造需要传父类的对象，如果没有定义父类的对象怎么办呢，其实我们传子类的对象就可以，因为它可以自动进行切片，切出父类的那一部分
		,_id(s._id)//如果把这里的Person(s)那么它就会去调用父类的默认构造，如果父类没有默认构造那么就会出错
		
	{ }
	~Student() {//由于后面多态的元音，析构函数的函数名进行了特殊处理，统一处理成destructor

	Person:~Person();
	}//析构函数编辑器会自动调用，因为编译器要保证函数的析构顺序
protected:

	int _id;
};
int main() {
	Student s;
	return 0;
}


//友元关系不能继承
//静态成员也能继承，但是它们拥有的静态成员是同一个，它们具有相同的地址

//只有一个直接父类的都不是多继承


//虚基表（存找基类偏移量的表）

//先继承的在前面






