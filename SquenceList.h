#pragma once
/*
	顺序表的数据结构和操作
*/

/*顺序表的数据结构*/
#define MaxSize 100
#include <cmath>
typedef int ElemType;//数据类型
struct SqList {
	ElemType data[MaxSize];//数据域
	int length;//表的长度
};
//声明
/*新建一个顺序表*/
void init_sqlist(SqList& sl);

/*打印顺序表*/
void print_sqlist(SqList& l);

/*插入操作*/
bool ListInsert(SqList&l, ElemType value, int pos);

/*删除特定位置元素*/
bool delete_sqlist(SqList& sl, int pos);

/*按值查找*/
int find_value_pos(SqList& sl, ElemType t);

/*查找最小的元素的位置*/
int find_min_pos(SqList& sl);

/*查找最小元素的值*/
ElemType find_min_value(SqList& sl);

/*交换两个元素*/
void swap(SqList& sl, int p1, int p2);

/*从顺序表中删除最小值的元素， 并由函数返回被删除元素的值，空出的位置由最后一个元素填补*/
ElemType delete_min_value(SqList& sl);

