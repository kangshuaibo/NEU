//基于深度优先遍历（递归）从u出发遍历，当访问到v时，输出此路径。
//因此设一个path数组存放路径上的节点，d表示路径长度

//思想：1）FindPath(G,u,v,path,d);d++;path[d]=u;
//		若找到u未访问过的相邻节点u1则继续，否则置visited[u]=0;
//	   2) FindPath(G,u,v,path,d);d++;path[d]=u1;
//		若找到u未访问过的相邻结点u2则继续，否则置visited[u1]=0;
//	   3)一直进行下去，直到ui=v，则输出path；

void FindPath(AlGraph G,int i,int j,int path[],int d)	//d为路径长度
{
	int i,w;
	ARCNode *p;
	++d;
	path[d]=u;	//当前节点添加到路径中
	if(i==j && d==len)
		return 1;	//查找成功
	p=G->adjlist[u].firstarc;
	while(p!=NULL)
	{
		w=p->adjvex;	//w为p的第一个临接点
		if(!visited[w])
			FindPath(G,w,v,path,d);
		p=p->nextarc;
	}
	visited[u]=0;
}