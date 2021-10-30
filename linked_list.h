#pragma once
#include "SquenceList.h"
/*单链表节点的定义*/
typedef int ElemType;
struct LNode
{
	ElemType data;
	LNode* next;
};

/*1. 创建带头节点链表, 传入顺序表*/
LNode* create_linked_list(SqList& sl);

/*创建链表*/
LNode* create_linked_list();

/*输出链表*/
void print_linked_list(LNode* node);

/*2.  逆序输出*/
void reverse_print(LNode* head);
void reverse_print_linked_list(LNode* head);

/*3.  逆置  头插法*/
void reverse_linked_list(LNode* head);

/*4.  拆分偶数和奇数*/
void split_linked_list(LNode* ori_list, LNode* jishu_list, LNode* oushu_list);

/*5.  链表长度*/
int find_length(LNode* head);

/*6.  合并两个链表, 加入head1 和 head2 中的链表已经有序，将head1和head2 合并为head，让head也有序*/
LNode* merge_linked_list(LNode* l1, LNode* l2);

/*7.  寻找链表的最小值节点， 并返回在链表中的位置*/
int find_min_in_linkedlist(LNode* head);

/*8.  删除链表中值最小的元素*/
void delete_min_value(LNode* head);


/*********************************************************************************************\
*    *          双链表    
\*********************************************************************************************/

struct DBLNode
{
	ElemType data;
	DBLNode* next;
	DBLNode* front;
};

/*创建双链表*/
DBLNode* create_double_linked_list();

/*打印双链表*/
void print_db_linked_list();

/*9.  在第n个节点后，插入节点*/
void insert_pos_n(DBLNode* head, int n, ElemType value);

/*10.  删除第n个节点*/
void delete_pos_n(DBLNode* head);

