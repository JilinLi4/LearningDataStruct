#include "sort.h"

#if 0



void init_data(SqList &data)
{
	int a[] = {-1, 10, 20, 2, 3, 8, 12, 62,12 };
	for (int i = 0; i < 8; i++)
	{
		data.data[i] = a[i];
		data.length++;
	}
}

//创建堆
void create_heap(SqList& data)
{
	if (data.length <= 0) return;
	for (int i = data.length/2; i >=0; i--)
	{
		adj_heap(data, i);
	}
}

void adj_heap(SqList& sqlist, int k)
{
	/*调整堆 大根堆
	Args:
	-------
	SqList& data：顺序表
	int k : 需要调整的位置
	*/
	if (k < 0 || k >= data.length)
		return;
	sqlist.data[0] = sqlist.data[k];  //暂存k节点到0位置
	for (int i = k*2; i < sqlist.length; i++)
	{
		if (i < sqlist.length && sqlist.data[i] < sqlist.data[k])
			i++;
		if (sqlist.data[0] >= sqlist.data[i]) break;   //调整完毕， 退出
		sqlist.data[k] = sqlist.data[i];  // 交换叶子节点
		k = i; //继续调整第i个节点
	}
	sqlist.data[k] = sqlist.data[0];  //将目标节点放入最终的位置
}
//堆排序
void heap_sort(SqList& data)
{
	create_heap(data);
	for (int i = data.length; i >0; i--)
	{
		swap(data, i, 1);
		adj_heap(data,  i - 1);
	}
}
#endif // 0