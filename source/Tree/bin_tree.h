#pragma once
#include "SquenceList.h"
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
typedef int DataType;
/*  二叉树链式结构  */
struct BiTreeNode
{
	DataType data;
	BiTreeNode* left;
	BiTreeNode* right;
};

BiTreeNode* create_bitree();
/*  先序创建二叉树  */
BiTreeNode* pre_create_bitree(BiTreeNode *head, SqList sl, int& index);

/* 1. 先序遍历  */
void pre_order_visit(BiTreeNode* head);

/*  2. 求树的高度 */
int bitree_height(BiTreeNode* head);

/*  3. 假设二叉树采用二叉链表存储结构存储，试设计一个算法，计算一颗给定二叉树的所有双分支节点 */
int find_double_branch_count(BiTreeNode* head);

/*  4. 假设二叉树采用二叉链表存储结构存储，编写一个把树B中所有节点的左右分支交换的函数 */
void swap_btree(BiTreeNode* head);

/*  5 计算二叉树的叶子节点  */
int bitree_leaf_number(BiTreeNode* head);

/*  6 计算二叉树的所有节点数 */
int bitree_node_number(BiTreeNode* head);

/*  7 计算二叉树的路径和 */
int bitree_route_number(BiTreeNode*);

/*  8 带权路径长度是二叉树中所有叶节点的带权路径长度之和。给定一颗二叉树，在叶节点的 data中保存
改节点的权值 */
int WPL(BiTreeNode *T, int d);

/*  9. 计算两棵树是否相似，相似的定义如下： 若两颗树都为空树，或两棵树都无子几点，或两棵树都只有左子节点
	或右子节点， 或两棵树都有两个子节点。且改树的所有子节点都满足这一条件。*/
bool is_similar(BiTreeNode* head1, BiTreeNode* head2);

/*  10. 中序遍历递归写法*/
void in_order1(BiTreeNode* head);

/*  11. 中序遍历非递归写法 */
void in_order2(BiTreeNode* head);

/*  12. 先序遍历非递归写法 */
void  pre_order2(BiTreeNode* head);

/*  13. 后序遍历递归写法 */
void post_order(BiTreeNode* head);
 
/*  14. 树的层序遍历 */
void level_order(BiTreeNode* head);

/*  15. 求树的宽度 */
void bitree_width(BiTreeNode* head);
