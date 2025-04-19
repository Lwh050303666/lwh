#pragma once
#include<assert.h>
namespace bit
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

		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{
		}

		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endofstorage = nullptr;
			}
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tmp = new T[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T) * sz);
					delete[] _start;
				}

				_start = tmp;
				_finish = _start + sz;
				_endofstorage = _start + n;
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

		void erase(iterator pos);

	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
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

		// *p += 10;

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}
