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
/*1.  �½�һ��˳���*/
void init_sqlist(SqList& sl);

/*��ӡ˳���*/
void print_sqlist(SqList& l);

/*2.  �������*/
bool ListInsert(SqList&l, ElemType value, int pos);

/*3.  ɾ���ض�λ��Ԫ��*/
bool delete_sqlist(SqList& sl, int pos);

/*4.  ��ֵ����*/
int find_value_pos(SqList& sl, ElemType t);

/*5.  ������С��Ԫ�ص�λ��*/
int find_min_pos(SqList& sl);

/*6.  ������СԪ�ص�ֵ*/
ElemType find_min_value(SqList& sl);

/*7.  ��������Ԫ��*/
void swap(SqList& sl, int p1, int p2);

/*8.  ��˳�����ɾ����Сֵ��Ԫ�أ� ���ɺ������ر�ɾ��Ԫ�ص�ֵ���ճ���λ�������һ��Ԫ���*/
ElemType delete_min_value(SqList& sl);

