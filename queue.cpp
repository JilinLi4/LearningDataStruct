#include "queue.h"
//��ʼ��
SqQueue InitQueue()
{
	SqQueue que;
	que.front = que.rear = 0;
	return que;
}

//���
bool enqueue(SqQueue &Q, DataType value)
{
	if ((Q.rear + 1) % MAXSIZE == Q.front)
		return false;
	Q.data[Q.rear]= value;
	Q.rear = (Q.rear + 1) % MAXSIZE;
	return true;
}

//����
bool dequeue(SqQueue& Q, DataType value)
{
	if (Q.rear == Q.front)
		return false;

	Q.data[Q.rear] = value;
	return true;
}

//�ӳ���
int lenth_of_queue(SqQueue& Q)
{
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

/* ���Ӳ���*/

//��ʼ��
linkQueue* InitQueue(linkQueue* Q)
{
	Q->front = new LinkNode;
	Q->front->next = nullptr;
	Q->rear = Q->front;
	return Q;
}

//���
bool enqueue(linkQueue &Q, DataType value)
{
	LinkNode* temp = new LinkNode;
	temp->data = value;
	temp->next = nullptr;

	Q.rear->next = temp;
	Q.rear = Q.rear->next;
	return true;
}

//����
bool dequeue(linkQueue& Q, DataType& value)
{
	if (Q.rear == Q.front)
		return false;
	value = Q.front->next->data;

	if (Q.front->next == Q.rear)
		Q.rear = Q.front;

	LinkNode* target = Q.front->next;
	Q.front->next = target->next;
	delete target;
	return true;
}

//�ӳ���
int lenth_of_queue(linkQueue& Q)
{
	if (Q.front == Q.rear)
		return 0;

	LinkNode* p = Q.front;
	int len = 0;
	for (LinkNode *p = Q.front->next; p; p=p->next)
	{
		len++;
		if (p == Q.rear)
			break;
	}  
	return len;
}
