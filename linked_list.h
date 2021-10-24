#pragma once
#include "SquenceList.h"
/*单链表节点的定义*/
typedef int ElemType;
struct LNode
{
	ElemType data;
	LNode* next;
};

/*创建带头节点链表, 传入顺序表*/
LNode* create_linked_list(SqList& sl);

/*创建链表*/
LNode* create_linked_list();

/*输出链表*/
void print_linked_list(LNode* node);

/*逆序输出*/
void reverse_print(LNode* head);
void reverse_print_linked_list(LNode* head);

/*逆置  头插法*/
void reverse_linked_list(LNode* head);

/*拆分偶数和奇数*/
void split_linked_list(LNode* ori_list, LNode* jishu_list, LNode* oushu_list);

/*链表长度*/
int find_length(LNode* head);

/*合并两个链表, 加入head1 和 head2 中的链表已经有序，将head1和head2 合并为head，让head也有序*/
LNode* merge_linked_list(LNode* l1, LNode* l2);

/* 返回 a+b*/
int add(int a, int b);

/* 返回a*b */
int my_mult(int a, int b);