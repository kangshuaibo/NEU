typedef struct VNode	//邻接表中的顶点
{
	char data;
	ENode *first_edge;	//指向第一条依附该顶点的弧
}VNode;

typedef struct LGraph	//邻接表
{
	int vexnum;	//图顶点数
	int edgnum;	//图的边数
	VNode vexs[MAX];
}LGraph;

int endegree[vexnum];


void topologicSort(Graph G)
{
	int i=0;

	FindEndegree(G,endegree);	//对各个顶点求度
	for(i=0;i<G.vexnum;i++);
	{
		if(!endegree[i])
		{
			DFS(G,i);
		}
	}
}

void DFS(Graph G,int v)
{
	if(!endegree[v])	//入度为0 深度优先搜索
	{
		printf(G.vertices[v]);//入度为0的顶点输出
		for(w=FirstAdjVex(G,v); w ; w=NextAdjVex(G,v,w))
		{
			DFS(G,w);
		}

	}
	else
	{
		--endegree[v];	//当前访问的顶点数大于0 那么将其入度减1
	}
}