#pragma once
#include<assert.h>
namespace lwh
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		// vector<int> v(10, 1);
		// 
		// vector<int> v(10u, 1);
		// vector<string> v1(10, "1111");
		vector(size_t n, const T& val = T())
		{
			resize(n, val);
		}

		vector(int n, const T& val = T())
		{
			resize(n, val);
		}

		// [first, last)
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		vector()
		{
		}

		vector(const vector<T>& v)
		{
			_start = new T[v.capacity()];
			//memcpy(_start, v._start, sizeof(T)*v.size());
			for (size_t i = 0; i < v.size(); i++)
			{
				_start[i] = v._start[i];
			}

			_finish = _start + v.size();
			_endofstorage = _start + v.capacity();
		}

		/*vector(const vector<T>& v)
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
			reserve(v.capacity());
			for (auto e : v)
			{
				push_back(e);
			}
		}*/

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage, v._endofstorage);
		}

		// v1 = v2
		vector<T>& operator=(vector<T> v)
		{
			swap(v);

			return *this;
		}

		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endofstorage = nullptr;
			}
		}

		// 
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tmp = new T[n];
				if (_start)
				{
					//memcpy(tmp, _start, sizeof(T) * sz);
					for (size_t i = 0; i < sz; i++)
					{
						tmp[i] = _start[i];
					}

					delete[] _start;
				}

				_start = tmp;
				_finish = _start + sz;
				_endofstorage = _start + n;
			}
		}
		void resize(size_t n, const T& val = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			else
			{
				reserve(n);

				while (_finish != _start + n)
				{
					*_finish = val;
					++_finish;
				}
			}
		}
		void push_back(const T& x)
		{
			/*if (_finish == _endofstorage)
			{
				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
			}

			*_finish = x;
			++_finish;*/
			insert(end(), x);
		}

		void pop_back()
		{
			erase(--end());
		}

		size_t capacity() const
		{
			return _endofstorage - _start;
		}

		size_t size() const
		{
			return _finish - _start;
		}

		T& operator[](size_t pos)
		{
			assert(pos < size());

			return _start[pos];
		}

		const T& operator[](size_t pos) const
		{
			assert(pos < size());

			return _start[pos];
		}

		iterator insert(iterator pos, const T& x)
		{
			assert(pos >= _start && pos <= _finish);

			if (_finish == _endofstorage)
			{
				size_t len = pos - _start;

				size_t newcapacity = capacity() == 0 ? 4 : capacity() * 2;
				reserve(newcapacity);
				pos = _start + len;
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}

			*pos = x;
			++_finish;

			return pos;
		}
		iterator erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);

			iterator it = pos + 1;
			while (it != _finish)
			{
				*(it - 1) = *it;
				++it;
			}

			--_finish;

			return pos;
		}

	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _endofstorage = nullptr;
	};

	void print(const vector<int>& v)
	{
		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector1()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		for (size_t i = 0; i < v1.size(); i++)
		{
			v1[i]++;
		}

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		print(v1);
	}

	void test_vector2()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);
		v1.push_back(5);
		v1.push_back(5);
		v1.push_back(5);

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		v1.insert(v1.begin(), 100);

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		/*vector<int>::iterator p = v1.begin() + 3;
		v1.insert(p, 300);*/

		vector<int>::iterator p = v1.begin() + 3;
		//v1.insert(p+3, 300);
		v1.insert(p, 300);
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}
	void test_vector3()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);
		v1.push_back(6);

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		auto it = v1.begin();
		while (it != v1.end())
		{
			if (*it % 2 == 0)
			{
				it = v1.erase(it);
			}
			else
			{
				++it;
			}
		}

		//v1.erase(v1.begin());
		//auto it = v1.begin()+4;
		//v1.erase(it);
		//cout << *it << endl;
		//++it;
		//cout << *it << endl;

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector4()
	{
		vector<int> v;
		v.resize(10, 0);

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;


		int i = 0;
		int j = int();
		int k = int(1);
	}

	void test_vector5()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		vector<int> v1(v);

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		vector<int> v2;
		v2.resize(10, 1);

		v1 = v2;
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector6()
	{
		vector<string> v;
		v.push_back("111111111111111111");
		v.push_back("222222222222222222");
		v.push_back("333333333333333333");
		v.push_back("444444444444444444");
		v.push_back("555555555555555555");

		for (auto& e : v)
		{
			cout << e << " ";
		}
		cout << endl;

		vector<string> v1(v);
		for (auto& e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector7()
	{
		vector<int> v(10u, 1);
		vector<string> v1(10, "1111");

		vector<int> v2(10, 1);



		// vector<int> v;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;


		vector<int> v3(v.begin(), v.end());
		for (auto e : v3)
		{
			cout << e << " ";
		}
		cout << endl;

		string str("hello world");
		vector<char> v4(str.begin(), str.end());
		for (auto e : v4)
		{
			cout << e << " ";
		}
		cout << endl;

		int a[] = { 16,2,77,29 };
		vector<int> v5(a, a + 4);
		for (auto e : v5)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}
