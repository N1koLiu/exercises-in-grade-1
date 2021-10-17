#include "StrackTree.h"
#include"BinaryTree.h"
#include<stddef.h>
#include"windows.h"


StrackTree::StrackTree()
{
	base = NULL;
	size = 0;
}

void StrackTree::push(BinaryTree *t)
{
	size++;
	if (size = 1) {
		base = (BinaryTree **)malloc(sizeof(BinaryTree *));
	}
	else {
		base = (BinaryTree **)realloc(base, size * sizeof(BinaryTree *));
	}
	*(base + size - 1) = t;
}

BinaryTree * StrackTree::pop()
{
	BinaryTree *p;
	if (size > 0) {
		size--;
		p = *(base + size);
		
		base = (BinaryTree **)realloc(base, size * sizeof(BinaryTree *));
		return p;
	
	}
	else {
		return NULL;
	}
	
	
}
