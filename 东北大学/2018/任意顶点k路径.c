//题目：假设无向图采用邻接表存储，判别图中任意给定的两个顶点是否存在长度为k的简单路径
//深度优先搜索距离v1距离为1的节点 递归k次 则存在
int visited[MAXSIZE];
int exit_path_lem(ALGraph G,int i,int j,int k)
{
	if(i==j && k==0)
	{
		return 1;// 找到了一条
	}
	else if(k>0)
	{
		visited[i]=1;
		for(p=G.vertices[i].farstarc; p ; p->nextarc)
		{
			l=p->adjvex;
			if(!visited[i])
				if(exit_path_lem(G,l,j,k-1))//剩余路径长度减去1
					return 1;
		}
		visited[i]=0;//允许被访问过的节点出现在另一条路径中
	}


	return 0;
}