#pragma once
#include<iostream>
using namespace std;
enum Colour {
	RED,
	BLACK
};
template<class K,class V>
struct RBTreeNode {
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;
	pair<K, V> _kv;
	Colour _col;
	RBTreeNode(const pair<K,V>&kv)
		:_left(nullptr),
		_right(nullptr),
	_parent(nullptr),
		_kv(kv),
		_col(RED){ }

};
template<class K,class V>
struct RBTree {
	typedef RBTreeNode<K, V> Node;
public:
	bool Insert(const pair<K, V>& kv) {
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_col = BLACK;
			return true;
		}
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur) {
			if (cur->_kv.first < kv.first) {
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first) {
				parent = cur;
				cur = cur->_left;
			}
			else  return false;
		}
		cur = new Node(kv);
		cur->_col = RED;
		if (parent->_kv.first < kv.first) {
			parent->_right = cur;
		}
		else parent->_left = cur;
		cur->_parent = parent;
		while (parent && parent->_col == RED) {
			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left) {
				Node* uncle = grandfather->_right; if (uncle && uncle->_col == RED) {
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;
					cur = grandfather;
					parent = cur->_parent;
				}
				else //叔叔不存在或者存在且为黑
				{
					if (cur == parent->_left) {
						Rotate(grandfather);
						parent->_col = BLACK;
						grandfather->_col = RED;

					}
					else {
						RotateL(parent);
						RotateR(grandfather);
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					break;

				}
			}
			else {
				Node* uncle = grandfather->_left;
				if (uncle && uncle->_col == RED) {
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;
					cur = grandfather;
					parent = cur->_parent;
				}
				else {
					if (cur == parent->_right) {
						RotateL(grandfather);
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					else {
						RotateR(parent);
						RotateL(grandfather);
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					break;
				}
			}
		}
		_root->_col = BLACK;
		return true;
	}
	void RotateL(Node* parent) {
		++_rotateCount;
		Node* cur = parent->_right;
		Node* curleft = cur->_left;
		parent->_right = curleft;
		if (curleft)
			curleft->_parent = parent;
		cur->_left = parent;
		Node* ppnode = parent->_parent;
		parent->_parent = cur;
		if (parent == _root) {
			_root = cur;
			cur->_parent = nullptr;
		}
		else {
			if (ppnode->_left == parent) ppnode->_left = cur;
			else ppnode->_right = cur;
			cur->_parent = ppnode;
		}
	}
	void Rotate(Node* parent) {
		++_rotateCount;
		Node* cur = parent->_left;
		Node* curright = cur->_right;
		parent->_left = curright;
		if (curright) {
			curright->_parent = parent;
			Node* ppnode = parent->_parent;
			cur->_right = parent;
			parent->_parent = cur;
			if (ppnode == nullptr) {
				_root = cur;
				cur->_parent = nullptr;
			}
			else {
				if (ppnode->_left = parent) ppnode->_left = cur;
				else ppnode->_right = cur;
				cur->_parent = ppnode;
			}
		}
	}
	bool  CheckColour(Node* root, int blacknum, int benchmark) {
		if (root == nullptr) {
			if (blacknum != benchmark) return false;
			return true;
		}
		if (root->_col = BLACK) ++blacknum;
		if (root->_col == RED && root->_parent && root->_parent->_col == RED)
		{
			cout << root->_kv.first << "出现连续红色节点" << endl;
			return false;
		}
		return CheckColour(root->_left, blacknum, benchmark) && CheckColour(root->_right, blacknum, benchmark);
	}
	bool _IsBalance() {
		return IsBalance(_root);
	}
	bool IsBalance(Node* root) {
		if (root == nullptr) return true;
		if (root->_col != BLACK) return false;
		int benchmark = 0;
		Node* cur = root;
		while (cur) {
			if (cur->_col = BLACK) ++benchmark;
			cur = cur->_left;
		}
		return CheckColour(root, 0, benchmark);
	}
	int	_Height()  return Height(_root);
	int Height(Node* root) {
		if (root == nullptr) return 0;
		int leftHeight = Height(root->_left);
		int rightHeight = Height(root->_right);
		return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
	}
private: Node* _root = nullptr;
public: int _rotateCount = 0;

	};