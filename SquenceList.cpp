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

	cout << "ListInsert" << endl;
	return true;

}

