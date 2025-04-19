#pragma once
namespace lwh
{
	template<class T>
	struct list_node
	{
		list_node<T>* _next;
		list_node<T>* _prev;
		T _val;

		list_node(const T& val = T())
			:_next(nullptr)
			, _prev(nullptr)
			, _val(val)
		{
		}
	};

	template<class T>
	struct __list_iterator
	{
		typedef list_node<T> Node;
		Node* _node;

		__list_iterator(Node* node)
			:_node(node)
		{
		}

		T& operator*()
		{
			return _node->_val;
		}

		__list_iterator<T>& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		__list_iterator<T> operator++(int)
		{
			__list_iterator<T> tmp(*this);

			_node = _node->_next;

			return tmp;
		}

		bool operator!=(const __list_iterator<T>& it)
		{
			return _node != it._node;
		}

		bool operator==(const __list_iterator<T>& it)
		{
			return _node == it._node;
		}
	};

	template<class T>
	struct __list_const_iterator
	{
		typedef list_node<T> Node;
		Node* _node;

		__list_const_iterator(Node* node)
			:_node(node)
		{
		}

		const T& operator*()
		{
			return _node->_val;
		}

		__list_const_iterator<T>& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		__list_const_iterator<T> operator++(int)
		{
			__list_const_iterator<T> tmp(*this);

			_node = _node->_next;

			return tmp;
		}

		bool operator!=(const __list_const_iterator<T>& it)
		{
			return _node != it._node;
		}

		bool operator==(const __list_const_iterator<T>& it)
		{
			return _node == it._node;
		}
	};

	template<class T>
	class list
	{
		typedef list_node<T> Node;

	public:
		typedef __list_iterator<T> iterator;
		iterator begin()
		{
			//return _head->_next;
			return iterator(_head->_next);
		}

		iterator end()
		{
			return _head;
			//return iterator(_head);
		}

		list()
		{
			_head = new Node;
			_head->_prev = _head;
			_head->_next = _head;
		}

		~list()
		{
			
		}

		void push_back(const T& x)
		{
			Node* tail = _head->_prev;
			Node* newnode = new Node(x);

			tail->_next = newnode;
			newnode->_prev = tail;

			newnode->_next = _head;
			_head->_prev = newnode;
		}

		void pop_back();

		void insert(iterator pos, const T& x);
		void erase(iterator pos);
	private:
		Node* _head;
	};

	void test_list1()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		list<int>::iterator it = lt.begin();

		while (it != lt.end())
		{
			(*it) += 1;
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : lt)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}
