#pragma once
#include "SquenceList.h"
#include <iostream>
using namespace std;
typedef int DataType;
/*二叉树链式结构*/
struct BiTreeNode
{
	DataType data;
	BiTreeNode* left;
	BiTreeNode* right;
};
/*创建二叉树， 空节点用-1表示*/
BiTreeNode* create_bitree();
/*先序创建二叉树*/
BiTreeNode* pre_create_bitree(BiTreeNode *head, SqList sl, int& index);

/*先序遍历*/
void pre_order_visit(BiTreeNode* head);

/*求树的高度*/
int bitree_height(BiTreeNode* head);