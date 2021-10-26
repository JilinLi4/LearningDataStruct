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
	/*
插入操作。在顺序表的位置pos处插入元素 value, 若插入失败，则输出false, 插入成功返回true
*/
	if (pos < 0 || l.length == MaxSize)
	{
		return false;
	}
	for (int i = l.length - 1; i > pos; i--)
	{
		l.data[l.length] = l.data[i];
	}
	l.data[pos] = value;
	
	
	cout << "ListInsert" << endl;
	return true;

}
/*删除特定位置元素。删除顺序表，位置为 pos的值， 操作成功返回true,操作失败返回false*/
bool delete_sqlist(SqList & sl, int pos)
{
	if (pos < 0)
	{
		return false;
	}
	for (int i = pos; i < sl.length; i++)
	{
		sl.data[i] = sl.data[i + 1];
	}
	sl.length--;
	/*
	// 
	case1:
	输入：
		1 2 3 4 5
	输出：
	     2 3 4 5

    case2:
	输入：
		1
	输出：
    
	    SqList sl;  //定义一个顺序表
		init_sqlist(sl); //向顺序表中读入值。
		cout << "删除前的顺序表" << endl;
		print_sqlist(sl); //打印顺序表中的值
		bool is_success = delete_sqlist(sl,  0);  is_success 是否成功
		cout << "删除后的顺序表" << endl;
		print_sqlist(sl);
	*/
}
/*按值查找。 在顺序表中查找 元素t, 返回查找的索引位置，若查找失败返回-1*/
int find_value_pos(SqList & sl, ElemType t)
{
	for (int pose = 0; pose < sl.length; pose++) 
	{
		if (sl.data[pose] == t)
		{
			return pose;
		}
	}
	return -1;
}

	/*
	    case1:
		输入：1 2 5 6 3 4 3 5 6 2 6 10 
		输出：11
		case2: 1 2 3
		输出： -1

		SqList sl;  //定义一个顺序表
		init_sqlist(sl); //向顺序表中读入值。
		print_sqlist(sl); //打印顺序表中的值
		int pos = find_value_pos(sl, 10);
		cout << pos << endl;
	*/

	
/*查找最小的元素的位置*/
int find_min_pos(SqList & sl)
{
	int cnt = 100000;
	int pos = 0;
	for (int i = 0; i < sl.length; i++)
	{
		if (sl.data[i] < cnt)
		{
			cnt = sl.data[i];
			pos = i;
		}	
	}
	return pos;
}
	/*
		case1:
		输入：1 2 5 6 3 4 3 5 6 2 6 10
		输出：1
		case2: 1 2 3 -1 -2 
		输出： -2

		SqList sl;  //定义一个顺序表
		init_sqlist(sl); //向顺序表中读入值。
		print_sqlist(sl); //打印顺序表中的值
		int pos = find_min_pos(sl);
		cout << pos << endl;
	*/



/*查找最小元素的值*/
ElemType find_min_value(SqList & sl)
{
	int cnt = INT_MAX;
	for (int i = 0; i < sl.length; i++)
	{

		if (sl.data[i] < cnt)
		{
			cnt = sl.data[i];
		}

	}
	return cnt;
}
	/*
		case1:
		输入：1 2 5 6 3 4 3 5 6 2 6 10
		输出：0
		case2: 1 2 3 -1 -2
		输出： 4

		SqList sl;  //定义一个顺序表
		init_sqlist(sl); //向顺序表中读入值。
		print_sqlist(sl); //打印顺序表中的值
		int pos = find_min_pos(sl);
		cout << pos << endl;
	*/
	
