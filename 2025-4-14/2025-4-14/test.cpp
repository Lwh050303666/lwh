//������ʱ�����Ѿ�����˺ܶ�Ļ��ᣬ�־͹��Լ��۽�խ��̬��  �ҷ�����Ҫ���Ҷ����Ķ������û���
//��������Ҫսʤ�Ϳ���սʤ��ֻ�����Լ�
//#include<iostream>
//using namespace std;
//sum_solution() {
//
//}
//class solution {
//public:
//	int sum_solution(int n) {
//
//	}
//};

//��̬��Ա���������Ե��÷Ǿ�̬��Ա����


//���һ����  ��������ֻ����ջ���߶��ϴ�������
//class A
//{public:
//static A	GetStackObj() {
//	A aa;
//	return aa;
//	}
//static A GetHeapObj() {
//	return new A;
//}
//private:
//	A() {
//
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//int main()
//{
//	static A aa1;//��̬��
//	A aa2;//ջ
//	A* ptr = new A;//��
//	GetStackObj();
//	GetHeapObj();
//	return 0;
//}



////��Ԫ   
//// ��Ԫ����������const������     һ�����������Ƕ�������Ԫ
////�ڲ���
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	static int k;//��ռ��A���ڴ�  ��Ϊ��̬����ʵ���ϲ���������   ���Ǵ��ھ�̬��
//	int h;
//public:
//	class B {
//	public:
//		void foo() {
//
//		}
//	private:
//		int b;
//	};
//};
//
//int main() {
//	cout << sizeof(A) << endl;
//	A aa;
//	A::B bb;
//}




//new���Զ������ͻ���ù��캯��
//delete�������������
//ģ�����������class��typename����������struct
//#include<iostream>
//using namespace std;
//template<class T>
//T Add(const T& left, const T& right) {
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
////ʵ�δ��ݵ����ͣ�����T������
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//	//��ʽʵ��������ָ������ʵ����
//
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//}
//
//template<typename T1,typename T2>
//T1 Func(const T1& x, const T2& y)
//{
//	cout << x << " " << y << endl;
//	return x;
//}
////��Щ�����޷��Զ��ƣ�ֻ����ʽʵ����
////��ʽ����ת������ʽ����ת�����������ʱ��������ʱ�������г���



stack<int>s1;
stack<double>s2;
stack<char>s3;

//����ͨ����˵����������һ��
//����ģ����˵ stack��������stack<int>����ʵ����֮��Ľ����������
//stl�Ǳ�׼���һ����





















