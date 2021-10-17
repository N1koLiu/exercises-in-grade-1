#pragma once
class Stack
{
public:
	int StackSize;
	int *StackBase;

public:
	Stack() ;
	~Stack();

	void Push(int);
	int Pop();
	void Show(int &e);

};

