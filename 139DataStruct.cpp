// 139DataStruct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 
#include "139DataStruct.h"
int main()
{
	LNode* head = create_linked_list();
	print_linked_list(head);
	LNode* oushu_head = split_linked_list(head);
	print_linked_list(oushu_head);
	cout << find_length(oushu_head) << endl;

}

