#if 0
#include "sort.h"



void init_data(SqList &data)
{
	int a[] = {-1, 10, 20, 2, 3, 8, 12, 62,12 };
	for (int i = 0; i < 8; i++)
	{
		data.data[i] = a[i];
		data.length++;
	}
}

//������
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
	/*������ �����
	Args:
	-------
	SqList& data��˳���
	int k : ��Ҫ������λ��
	*/
	if (k < 0 || k >= data.length)
		return;
	sqlist.data[0] = sqlist.data[k];  //�ݴ�k�ڵ㵽0λ��
	for (int i = k*2; i < sqlist.length; i++)
	{
		if (i < sqlist.length && sqlist.data[i] < sqlist.data[k])
			i++;
		if (sqlist.data[0] >= sqlist.data[i]) break;   //������ϣ� �˳�
		sqlist.data[k] = sqlist.data[i];  // ����Ҷ�ӽڵ�
		k = i; //����������i���ڵ�
	}
	sqlist.data[k] = sqlist.data[0];  //��Ŀ��ڵ�������յ�λ��
}
//������
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