#include "linked_list.h"
#include <math.h>
#include <iostream>
using namespace std;

/*������ͷ�ڵ�����, ����˳���*/
LNode* create_linked_list(SqList& sl)
{
	/*����ͷ�ڵ� ����ʱ�ڵ�*/
	LNode* head = new LNode;
	head->next = nullptr;
	LNode* p = head;

	//˳���ת����
	for (int i = 0; i < sl.length; i++)
	{
		LNode* temp = new LNode;
		temp->next = NULL;
		temp->data = sl.data[i];

		p->next = temp;
		p = p->next;
	}
	return head;
}

/*��������*/
LNode* create_linked_list()
{
	SqList sl;
	init_sqlist(sl);
	return create_linked_list(sl);
}

/*�������*/
int linked_list_len(LNode* head)
{
	if (head == NULL)
		return 0;
	int len = 0;
	for (LNode* p = head->next; p; p=p->next)
	{
		len++;
	}
	return len;
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


/*����  β�巨*/
void reverse_linked_list(LNode* head)
{/*
    
 */
	if (head != NULL && head->next == NULL && head->next->next == NULL)
		return;
	LNode* p = head->next;
	LNode* f = p->next;
	head->next = NULL;

	while (p != NULL)
	{
		p->next = head->next;
		head->next = p;
		p = f;
		if (f  != NULL)
			f = f->next;
	}
}

/*���ż��������*/
void split_linked_list(LNode* head, LNode* head1, LNode* head2)
{
	LNode* p = head->next;
	LNode* p1 = head1;
	LNode* p2 = head2;
	int c = 1;
	while (p != NULL)
	{

		if (c % 2 == 1)
		{
			p1->next = p;
			p = p->next;
			p1 = p1->next;
			p1->next = NULL;
			c++;
		}
		else {
			p2->next = p;
			p = p->next;
			p2 = p2->next;
			p2->next = NULL;
			c++;
		}
	}

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

/*Ѱ���������Сֵ�ڵ㣬 �������������е�λ��*/
int find_min_in_linkedlist(LNode * head)
{
	int i = 1;
	int cnt = INT_MAX;
	int pos = 0;
	for (LNode*p = head->next; p != NULL; p = p->next)
	{
		if (p->data < cnt)
		{
			cnt = p->data;
			pos = i;
		}
		i++;
	}//end for
	return pos;
}

/*8.  ɾ��������ֵ��С��Ԫ��, ��������СԪ��*/
ElemType delete_min_value(LNode * head)
{
	int cnt = INT_MAX;
	LNode *temp = head;
	LNode*f = head;
	for (LNode*p = head; p->next != NULL; p = p->next)
	{
		if (p->next->data < cnt)
		{
			cnt = p->next->data;
			temp = p;
		}
	}//end for

	f = temp->next;
	temp = f->next;
	f->next = NULL;
	delete f;
	return cnt;
}

/*9. ���ҵ�i���ڵ㣬������ֵ*/
ElemType find_i(LNode * head)
{

	return ElemType();
}

/*����˫����*/
DBLNode * create_double_linked_list()
{
	SqList sl;
	init_sqlist(sl);

	DBLNode *head = new DBLNode;
    head->prior=NULL;
    head->next=NULL;
	DBLNode *p = head;
	for (int i =0;i<sl.length;i++)
	{
		DBLNode *temp = new DBLNode;
		temp->data = sl.data[i];
		temp->prior=p;
		temp->next=NULL;
		p -> next = temp;
		p = p->next;
	}

	return head;
}
/*��ӡ˫����*/
void print_linked_list(DBLNode *head)
{
	for (DBLNode *p = head; p->next != NULL; p = p->next)
	{
		cout << p->next->data <<" " ;
	}
	cout << endl;
}

/*9.  �ڵ�n���ڵ�󣬲���ڵ�*/
void insert_pos_n(DBLNode * head, int n, ElemType value)
{
	DBLNode *p = head;
	for (int i = 1; i <= n; i++)
	{
		if (p == NULL)
			return;
		p = p->next;
	}

	DBLNode *temp = new DBLNode;
	temp->prior = NULL;
	temp->next = NULL;
	temp->data = value;

	
	DBLNode * f = p->next;
	temp->prior = p;
	p->next = temp;
	temp->next = f;
	f->prior =temp;

}

/*
		DBLNode* head = create_double_linked_list();
		print_linked_list(head);
		insert_pos_n(head, 1, -1);
		print_linked_list(head);
		std::cout << "Hello World!\n";

		case1: 1 2 3 4 5 6 7
		����� 1 -1 2 3 4 5 6 7
*/


/*10.  ɾ����n���ڵ�*/

void  delete_pos_n(DBLNode * head,  int n)
{
	DBLNode *p = head;
	for (int i = 1; i <= n; i++)
	{
		if (p == NULL)
			return;

		p = p->next;
	}

	DBLNode *f = p->next;
	
	f->prior = p->prior;
	p->prior->next = f;
	p->prior = NULL;
	p->next = NULL;
	delete p;
	p = NULL;
	
}


/*
	DBLNode* head = create_double_linked_list();
	print_linked_list(head);
	delete_pos_n(head, 2);
	print_linked_list(head);

	case1:  1 2 3 4 5 6
	����� 1 3 4 5 6
*/
//end int


/*�������*/
int find_length(LNode* head)
{
	if (head == NULL || head->next == NULL)
		return 0;
	int c = 1;
	LNode*p = head->next;
	while (p->next != NULL)
	{
		p = p->next;
		c++;
	}
	return c;
}





