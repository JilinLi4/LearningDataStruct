#include "StackBase.h"

/*初始化栈*/
void init_stack(Stack& sk)
{
	sk.top = -1;
}

/*判空*/
bool empty(Stack& sk)
{
	if (sk.top == -1)
		return true;
	else
		return false;
}

/*进栈*/
bool push(Stack& sk, DataType data)
{
	if (sk.top == MAXSIZE-1)
		return false;
	sk.data[++sk.top]=data;
	return true;
}

/*出栈*/
bool pop(Stack& sk, DataType& topdata)
{
	if (sk.top == -1)
		return false;
	topdata = sk.data[sk.top--];
}

/*取栈顶元素*/
DataType GetTop(Stack& sk)
{
	if(sk.top != -1)
		return sk.data[sk.top];
}

/*链式栈初始化*/
LinkedStack* init_stack()
{
	LinkedStack* head = new LinkedStack;
	head->next = nullptr;
	return head;
}

/*判空*/
bool empty(LinkedStack* lsk)
{
	if (lsk == nullptr && lsk->next == nullptr)
		return true;
}

/*进栈*/
bool push(LinkedStack*sk, DataType data)
{
	LinkedStack* temp = new LinkedStack;
	temp->data = data;
	temp->next = sk->next;
	sk->next = temp;
	return true;
}

/*出栈*/
bool pop(LinkedStack*sk, DataType& top_data)
{
	if (sk == nullptr || sk->next == nullptr)
		return false;
	top_data = sk->next->data;
	LinkedStack* temp = sk->next;
	sk->next = temp->next;
	delete temp;
	temp = nullptr;
}