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
	if (pos < 0)
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
	return false;
}
/*��ֵ���ҡ� ��˳����в��� Ԫ��t, ���ز��ҵ�����λ�ã�������ʧ�ܷ���-1*/
int find_value_pos(SqList & sl, ElemType t)
{
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

	return 0;
}
/*������С��Ԫ�ص�λ��*/
int find_min_pos(SqList & sl)
{

	/*
		case1:
		���룺1 2 5 6 3 4 3 5 6 2 6 10
		�����1
		case2: 1 2 3 -1 -2 
		����� 4

		SqList sl;  //����һ��˳���
		init_sqlist(sl); //��˳����ж���ֵ��
		print_sqlist(sl); //��ӡ˳����е�ֵ
		int pos = find_min_pos(sl);
		cout << pos << endl;
	*/
	return 0;
}

