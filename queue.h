#pragma once
#define MAXSIZE 100
typedef int DataType;
/*顺序队列*/
struct SqQueue
{
	DataType data[MAXSIZE];
	int front, rear;
};

//初始化
SqQueue InitQueue();

//入队
bool enqueue(SqQueue &Q, DataType value);

//出队
bool dequeue(SqQueue& Q, DataType value);

//队长度
int lenth_of_queue(SqQueue& Q);


/*链队*/
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

//初始化
linkQueue* InitQueue(linkQueue* Q);

//入队
bool enqueue(linkQueue &Q, DataType value);

//出队
bool dequeue(linkQueue& Q, DataType& value);

//队长度
int lenth_of_queue(linkQueue& Q);

