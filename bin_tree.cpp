#include "bin_tree.h"
#include<algorithm>
/*1.先序创建二叉树， 空节点用-1表示*/
BiTreeNode* create_bitree()
{
	cout << "空节点用-1表示";
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
	//*1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1*/
	if (index >= sl.length)
	{
		return NULL;
	}
	if (sl.data[index] == -1)
	{
		return NULL;
	}

	head = new BiTreeNode;
	head->data = sl.data[index];

	head->left=pre_create_bitree(head->left, sl, index);
	head->right=pre_create_bitree(head->right, sl, index);
	return head;

}
void visit(DataType data)
{
	cout << data << " ";
}
void visit(BiTreeNode* p)
{
	visit(p->data);
}

/*1.先序遍历
case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
输出： 1 2 3 4 6 7 5
case2: 1 -1 -1
输出：1

BiTreeNode* head = create_bitree();
pre_order_visit(head);
cout << endl;

*/
void pre_order_visit(BiTreeNode * head)
{
	if (head != NULL)
	{
		visit(head->data);
		pre_order_visit(head->left);
		pre_order_visit(head->right);
	}
}




/*2.求树的高度
case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
输出： height : 4
case2: 1 -1 -1
输出：height : 1

BiTreeNode* head = create_bitree();
pre_order_visit(head);
cout << endl;
int btree_height = bitree_height(head);
cout << "height: " << btree_height << endl;
*/
int bitree_height(BiTreeNode * head)
{
	int height = 0;
	if (head == NULL)
	{
		return 0;
	}
	else (head != NULL);
	{
		int height_left = bitree_height(head->left);
		int height_right = bitree_height(head->right);
		height = max(height_left, height_right) +1;
	}
	return height;
}

/*3. 假设二叉树采用二叉链表存储结构存储，试设计一个算法，计算一颗给定二叉树的所有双分支节点
case1: 1 -1 -1 
输出：双分支数量：0
case2: 1 2 -1 -1 3 -1 -1
输出： 双分支数量： 1
case3:  1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
输出： 双分支数量： 3

BiTreeNode* head = create_bitree();
pre_order_visit(head);
cout << endl;
int btree_height = find_double_branch_count(head);
cout << "双分支数量: " << btree_height << endl;

*/
int find_double_branch_count(BiTreeNode * head)
{
	if (head == NULL)
		return 0;
	int  i = 0;
	/*我自己是不是双分支， 让子节点数， 三个加起来*/

	/*自己是不是？*/
	if (head->left && head->right)
		i++;
	int i_left = find_double_branch_count(head->left);
	int i_right = find_double_branch_count(head->right);
	i = i_left + i_right + i;
	return i;
}



/*4. 假设二叉树采用二叉链表存储结构存储，编写一个把树B中所有节点的左右分支交换的函数
case1:1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
输出：1 3 5 4 7 6 2
*/
void swap_btree(BiTreeNode * head)
{
	if (head == NULL)
		return;
	else
	{
		BiTreeNode*p = head->left;
		head->left = head->right;
		head ->right = p;

		swap_btree(head->left);
		swap_btree(head->right);
		
	}

}
/*5 计算二叉树的叶子节点
	case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
	输出： 叶子节点： 4
	case2: 1 -1 -1;
	输出： 叶子节点： 1

	BiTreeNode* head = create_bitree();
	pre_order_visit(head);
	cout << endl;
	int btree_height = bitree_leaf_number(head);
	cout << "叶子数量: " << btree_height << endl;
*/
int bitree_leaf_number(BiTreeNode * head)
{
	if (head == NULL)
		return 0;
	int i = 0;
	if (head->right == NULL && head->left == NULL)
	{
		return 1;
	}
	else
	{
		int i_left = bitree_leaf_number(head->left);
		int i_right = bitree_leaf_number(head->right);
		i = i_left + i_right;
		return i;
	}

}


/*6 计算二叉树的所有节点数
	case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
	输出：7
	BiTreeNode* head = create_bitree();
	pre_order_visit(head);
	cout << endl;
	int btree_height = bitree_node_number(head);
	cout << "数量: " << btree_height << endl;
	*/
int bitree_node_number(BiTreeNode * head)
{
	if (head == NULL)
		return 0;
	int i = 0;
	int i_left = bitree_node_number(head->left);
	int i_right = bitree_node_number(head->right);
	i = i_left + i_right + 1;
	return i;
}




/*7 计算二叉树的路径和，如下列三颗树的路径分别为： 0， 2， 3
		
	O        O              O
			  /   \           /   \
			O    O      O    O
						   /
						 O

	case1: 1 -1 -1
	输出：0
	case2:  1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
	输出： 6
	   
	BiTreeNode* head = create_bitree();
	pre_order_visit(head);
	cout << endl;
	int btree_height = bitree_route_number(head);
	cout << "路径数量: " << btree_height << endl;
*/
int bitree_route_number(BiTreeNode* head)
{
	int i = 0;
	if (head == NULL)
	{
		return 0;
	}
	if (head->left != NULL && head->right != NULL)
	{
		i =  2;	
	}
	else if(head->left!=NULL || head->right!=NULL)
	{
		i=1;
	}
	else
	{
		i = 0;
	}
	i = bitree_route_number(head->left)+i;
	i= bitree_route_number(head->right) + i;
	
	return i;
}
/* 8 带权路径长度是二叉树中所有叶节点的带权路径长度之和。给定一颗二叉树，在叶节点的 data中保存
改节点的权值 
	

BiTreeNode* head = create_bitree();
cout << endl;
pre_order_visit(head);
cout << endl;
level_order(head);
cout << endl;
int wpl = WPL(head, 0);
cout << " WPL:  " << wpl << endl;

	case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
	输出：51
	case2: 1 -1 -1 
	输出： 0

*/
int WPL(BiTreeNode * T, int d)
{
	if (T == NULL)
		return 0;
	if (T->left == NULL && T->right == NULL)
		return d * T->data;

	int i_0= WPL(T->left, d+1);
	int i_1= WPL(T->right, d + 1);

	return i_0 + i_1;
}
/*  9. 计算两棵树是否相似，相似的定义如下： 若两颗树都为空树，或两棵树都无子几点，或两棵树都只有左子节点
	或右子节点， 或两棵树都有两个子节点。且改树的所有子节点都满足这一条件。
	
	BiTreeNode* head = create_bitree();
	cout << endl;
	BiTreeNode* head1 = create_bitree();

	bool wpl = is_similar(head, head1);
	cout << " is_similar:  " << wpl << endl;
	return 0;
	case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
				1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
	输出： is_similar: 1  (1为true, 0 为false)
	
	*/
bool is_similar(BiTreeNode * head1, BiTreeNode * head2)
{
	if (head1 == NULL && head2 == NULL)
		return true;


	if (head1 != NULL && head2 != NULL)
	{
		bool l0=is_similar(head1->left, head2->left);
		bool l1=is_similar(head1->right, head2->right);
		return l1 && l0;
	}
	return false;
	
}

void in_order1(BiTreeNode * head)
{
	if (head == NULL)
		return;
	in_order1(head->left);
	visit (head);
	in_order1(head->right);
	

}

/*非递归中序遍历
	BiTreeNode* head = create_bitree();
	cout << endl;
	in_order2(head);
	return 0;
	case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
	输出：2 1 6 4 7 3 5
*/
void in_order2(BiTreeNode * head)
{
	if (head == NULL)
		return;

	stack<BiTreeNode*> S;
	BiTreeNode* p = head;

	while (S.empty() == false || p)
	{
		if (p != NULL) {
			S.push(p);
			p = p->left;
		}
		else {
			p = S.top(); 
			S.pop();
			visit(p);
			p = p->right;
		}
	}
}

/*非递归先序遍历
BiTreeNode* head = create_bitree();
cout << endl;
pre_order2(head);
return 0;

case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
输出：	1 2 3 4 6 7 5
*/
void pre_order2(BiTreeNode * head)
{
	if (head == NULL)
		return;
	stack<BiTreeNode*> S;
	BiTreeNode* p = head;
	while (S.empty() == false || p)
	{
		if (p) {
			visit(p);
			S.push(p);
			p = p->left;
		}
		else
		{
			p = S.top(); S.pop();
			p = p->right;
		}
	}
}

void post_order(BiTreeNode * head)
{
	if (head == NULL)
	{
		return;
	}
	post_order(head->left);
	post_order(head->right);
	visit(head);
}

/*层序遍历
BiTreeNode* head = create_bitree();
cout << endl;
level_order(head);
return 0;

case1: 1 2  -1 -1 3 4 6 -1 -1 7 -1 -1 5 -1 -1
输出：	1 2 3 4 5 6 7
*/
void level_order(BiTreeNode * head)
{
	if (head == NULL)
		return;
	queue<BiTreeNode*> Q;
	Q.push(head);
	BiTreeNode* p = NULL;
	while (Q.empty() == false)
	{
		p = Q.front(); Q.pop();
		visit(p);

		if (p->left)
			Q.push(p->left);   
		if (p->right)
			Q.push(p->right);
	}
}



