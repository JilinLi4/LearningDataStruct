#include "linked_list.h"

#include <iostream>
using namespace std;

/*创建带头节点链表, 传入顺序表*/
LNode* create_linked_list(SqList& sl)
{
	/*
			LNode* head = create_linked_list();
			print_linked_list(head);
	*/
	
	return NULL;
}

/*创建链表*/
LNode* create_linked_list()
{
	SqList sl;
	init_sqlist(sl);
	return create_linked_list(sl);
}

/*链表长度*/
int linked_list_len(LNode* head)
{
	
	return 1;
}

/*输出链表*/
void print_linked_list(LNode* head)
{
	/* head != NULL*/
	if (head == NULL)
		return;

	LNode* p = head->next;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

/*逆序输出*/
void reverse_print(LNode* head)
{
	if (head == NULL)
		return;
	reverse_print_linked_list(head->next);
}


void reverse_print_linked_list(LNode* head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		reverse_print_linked_list(head->next);
	cout << head->data << " ";
}


/*2. 将链表元素就地逆置  头插法*/
void reverse_linked_list(LNode* head)
{/*
	 case1:
	 输入
	  1 2 3 4 5 6 7 8 9
	  输出： 
	  9 8 7 6 5 4 3 2 1 

	LNode* head = create_linked_list();
	print_linked_list(head);
	reverse_linked_list(head);
	print_linked_list(head);
  
 */
	
}

/*保留单链表中偶数位置的元素，并返回偶数位置的头节点*/
LNode*  split_linked_list(LNode* head)
{
	/*
	case1:
	输入： 1 2 3 4 5 6
	输出： 2 4 6
	case2:
	输入： 1
	输出： 

	LNode* head = create_linked_list();
	print_linked_list(head);
	LNode* oushu_head = split_linked_list(head);
	print_linked_list(oushu_head);
	*/
	
	return NULL;

}

/*合并两个链表, 加入head1 和 head2 中的链表已经有序，将head1和head2 合并为head，让head也有序*/
LNode* merge_linked_list(LNode* l1, LNode* l2)
{
	LNode* result = new LNode;
	LNode* p = result;
	l1 = l1->next;
	l2 = l2->next;

		while (l1 && l2)
		{
			if (l1->data < l2->data)
			{
				p->next = l1;
				l1 = l1->next;
				p = p->next;
				p->next = NULL;
			}
			else {
				p->next = l2;
				l2 = l2->next;
				p = p->next;
				p->next = NULL;
			}
		}

		if (l1 != NULL) 
			p->next = l1;

		if (l2 != NULL) 
			p->next = l2;
	return result;
}

int add(int a, int b)
{
	int result = a + b;
	return result;
}

int my_mult(int a, int b)
{
	return a*b;
}

/*链表长度*/
int find_length(LNode* head)
{
	/*
		case1: 1 2 3 4 5 6 7 8 9
		输出： 9

	*/
	
	return 0;
}





