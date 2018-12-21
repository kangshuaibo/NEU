//无向图连通分量个数 输出每一连通分量顶点值
//思想：从每个没被访问过的顶点出发 深度优先搜索 
int count(Greph G)
{
	for(v=0;v<G.vexnum;v++)
		visited=false;
	for(v=0;v<Gvexnum;v++)
	{
		if(!visited[v])
			DFS(G,v);
	}
}

void DFS(Greph G,int v)
{
	visited[v]=true;
	for(w=FirstAdjVex; w ;w->NextAdjVex(G,v,w))
	{
		if(!visited[w])
		{
			printf("%d\n",G->Adjlist[w].data );
			DFS(G,w);
		}
	}
}