#pragma once
/*
	˳�������ݽṹ�Ͳ���
*/

/*˳�������ݽṹ*/
#define MaxSize 100
#include <cmath>
typedef int ElemType;//��������
struct SqList {
	ElemType data[MaxSize];//������
	int length;//��ĳ���
};
//����
/*�½�һ��˳���*/
void init_sqlist(SqList& sl);

/*��ӡ˳���*/
void print_sqlist(SqList& l);
/*
�����������˳����λ��pos������Ԫ�� value, ������ʧ�ܣ������false, ����ɹ�����true
*/
/**/
bool ListInsert(SqList&l, ElemType value, int pos);

/*ɾ���ض�λ��Ԫ�ء�ɾ��˳���λ��Ϊ pos��ֵ�� �����ɹ�����true,����ʧ�ܷ���false*/
bool delete_sqlist(SqList& sl, int pos);

/*��ֵ���ҡ� ��˳����в��� Ԫ��t, ���ز��ҵ�����λ�ã�������ʧ�ܷ���-1*/
int find_value_pos(SqList& sl, ElemType t);

/*������С��Ԫ�ص�λ��*/
int find_min_pos(SqList& sl);

/*������СԪ�ص�ֵ*/
ElemType find_min_value(SqList& sl);

/*��������Ԫ��*/
void swap(SqList& sl, int p1, int p2);

/*��˳�����ɾ����Сֵ��Ԫ�أ� ���ɺ������ر�ɾ��Ԫ�ص�ֵ���ճ���λ�������һ��Ԫ���*/
ElemType delete_min_value(SqList& sl);

