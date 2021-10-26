#include "SquenceList.h"
#include <iostream>
using namespace std;
/*�½�һ��˳���*/
void init_sqlist(SqList& sl)
{
	cout << "������˳����Ԫ�أ����н���" << endl;
	int len = 0;//���ݳ���
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

/*��ӡ˳���*/
void print_sqlist(SqList& l)
{
	for (int i = 0; i < l.length; i++)
	{
		cout << l.data[i] << " ";
	}
	cout << endl;
}

/*�������*/
bool ListInsert(SqList&l, ElemType value, int pos)
{
	//to do
	/*
		SqList sl;  //����һ��˳���
		init_sqlist(sl); //��˳����ж���ֵ��
		cout << "����ǰ��˳���" << endl;
		print_sqlist(sl); //��ӡ˳����е�ֵ
		bool is_success = ListInsert(sl, 10, 0); //����ֵ�� is_success �Ƿ�ɹ�
		cout << "������˳���" << endl;
		print_sqlist(sl);

	*/
	/*
�����������˳����λ��pos������Ԫ�� value, ������ʧ�ܣ������false, ����ɹ�����true
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
/*ɾ���ض�λ��Ԫ�ء�ɾ��˳���λ��Ϊ pos��ֵ�� �����ɹ�����true,����ʧ�ܷ���false*/
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
	���룺
		1 2 3 4 5
	�����
	     2 3 4 5

    case2:
	���룺
		1
	�����
    
	    SqList sl;  //����һ��˳���
		init_sqlist(sl); //��˳����ж���ֵ��
		cout << "ɾ��ǰ��˳���" << endl;
		print_sqlist(sl); //��ӡ˳����е�ֵ
		bool is_success = delete_sqlist(sl,  0);  is_success �Ƿ�ɹ�
		cout << "ɾ�����˳���" << endl;
		print_sqlist(sl);
	*/
}
/*��ֵ���ҡ� ��˳����в��� Ԫ��t, ���ز��ҵ�����λ�ã�������ʧ�ܷ���-1*/
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
		���룺1 2 5 6 3 4 3 5 6 2 6 10 
		�����11
		case2: 1 2 3
		����� -1

		SqList sl;  //����һ��˳���
		init_sqlist(sl); //��˳����ж���ֵ��
		print_sqlist(sl); //��ӡ˳����е�ֵ
		int pos = find_value_pos(sl, 10);
		cout << pos << endl;
	*/

	
/*������С��Ԫ�ص�λ��*/
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
		���룺1 2 5 6 3 4 3 5 6 2 6 10
		�����1
		case2: 1 2 3 -1 -2 
		����� -2

		SqList sl;  //����һ��˳���
		init_sqlist(sl); //��˳����ж���ֵ��
		print_sqlist(sl); //��ӡ˳����е�ֵ
		int pos = find_min_pos(sl);
		cout << pos << endl;
	*/



/*������СԪ�ص�ֵ*/
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
		���룺1 2 5 6 3 4 3 5 6 2 6 10
		�����0
		case2: 1 2 3 -1 -2
		����� 4

		SqList sl;  //����һ��˳���
		init_sqlist(sl); //��˳����ж���ֵ��
		print_sqlist(sl); //��ӡ˳����е�ֵ
		int pos = find_min_pos(sl);
		cout << pos << endl;
	*/
	
