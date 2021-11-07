#pragma once
#include "SquenceList.h"
#include <iostream>
using namespace std;
typedef int DataType;
/*��������ʽ�ṹ*/
struct BiTreeNode
{
	DataType data;
	BiTreeNode* left;
	BiTreeNode* right;
};
/*������������ �սڵ���-1��ʾ*/
BiTreeNode* create_bitree();
/*���򴴽�������*/
BiTreeNode* pre_create_bitree(BiTreeNode *head, SqList sl, int& index);

/*�������*/
void pre_order_visit(BiTreeNode* head);

/*�����ĸ߶�*/
int bitree_height(BiTreeNode* head);