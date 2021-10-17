#pragma once
#include"StrackTree.h"
class BinaryTree
{
public:
	int weight;
	BinaryTree *LeftChildTree;
	BinaryTree *RightChildTree;

public:
	BinaryTree(int);
	void MakeTree(BinaryTree t1, BinaryTree t2);
	void HuffmanTree(BinaryTree * t,int n);

};

