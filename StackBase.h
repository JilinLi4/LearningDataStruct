#pragma once
#include "SquenceList.h"
#include "linked_list.h"
typedef int ElemType;


class StackBase
{

public:
	//≥ı ºªØ
	virtual void init_stack();
	//—π’ª
	virtual bool push(ElemType data);
	//µØ’ª
	virtual void pop();
	//»°’ª∂•
	virtual ElemType front();
};


class LinkedListStack : public StackBase
{
public:
	//≥ı ºªØ
	virtual void init_stack();
	//—π’ª
	virtual bool push(ElemType data);
	//µØ’ª
	virtual void pop();
	//»°’ª∂•
	virtual ElemType front();

};

