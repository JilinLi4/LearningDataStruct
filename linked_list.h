#pragma once
#include "SquenceList.h"
/*������ڵ�Ķ���*/
typedef int ElemType;
struct LNode
{
	ElemType data;
	LNode* next;
};

/*��������*/
LNode* create_linked_list();

/*�������*/
void print_linked_list(LNode* node);


/*1.  ��˳���ת��Ϊ��ͷ�ڵ�ĵ�����*/
LNode* create_linked_list(SqList& sl);

/*�������*/
void reverse_print(LNode* head);
void reverse_print_linked_list(LNode* head);

/*2. ������Ԫ�ؾ͵�����  ͷ�巨*/
void reverse_linked_list(LNode* head);

/*3.  ������*/
int find_length(LNode* head);


/*4. ������������ż��λ�õ�Ԫ�أ�������ż��λ�õ�ͷ�ڵ�*/
LNode* split_linked_list(LNode* ori_list);



/*�ϲ���������, ����head1 �� head2 �е������Ѿ����򣬽�head1��head2 �ϲ�Ϊhead����headҲ����*/
LNode* merge_linked_list(LNode* l1, LNode* l2);

/* ���� a+b*/
int add(int a, int b);

/* ����a*b */
int my_mult(int a, int b);