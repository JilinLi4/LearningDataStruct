#pragma once
#include "SquenceList.h"
/*������ڵ�Ķ���*/
typedef int ElemType;
struct LNode
{
	ElemType data;
	LNode* next;
};

/*1. ������ͷ�ڵ�����, ����˳���*/
LNode* create_linked_list(SqList& sl);

/*��������*/
LNode* create_linked_list();

/*�������*/
void print_linked_list(LNode* node);

/*2.  �������*/
void reverse_print(LNode* head);
void reverse_print_linked_list(LNode* head);

/*3.  ����  ͷ�巨*/
void reverse_linked_list(LNode* head);

/*4.  ���ż��������*/
void split_linked_list(LNode* ori_list, LNode* jishu_list, LNode* oushu_list);

/*5.  ������*/
int find_length(LNode* head);

/*6.  �ϲ���������, ����head1 �� head2 �е������Ѿ����򣬽�head1��head2 �ϲ�Ϊhead����headҲ����*/
LNode* merge_linked_list(LNode* l1, LNode* l2);

/*7.  Ѱ���������Сֵ�ڵ㣬 �������������е�λ��*/
int find_min_in_linkedlist(LNode* head);

/*8.  ɾ��������ֵ��С��Ԫ��*/
void delete_min_value(LNode* head);


/*********************************************************************************************\
*    *          ˫����    
\*********************************************************************************************/

struct DBLNode
{
	ElemType data;
	DBLNode* next;
	DBLNode* front;
};

/*����˫����*/
DBLNode* create_double_linked_list();

/*��ӡ˫����*/
void print_db_linked_list();

/*9.  �ڵ�n���ڵ�󣬲���ڵ�*/
void insert_pos_n(DBLNode* head, int n, ElemType value);

/*10.  ɾ����n���ڵ�*/
void delete_pos_n(DBLNode* head);

