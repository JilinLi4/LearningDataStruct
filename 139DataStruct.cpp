// 139DataStruct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 
#include <iostream>
#include "SquenceList.h"
#include "linked_list.h"
#include "bin_tree.h"
using namespace std;
int main()
{
	BiTreeNode* head = create_bitree();
	pre_order_visit(head);
	cout << endl;
	/*int btree_height = bitree_height(head);
	cout << "height: " << btree_height << endl;*/
}

