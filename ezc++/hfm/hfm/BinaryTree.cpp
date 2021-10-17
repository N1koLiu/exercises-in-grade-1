#include "BinaryTree.h"
#include"stddef.h"
BinaryTree::BinaryTree(int t)
{
	weight = t;
	LeftChildTree = RightChildTree = 0;
}

BinaryTree::BinaryTree()
{
	LeftChildTree = RightChildTree =ParentTree= 0;
}

void BinaryTree::MakeTree(BinaryTree t1, BinaryTree t2)
{
	LeftChildTree = &t1;
	RightChildTree = &t2;
}
