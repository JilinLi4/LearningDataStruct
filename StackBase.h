#define MAXSIZE 100
typedef int DataType;


/*顺序栈的定义*/
struct Stack
{
	DataType data[MAXSIZE];
	int top; //栈顶
};


/*初始化栈*/
void init_stack(Stack& sk);


/*判空*/
bool empty(Stack& sk);

/*判满*/
bool full(Stack& sk);

/*进栈*/
bool push(Stack& sk, DataType data);

/*出栈*/
bool pop(Stack& sk, DataType& topdata);

/*取栈顶元素*/
DataType front(Stack& sk);

/*链式栈的定义*/
struct LinkedStack
{
	DataType data;
	LinkedStack* next;
};

/*链式栈初始化*/
LinkedStack* init_stack();

/*判空*/
bool empty(LinkedStack* lsk);

/*进栈*/
bool push(LinkedStack*sk, DataType data);

/*出栈*/
bool pop(LinkedStack*sk, DataType& top_data);



