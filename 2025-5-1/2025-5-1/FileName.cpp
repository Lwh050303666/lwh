//void rotateR(Node * parent) {
//	parent->right = cur->left;
//	if (parent == root)
//		cur == root;
//	else if (*ppnode.data > cur)
// 		ppnode->right = cur;
//	else ppnode->left = cur;
//	parent->_parent = cur;
//	
//	
//}

//void ratatel(node* parent) {
//	node* cur = parent->right;
//	node* curleft = cur->left;
//	if (curleft)
//	{
//		parent->right = curleft;   curleft->_parent = parent;
//	}
//	cur->left = parent;
//	if (parent == _root) {
//		_root = cur;
//		cur->parent = nullptr;
//	}
//	else {
//		*ppnode = parent->_parent;
//		if (ppnode->left == parent)
//			cur = ppnode->left
//		else cur = ppnode->right;
//	}
//	parent->_bf = cur->_bf = 0;
//
//}

//void RotateL(Node* parent)
//{
//	Node* cur = parent->right;
//	Node* curleft = cur->left;
//	int bf = curleft->_bf;
//	RotateR(parent->_right);
//	RotateL(parent);
//	if (bf == 0) {
//		cur->_bf = 0;
//		curleft->_bf = 0;
//		parent->_bf = 0;
//	}
//	else if (bf == 1) {
//		cur->_bf = 0;
//		curleft->_bf = 0;
//		parent->_bf = -1;
//	}
//	else if (bf == -1) {
//		cur->_bf = 1;
//		curleft->_bf = 0;
//		parent->_bf = 0;
//	}
//	else assert(false);
//
//}
