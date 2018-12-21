void BFSTreaverse(Graph G)
{
	for(v=0;v<G.vexnum;v++);
		visited[v]=false;
	InitStack(S);
	for(v!=0;v<G.vexnum;++v)
	{
		if(!visited[v])
		{
			visited[i]=true;
			visited(v);
			Push(G,v);
			while(!StackEmpty(S))
			{
				Pop(S,v);
				for(w=firstAdjVex(G,u); w ;w=NextAdjVex(G,u,w))
					if(!visited[w])
					{
						Visited[w]=True;
						Visit(w);
						Push(S,w);
					}
				
			}
		}
	}




}