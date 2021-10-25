// 139DataStruct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 
#include "139DataStruct.h"
int main()
{
	SqList sl;  //定义一个顺序表
	init_sqlist(sl); //向顺序表中读入值。
	cout << "插入前的顺序表" << endl;
	print_sqlist(sl); //打印顺序表中的值
	bool is_success = ListInsert(sl, 10, 0); //插入值， is_success 是否成功
	cout << "插入后的顺序表" << endl;
	print_sqlist(sl);
    std::cout << "Hello World!\n";
}

