//历年多次考过真题
//思想：邻接表和逆邻接表的顶点信息是相通的 直接复制 把出边信息转化为入边信息，逐个访问邻接表各个顶点的出边表，把边节点通过头插法插入相应边表中
void convertAdjList(ALGraph &G1,ALGraph &G2)
{
	G2.vexnum=G1.vexnum;
	G2.arcnum=G1.arcnum;

	copy(G1.vertices,G2.vertices);//将邻接表顶点复制

	for(i=0;i<G1.vexnum;i++)//逐个顶点转换
	{	
		//遍历链表
		for(p=G1.vertices[i].firstarc; p ;p=p->nextarc)
		{
			q=(ArcNode*)malloc(sizeof(ArcNode));
			q->adjvex=i;

			//头插
			q->next=G2.vertices[p->adjvex].firstarc;
			G2.vertices[p->adjvex].firstarc=q;
		}
	}



}