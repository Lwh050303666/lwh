#pragma once
#include<iostream>
using namespace std;
//template<class k,class v>
//struct AVLTreeNode {
//	pair<k, v>_kv;
//	AVLTreeNode<k, v>* _left;
//	AVLTreeNode<k, v>* _right;
//	AVLTreeNode<k, v>* _parent;
//	int _bf;
//	AVLTreeNode(const pair<k, v>& kv)
//		:_kv(kv),
//		_left(nullptr),
//		_right(nullptr),
//		_parent(nullptr),
//		_bf(0) {
//
//	}
//};
//template<class k,class v>
//class AVLTree {
//	typedef AVLTreeNode<k, v> Node;
//public:bool Insert(const pair<k, v>& kv) {
//	if (_root = nullptr) {
//		_root = new Node(kv);
//		return true;
//	}
//	Node* cur = _root;
//	while (cur) {
//		if (cur->_kv.first < kv.first) {
//			parent = cur;
//			cur = cur->_right;
//		}
//		else if (cur->_kv.first > kv.first) {
//			parent = cur;
//			cur = cur->_left;
//
//		}
//		else return false;
//	}
//}
//	  cur = new Node(kv);
//	  if (parent->_kv.first < kv.first)  parent->_right = cur;
//	  else parent->_left = cur;
//	  cur->_parent = parent;
//	  //更新平衡因子
//	  while (parent)
//	  {
//		  if (cur == parent->_left)
//			  parent->_bf--;
//		  else parent->_bf++;
//		  if (parent->_bf == 0) break;
//		  else if (parent->_bf == 1 || parent->_bf == -1) {
//			  cur = parent;
//			  parent = parent->_parent;
//		  }
//		  else if (parent->_bf == 2 || parent->_bf == -2)
//		  {//子树不平衡了，需要旋转
//			  if (parent->bf == 2 && cur->_bf == 1)
//				  RotateL(parent);
//			  break;
//		  }
//		  else assert(false);
//	  }
//	  return true;
//}
//void RotateL(Node* parent)
//{
//	Node* cur = parent->_right;
//	Node* curleft = cur->_left;
//	parent->_right = curleft;
//	if (curleft) curleft->_parent = parent;
//	cur->_left = parent;
//	Node* ppnode = parent->_parent;
//	parent->_parent = cur;
//	if (parent == _root) {
//		_root = cur;
//		cur->parnet = nullptr;
//	}
//	else {
//		if (ppnode->_left = parent) ppnode_ > left = cur;
//		else ppnode->_right = cur;
//		cur->parent = ppnode;
//	}
//	parent->_bf = cur->_bf = 0;
//}
//void RotateR(Node* parent) {
//	Node* cur = parent->_left;
//	Node* curright = cur->_right;
//	parent->_left = curright;
//	if (curright)
//		curright->_parent = parent;
//
//	Node* ppnode = parent->_parent;
//	cur->_right = parent;
//
//	if (ppnode == nullptr)
//	{
//		_root = cur;
//		cur->_parent = nullptr;
//	}
//	else
//	{
//		if (ppnode->_left == parent)
//		{
//			ppnode->_left = cur;
//		}
//		else
//		{
//			ppnode->_right = cur;
//		}
//
//		cur->_parent = ppnode;
//	}
//
//	parent->_bf = cur->_bf = 0;
//}
//void RotateRL(Node* parent) {
//	Node* cur = parent->right;
//	Node* curleft = cur->_left;;
//	int bf = curleft->_bf;
//	RotateR(parent->right);
//	RotateL(parent);
//	if (bf == 0) {
//		cur->_bf = 0;
//		curleft->_left = 0;
//		parent->_bf = 0;
//	}
//	else if (bf == 1) {
//		cur->_bf = 0;
//		curleft->_bf = 0;
//		parent->_bf = 1;
//
//	}
//	else if (bf == -1) {
//		cu->_bf = 1;
//		curleft->_bf = 0;
//		parent->_bf = 0;
//
//
//	}
//	else assert(false);
//}
//void RotateLR(Node* parent) {
//
//
//
//}
//
//
//
//
//
//private: Node* _root = nullptr;
//
//
//};
