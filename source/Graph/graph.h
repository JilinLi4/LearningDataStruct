#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//邻接矩阵法
#define MaxVertexNum 100
typedef char VertexType;  //定义定点的数据类型
typedef int EdgeType; //定义权值的数据类型

//邻接矩阵结构体
struct MGraph
{
	VertexType Vex[MaxVertexNum];									 //顶点表
	EdgeType Edge[MaxVertexNum][MaxVertexNum];			//领接矩阵，边表
	int vexnum;																		//顶点数量
	int arcnum;																		//边数量
	MGraph()
	{
		//将邻接矩阵初始化为最大整数
		memset(this->Edge, -1, sizeof(this->Edge));
	}
};
/*
	1 2  3  4
	0 1 1 0
	0 0 0 0
	0 0 0 1
	1 0 0 0
*/
//使用领接矩阵创建图
MGraph* create_mgraph(int vexnum, int arcnum) {
	/*创建领接矩阵的图
	 Args:
	 -------
	 int vexnum: 顶点数量
	 int arcnum:  边的数量

	Return:
	----------
	MGraph* G: 构建的领接矩阵图
	*/
	MGraph* mg = new MGraph();
	mg->arcnum = arcnum;
	mg->vexnum = vexnum;
	//输入顶点
	cout << " 请输入顶点信息：" << endl;
	for (int i = 0; i < vexnum; i++)
	{
		cin >> mg->Vex[i];
	}
	//输入边
	cout << " 按行输入边： " << endl;
	for (int i = 0; i < vexnum; i++)
	{
		for (int s = 0; s < vexnum; s++)
		{
			cin >> mg->Edge[i][s];
		}
	}
	return mg;
}

int get_in_route(MGraph* G, int vex_indx)
{
	/*
		计算领接矩阵的入度
		Args:
		-------
		MGraph* G: 领接矩阵
		int vex_indx: 顶点的索引

		Return：
		----------
		int in_rt_num: 顶点的入度
	*/
	int in_rt_num = 0;
	for (int i = 0; i < G->vexnum; i++)
	{
		if (G->Edge[i][vex_indx] != 0 && G->Edge[i][vex_indx] != INT_MAX) {
			in_rt_num++;
		}
	}
	return in_rt_num;

}

int get_out_route(MGraph* G, int vex_indx)
{
	/*
		计算领接矩阵的出度
		Args:
		-------
		MGraph* G: 领接矩阵
		int vex_indx: 顶点的索引

		Return：
		----------
		int out_rt_num: 顶点的出度
	*/
	int out_rt_num = 0;
	for (int i = 0; i < G->vexnum; i++)
	{
		if (G->Edge[vex_indx][i] != 0 && G->Edge[vex_indx][i] != INT_MAX) {
			out_rt_num++;
		}
	}
	return out_rt_num;
}

/*l邻接矩阵*/

# define MaxSize 100
typedef  int VexType;
//边表的结构体
struct arcnode {
	int index;//节点的编号
	arcnode* next;
};

//顶点的结构体
struct Vnode {
	VexType data;
	arcnode* first;//边表的第一个节点
};

//邻接表的结构定义
struct ALGraph {
	int arcnum;//边的数量
	int nodenum;//顶点的数量
	Vnode vex[MaxSize];//顶点表
};

int conter_out_degree(ALGraph* g, int k) {
	// 求k的节点的出度
	int out_degree = 0;
	arcnode* p = g->vex[k].first;
	while (p != NULL) {
		out_degree++;
		p = p->next;
	}
	return out_degree;
}

int conter_in_degree(ALGraph* g, int k)
{
	int in_degree = 0;
	for (int i = 0; i < g->nodenum; i++)
	{
		arcnode* p = g->vex[i].first;
		while (p != NULL)
		{
			if (p->index == k) {
				in_degree++;
			}
			p = p->next;
		}
	}
	return in_degree;
}



