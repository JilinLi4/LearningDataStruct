#pragma once
#include "SquenceList.h"
#include "linked_list.h"
typedef int ElemType;


class StackBase
{

public:
	//��ʼ��
	virtual void init_stack();
	//ѹջ
	virtual bool push(ElemType data);
	//��ջ
	virtual void pop();
	//ȡջ��
	virtual ElemType front();
};


class LinkedListStack : public StackBase
{
public:
	//��ʼ��
	virtual void init_stack();
	//ѹջ
	virtual bool push(ElemType data);
	//��ջ
	virtual void pop();
	//ȡջ��
	virtual ElemType front();

};

