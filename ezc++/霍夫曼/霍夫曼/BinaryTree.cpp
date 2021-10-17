#include "BinaryTree.h"
#include<stddef.h>

BinaryTree::BinaryTree(int t)
{
	weight = t;
	LeftChildTree = RightChildTree = NULL;
}

void BinaryTree::MakeTree(BinaryTree t1, BinaryTree t2)
{
	LeftChildTree = &t1;
	RightChildTree = &t2;
}

void BinaryTree::HuffmanTree(BinaryTree * t,int n)
{
	
}
