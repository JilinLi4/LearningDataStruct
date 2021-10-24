// 139DataStruct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 
#include <iostream>
#include "SquenceList.h"
#include "linked_list.h"
using namespace std;
int main()
{
	LNode* l1 = create_linked_list();
	LNode* l2 = create_linked_list();
	LNode* L = merge_linked_list(l1, l2);
	print_linked_list(L);

    std::cout << "Hello World!\n";
}

