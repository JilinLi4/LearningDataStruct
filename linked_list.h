#pragma once
#include "SquenceList.h"
/*单链表节点的定义*/
typedef int ElemType;
struct LNode
{
	ElemType data;
	LNode* next;
};

/*创建链表*/
LNode* create_linked_list();

/*输出链表*/
void print_linked_list(LNode* node);


/*1.  将顺序表转化为带头节点的单链表*/
LNode* create_linked_list(SqList& sl);

/*逆序输出*/
void reverse_print(LNode* head);
void reverse_print_linked_list(LNode* head);

/*2. 将链表元素就地逆置  头插法*/
void reverse_linked_list(LNode* head);

/*3.  链表长度*/
int find_length(LNode* head);


/*4. 保留单链表中偶数位置的元素，并返回偶数位置的头节点*/
LNode* split_linked_list(LNode* ori_list);



/*合并两个链表, 加入head1 和 head2 中的链表已经有序，将head1和head2 合并为head，让head也有序*/
LNode* merge_linked_list(LNode* l1, LNode* l2);

/* 返回 a+b*/
int add(int a, int b);

/* 返回a*b */
int my_mult(int a, int b);