#include "SquenceList.h"
#include <iostream>
using namespace std;
/*新建一个顺序表*/
void init_sqlist(SqList& sl)
{
	cout << "请输入顺序表的元素，换行结束" << endl;
	int len = 0;//数据长度
	ElemType t;
	while (cin >> t)
	{

		sl.data[len] = t;
		len++;
		if (cin.get() == '\n')
			break;

	}
	sl.length = len;
}

/*打印顺序表*/
void print_sqlist(SqList& l)
{
	for (int i = 0; i < l.length; i++)
	{
		cout << l.data[i] << " ";
	}
	cout << endl;
}

/*插入操作*/
bool ListInsert(SqList&l, ElemType value, int pos)
{
	//to do
	/*
		SqList sl;  //定义一个顺序表
		init_sqlist(sl); //向顺序表中读入值。
		cout << "插入前的顺序表" << endl;
		print_sqlist(sl); //打印顺序表中的值
		bool is_success = ListInsert(sl, 10, 0); //插入值， is_success 是否成功
		cout << "插入后的顺序表" << endl;
		print_sqlist(sl);

	*/

	cout << "ListInsert" << endl;
	return true;

}

