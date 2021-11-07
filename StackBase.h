#define MAXSIZE 100
typedef int DataType;


/*˳��ջ�Ķ���*/
struct Stack
{
	DataType data[MAXSIZE];
	int top; //ջ��
};


/*��ʼ��ջ*/
void init_stack(Stack& sk);


/*�п�*/
bool empty(Stack& sk);

/*����*/
bool full(Stack& sk);

/*��ջ*/
bool push(Stack& sk, DataType data);

/*��ջ*/
bool pop(Stack& sk, DataType& topdata);

/*ȡջ��Ԫ��*/
DataType front(Stack& sk);

/*��ʽջ�Ķ���*/
struct LinkedStack
{
	DataType data;
	LinkedStack* next;
};

/*��ʽջ��ʼ��*/
LinkedStack* init_stack();

/*�п�*/
bool empty(LinkedStack* lsk);

/*��ջ*/
bool push(LinkedStack*sk, DataType data);

/*��ջ*/
bool pop(LinkedStack*sk, DataType& top_data);



