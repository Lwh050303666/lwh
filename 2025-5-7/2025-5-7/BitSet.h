#pragma once
#include<vector>

namespace bit
{
	template<size_t N>
	class bitset
	{
	public:
		bitset()
		{
			_a.resize(N / 32 + 1);
		}

		// x映射的那个标记成1
		void set(size_t x)
		{
			size_t i = x / 32;
			size_t j = x % 32;

			_a[i] |= (1 << j);
		}

		// x映射的那个标记成0
		void reset(size_t x)
		{
			size_t i = x / 32;
			size_t j = x % 32;

			_a[i] &= (~(1 << j));
		}

		bool test(size_t x)
		{
			size_t i = x / 32;
			size_t j = x % 32;

			return _a[i] & (1 << j);
		}
	private:
		vector<int> _a;
	};

	template<size_t N>
	class twobitset
	{
	public:
		void set(size_t x)
		{
			// 00 -> 01
			if (!_bs1.test(x) && !_bs2.test(x))
			{
				_bs2.set(x);
			} // 01 -> 10
			else if (!_bs1.test(x) && _bs2.test(x))
			{
				_bs1.set(x);
				_bs2.reset(x);
			}
			// 本身10代表出现2次及以上，就不变了
		}

		bool is_once(size_t x)
		{
			return !_bs1.test(x) && _bs2.test(x);
		}
	private:
		bitset<N> _bs1;
		bitset<N> _bs2;
	};
}
