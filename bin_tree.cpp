#include "bin_tree.h"
/*先序创建二叉树， 空节点用-1表示*/
BiTreeNode* create_bitree()
{
	cout << "空节点使用-1表示  ";
	SqList sl;
	init_sqlist(sl); 
	BiTreeNode* head = NULL;
	int index = -1;
	head = pre_create_bitree(head, sl, index);
	return head;
}

BiTreeNode* pre_create_bitree(BiTreeNode *head, SqList sl, int& index)
{
	index++;
	if (index >= sl.length)
		return NULL;
	if (sl.data[index] == -1)
		return NULL;
	head = new BiTreeNode;
	head->data = sl.data[index];
	head->left = pre_create_bitree(head->left, sl, index);
	head->right = pre_create_bitree(head->right, sl, index);
	return head;
}
void visit(DataType data)
{
	cout << data << " ";
}
/*先序遍历*/
void pre_order_visit(BiTreeNode * head)
{
	if (head == NULL)
		return;

	visit(head->data);
	pre_order_visit(head->left);
	pre_order_visit(head->right);
}

/*求树的高度*/
int bitree_height(BiTreeNode * head)
{
	if (head == NULL)
		return 0;
	int left_height = bitree_height(head->left);
	int right_height = bitree_height(head->right);
	int height = 0;
	if (left_height > right_height)
		height = left_height;
	else
		height = right_height;
	return height + 1;
}

