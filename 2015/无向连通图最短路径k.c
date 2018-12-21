//无向连通图 距离v0为k的所有节点
//思想：从v0开始深度优先遍历 将访问到的节点压入栈
//。    若栈中节点数为k就将栈顶元素出栈  再取出栈后的栈顶元素 从其下一个栈顶出发深度优先遍历
typedef struct 
{
	ElemType *base;
	ElemType *top;
	int stacksize;
}SqStack;
stack[K];
int visited[G.vexnum]={0};

void DFS(Graph G,int v)
{
	visited[v]=1;
	push(stack,v);

	if(StackLength(stack)==k)
	{
		Pop(stack,e);
		printf(e);
		visited[e]=0;
	}
	else
	{
		for(w=FirstAdjVex(G.v); w ;w=NextAdjVex(G,v,w))
		{
			if(!visited[w])
				DFS(G,w);
		}
		Pop(stack,e);
		visited[e]=0;
	}
}
