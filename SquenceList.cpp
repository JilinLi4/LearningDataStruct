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
	if (pos < 0 || pos > l.length)
		return false;
	if (l.length == MaxSize)
		return false;
	for (int  i = l.length; i >pos; i--)
	{
		l.data[i] = l.data[i - 1];
	}
	l.data[pos] = value;
	l.length++;
	return true;
}

/*删除特定位置元素*/
bool delete_sqlist(SqList& sl, int pos)
{
	if (pos < 0 || pos >= sl.length)
		return false;
	for (int i = pos; i < sl.length; i++)
	{
		sl.data[i] = sl.data[i + 1];
	}
	sl.length--;
	return true;
}

/*按值查找*/
int find_value_pos(SqList& sl, ElemType t)
{
	for (int i = 0; i < sl.length; i++)
	{
		if (sl.data[i] == t)
			return i;
	}
	return -1;
}

/*查找最小的元素的位置*/
int find_min_pos(SqList& sl)
{
	int min = INT_MAX; //最大的INT
	int min_pos = -1;
	for (int i = 0; i <sl.length; i++)
	{
		if (min > sl.data[i]) {
			min = sl.data[i];
			min_pos = i;
		}
	}
	return min_pos;
}

/*查找最小元素的值*/
ElemType find_min_value(SqList& sl)
{
	ElemType min_value = INT_MAX;
	for (int i = 0; i < sl.length; i++)
	{
		if (sl.data[i] < min_value)
			min_value = sl.data[i];
	}
	return min_value;
}

/*交换两个元素*/
void swap(SqList& sl, int p1, int p2)
{
	ElemType t = sl.data[p1];
	sl.data[p1] = sl.data[p2];
	sl.data[p2] = t;
}

/*从顺序表中删除最小值的元素， 并由函数返回被删除元素的值，空出的位置由最后一个元素填补*/
ElemType delete_min_value(SqList& sl)
{
	if (sl.length <= 0)
	{
		cout << "执行出错" << endl;
		return -1;
	}
	int min_pos = find_min_pos(sl);
	ElemType result = sl.data[min_pos];
	sl.data[min_pos] = sl.data[sl.length - 1];
	sl.length--;
	return result;
}
