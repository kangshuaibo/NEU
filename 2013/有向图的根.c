//邻接表有向图G r可到每个节点 r为根节点 判断是否有根
//思想：从一个点深度优先遍历 若能遍历完每一个点则为根
int visited[MAXSIZE];
int length=1; //从每个顶点开始深度遍历。记录访问到的节点数，如果深度遍历结束，访问了所有顶点，那么length与vexnum相等

void DfSTraverse(Graph G)
{
	for(v=0;v<G.vexnum;++v)
		visited[v]=false;
	for(v=0;v<G.vexnum;++v)
	{
		if(!visited[v])
			DFS(G,v);
		if(length+1==G.vexnum)
			printf("%d\n",AdjList[v].data );

		for(v=0;v<G.vexnum;v++)	//清除所有访问信息重新开始
			visited[v]=false;
		length=1;
	}
}

void DFS(Graph G,int v)
{
	visited[v]=true;
	for(w=firstadjvex(G.v); w ;w=NextAdjvex(G,v,w))
	{
		if(!visited[v\w])
		{
			length+=1;
			DFS(G,w);
		}
	}
}