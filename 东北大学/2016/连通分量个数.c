//求邻接表存储结构 无向图连通分量个数并输出每个连通分量顶点集
//思想：深度优先搜索，调用一次DFC连通分量加1
//从没遍历过的顶点再深度优先搜索

int visited[MAXSIZE];
void ConnectComponent(ALGraph *G)
{

	for(i=0;i<G->num;i++)//num为图的顶点数目
	{
		if(!visited[i])
		{
			DFS(G,i);
			count++;//每DFS一次就有一个连通分量
		}
	}
	printf("%d\n",count );
}

void DFS(ALGraph *G,int v)
{

	visited[v]=1;
	printf("%s\n",v ); 从第一个开始

	p=G.adjlist[v].firstarc;//第一个边
	while(p!=NULL)
	{
		if(!visited[p->adjvex])//下一个邻接点没被访问过
			DFS(G,p->adjvex);
		p=p->next;
	}

}