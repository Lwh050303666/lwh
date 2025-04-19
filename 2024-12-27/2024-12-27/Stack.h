#pragma once
#include<deque>
namespace lwh
{
	template<class T, class Container = std::deque<T>>
	class stack
	{
	public:
		void push(const T& x);
		void pop();

		T& top()
		{
			return _con.back();
		}

		size_t size()
		{
			return _con.size();
		}

		bool empty()
		{
			return _con.empty();
		}
	private:
		Container _con;
	};

	class A
	{
	public:
		void func1(int i);
		void func2();
	};

	template<class T, class Container>
	void stack<T, Container>::push(const T& x)
	{
		_con.push_back(x);
	}

	template<class T, class Container>
	void stack<T, Container>::pop()
	{
		_con.pop_back();
	}
}
