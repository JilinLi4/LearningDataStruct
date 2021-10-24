#pragma once
#include "SquenceList.h"
/*������ڵ�Ķ���*/
typedef int ElemType;
struct LNode
{
	ElemType data;
	LNode* next;
};

/*������ͷ�ڵ�����, ����˳���*/
LNode* create_linked_list(SqList& sl);

/*��������*/
LNode* create_linked_list();

/*�������*/
void print_linked_list(LNode* node);

/*�������*/
void reverse_print(LNode* head);
void reverse_print_linked_list(LNode* head);

/*����  ͷ�巨*/
void reverse_linked_list(LNode* head);

/*���ż��������*/
void split_linked_list(LNode* ori_list, LNode* jishu_list, LNode* oushu_list);

/*������*/
int find_length(LNode* head);

/*�ϲ���������, ����head1 �� head2 �е������Ѿ����򣬽�head1��head2 �ϲ�Ϊhead����headҲ����*/
LNode* merge_linked_list(LNode* l1, LNode* l2);

/* ���� a+b*/
int add(int a, int b);

/* ����a*b */
int my_mult(int a, int b);