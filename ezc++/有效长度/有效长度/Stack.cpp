#include "Stack.h"
#include"windows.h"
Stack::Stack()
{
	StackSize = 1;
	StackBase = (int*)malloc(sizeof(int));
	*StackBase = -1;
}

Stack::~Stack()
{

	delete[] StackBase;
	StackBase = NULL;
	StackSize = 0;
}

void Stack::Push(int e)
{
	StackSize++;
	int *p;
	
	StackBase=(int *)realloc(StackBase,StackSize*sizeof(int));
	p = StackBase+StackSize-1;
	*p = e;
}

int Stack::Pop()
{
	int *p = StackBase + StackSize-1;
	int e = *p;
	StackSize--;
	StackBase = (int *)realloc(StackBase, StackSize * sizeof(int));
	return e;
}

void Stack::Show(int &e)
{
	int *p = StackBase;
	p = p + StackSize - 1;
	e = *p;
}

