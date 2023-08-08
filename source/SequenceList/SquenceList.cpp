#include "SquenceList.h"
#include <iostream>
using namespace std;

void init_sqlist(SqList& sl)
{
	cout << "换行结束" << endl;
	int len = 0;
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


void print_sqlist(SqList& l)
{
	for (int i = 0; i < l.length; i++)
	{
		cout << l.data[i] << " ";
	}
	cout << endl;
}


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


int find_value_pos(SqList& sl, ElemType t)
{
	for (int i = 0; i < sl.length; i++)
	{
		if (sl.data[i] == t)
			return i;
	}
	return -1;
}


int find_min_pos(SqList& sl)
{
	int min = INT_MAX; 
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

void swap(SqList& sl, int p1, int p2)
{
	ElemType t = sl.data[p1];
	sl.data[p1] = sl.data[p2];
	sl.data[p2] = t;
}


ElemType delete_min_value(SqList& sl)
{
	if (sl.length <= 0)
	{
		return -1;
	}
	int min_pos = find_min_pos(sl);
	ElemType result = sl.data[min_pos];
	sl.data[min_pos] = sl.data[sl.length - 1];
	sl.length--;
	return result;
}
