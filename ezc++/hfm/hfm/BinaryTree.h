#pragma once
class BinaryTree
{
public:
	int weight;
	BinaryTree *LeftChildTree;
	BinaryTree *RightChildTree;
	BinaryTree *ParentTree;

public:
	BinaryTree(int);
	BinaryTree();
	void MakeTree(BinaryTree t1, BinaryTree t2);
	
};

