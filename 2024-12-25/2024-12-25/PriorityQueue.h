#pragma once
#include<vector>
#include<functional>
template<class T>
class Less
{
public:
	bool operator()(const T& x, const T& y)
	{
		return x < y;
	}
};

template<class T>
class Greater
{
public:
	bool operator()(const T& x, const T& y)
	{
		return x > y;
	}
};

namespace lwh
{


	template<class T, class Container = vector<T>, class Comapre = less<T>>
	class priority_queue
	{
	private:
		void AdjustDown(int parent)
		{
			Comapre com;
			size_t child = parent * 2 + 1;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && com(_con[child], _con[child + 1]))
					//if (child + 1 < _con.size() && _con[child] < _con[child + 1])
				{
					++child;
				}

				if (com(_con[parent], _con[child]))
				{
					swap(_con[child], _con[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}
		}

		void AdjustUp(int child)
		{
			Comapre com;

			int parent = (child - 1) / 2;
			while (child > 0)
			{
				if (com(_con[parent], _con[child]))
				{
					swap(_con[child], _con[parent]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}
	public:
		priority_queue()
		{
		}

		template<class InputIterator>
		priority_queue(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				_con.push_back(*first);
				++first;
			}
			for (int i = (_con.size() - 1 - 1) / 2; i >= 0; i--)
			{
				AdjustDown(i);
			}
		}

		void pop()
		{
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();

			AdjustDown(0);
		}

		void push(const T& x)
		{
			_con.push_back(x);

			AdjustUp(_con.size() - 1);
		}

		const T& top()
		{
			return _con[0];
		}

		bool empty()
		{
			return _con.empty();
		}

		size_t size()
		{
			return _con.size();
		}
	private:
		Container _con;
	};

	void test_priority_queue1()
	{
	
		//priority_queue<int> pq;

		priority_queue<int, vector<int>, Greater<int>> pq;

		pq.push(3);
		pq.push(5);
		pq.push(1);
		pq.push(4);

		while (!pq.empty())
		{
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}

	class Date
	{
	public:
		Date(int year = 1900, int month = 1, int day = 1)
			: _year(year)
			, _month(month)
			, _day(day)
		{
		}

		bool operator<(const Date& d)const
		{
			return (_year < d._year) ||
				(_year == d._year && _month < d._month) ||
				(_year == d._year && _month == d._month && _day < d._day);
		}

		bool operator>(const Date& d)const
		{
			return (_year > d._year) ||
				(_year == d._year && _month > d._month) ||
				(_year == d._year && _month == d._month && _day > d._day);
		}

		friend ostream& operator<<(ostream& _cout, const Date& d);
	private:
		int _year;
		int _month;
		int _day;
	};

	ostream& operator<<(ostream& _cout, const Date& d)
	{
		_cout << d._year << "-" << d._month << "-" << d._day;
		return _cout;
	}

	struct LessPDate
	{
		bool operator()(const Date* p1, const Date* p2)
		{
			return *p1 < *p2;
		}
	};


	void test_priority_queue2()
	{
		
	/*	priority_queue<Date, vector<Date>, less<Date>> pq;
		pq.push(Date(2023, 7, 20));
		pq.push(Date(2023, 6, 20));
		pq.push(Date(2023, 8, 20));

		while (!pq.empty())
		{
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;*/

		priority_queue<Date*, vector<Date*>, LessPDate> pq;
		pq.push(new Date(2023, 7, 20));
		pq.push(new Date(2023, 6, 20));
		pq.push(new Date(2023, 8, 20));

		while (!pq.empty())
		{
			cout << *pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}
}
