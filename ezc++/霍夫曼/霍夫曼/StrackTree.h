#pragma once

class StrackTree
{
public:
	BinaryTree** base;
	int size;

public:
	StrackTree();

	void push(BinaryTree *t);
	BinaryTree *pop();
};

