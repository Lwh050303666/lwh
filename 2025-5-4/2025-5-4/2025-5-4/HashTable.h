#pragma once
#include<vector>
#include<string>
enum STATE {
	EXIST,
	EMPTY,
	DELETY
};
template<class K,class V>
struct HashData {
	pair<K, V>_kv;
	STATE _state = EMPTY;
};
template<class K>
struct DefaultHashFunc {
	size_t operator()(const K& key) {
		return (size_t)key;
	}
};
//struct StringHashFunc
//{
//	size_t operator()(const string& str)
//	{
//		return str[0];
//	}
//};
template<>
struct DefaultHashFunc<string> {
	size_t operator()(const string& str) {
		size_t hash = 0;
		for (auto ch : str) {
			hash *= 131;
			hash += ch;
		}
		return hash;
	}

};

template<class K,class V，class HashFunc=DefaultHashFunc<k>>
class HashTable {
public:HashTable() {
	_table.resize(10);
}
	  bool Insert(const pair<K, V>kv) {
		  if (_n * 10 / _table.size() >= 7) {
			  size_t newSize = _table.size() * 2;
			  //遍历旧表，重新映射到新表
			  HashTable<K, V, HashFunc>newHT;
			  newHT._table.resize(newSize);
			  //遍历旧表的数据插入到新表即可
			  for (size_t i = 0; i < _table.size(); i++) {
				  if (_table[i]._state = EXIST) newHT.Insert(_table[i]._kv);
			  }
			  _table.swap(newHT._table);
		  }
		  //线性探测
		  HashFunc hf;
		  size_t hashi = hf(kv.first) % _table.size();
		  while (_table[hashi]._state == EXIST) {
			  ++hashi;
			  hashi %= _table.size();
		  }
		  _table[hashi]._kv = kv;
		  _table[hashi]._state = EXIST;
		  ++_n;
		  return true;
	  }
	  HashData<const K, V>* Find(const K& key) {
		  //线性探测
		  HashFunc hf;
		  size_t hashi = hf(key) % _table.size();
		  while (_table[hashi]._state != EMPTY) {
			  if (_table[hashi].state = EXIST && _table[hashi]._kv.first == key)
				  return (HashData<const K, V>*) & _table[hashi];
			  ++hashi;
			  hashi %= _table.size();
		  }
		  return nullptr;
	  }
	  bool Erase(const K& key) {
		  HashData<const K, V>* ret = Find(key);
		  if (ret) {
			  ret->_state = DELETE;
			  --_n;
			  return true;
		  }
		  return false;
	  }
private:
	vector<HashData<K, V>>_table;
	size_t _n = 0;//存储有效数据的个数
};