#include "linked_list.h"

#include <iostream>
using namespace std;

/*������ͷ�ڵ�����, ����˳���*/
LNode* create_linked_list(SqList& sl)
{
	/*
			LNode* head = create_linked_list();
			print_linked_list(head);
	*/
	
	return NULL;
}

/*��������*/
LNode* create_linked_list()
{
	SqList sl;
	init_sqlist(sl);
	return create_linked_list(sl);
}

/*������*/
int linked_list_len(LNode* head)
{
	
	return 1;
}

/*�������*/
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

/*�������*/
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


/*2. ������Ԫ�ؾ͵�����  ͷ�巨*/
void reverse_linked_list(LNode* head)
{/*
	 case1:
	 ����
	  1 2 3 4 5 6 7 8 9
	  ����� 
	  9 8 7 6 5 4 3 2 1 

	LNode* head = create_linked_list();
	print_linked_list(head);
	reverse_linked_list(head);
	print_linked_list(head);
  
 */
	
}

/*������������ż��λ�õ�Ԫ�أ�������ż��λ�õ�ͷ�ڵ�*/
LNode*  split_linked_list(LNode* head)
{
	/*
	case1:
	���룺 1 2 3 4 5 6
	����� 2 4 6
	case2:
	���룺 1
	����� 

	LNode* head = create_linked_list();
	print_linked_list(head);
	LNode* oushu_head = split_linked_list(head);
	print_linked_list(oushu_head);
	*/
	
	return NULL;

}

/*�ϲ���������, ����head1 �� head2 �е������Ѿ����򣬽�head1��head2 �ϲ�Ϊhead����headҲ����*/
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

/*������*/
int find_length(LNode* head)
{
	/*
		case1: 1 2 3 4 5 6 7 8 9
		����� 9

	*/
	
	return 0;
}





