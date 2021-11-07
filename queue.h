#pragma once
#define MAXSIZE 100
typedef int DataType;
/*˳�����*/
struct SqQueue
{
	DataType data[MAXSIZE];
	int front, rear;
};

//��ʼ��
SqQueue InitQueue();

//���
bool enqueue(SqQueue &Q, DataType value);

//����
bool dequeue(SqQueue& Q, DataType value);

//�ӳ���
int lenth_of_queue(SqQueue& Q);


/*����*/
struct LinkNode
{
	DataType data;
	LinkNode* next;
};
struct linkQueue
{
	LinkNode* front;
	LinkNode* rear;
};

//��ʼ��
linkQueue* InitQueue(linkQueue* Q);

//���
bool enqueue(linkQueue &Q, DataType value);

//����
bool dequeue(linkQueue& Q, DataType& value);

//�ӳ���
int lenth_of_queue(linkQueue& Q);

