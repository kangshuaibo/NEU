typedef struct 
{	BiTree data[MAXSIZE];	//节点
	int level[MAXSIZE];		//相同下标节点的层次		
	int front,rear;
}Qu;

int BTWidth(BiTree b)
{
	BiTree p;
	int k,max,i,n;
	Qu.front=Qu.rear=-1;	//队列初始化

	Qu.rear++;				//入队
	Qu.data[Qu.rear]=b;		//根节点入队
	Qu.level[Qu.rear]=1;	//根节点层次为1
	while(qu.front<qu.rear)
	{
		Qu.front++		        //出队
		p=Qu.data[Qu.front];	//出队节点
		k=Qu.level[Qu.front];	//出队节点的层次

		if(p->lchild!=NULL)
		{
			Qu.rear++					//左孩子入队
			Qu.data[Qu.rear]=p->lchild;	//入队节点
			Qu.level[Qu.rear]=k+1;		//入队节点层次
		}
		if(p->rchild!=NULL)
		{
			Qu.rear++;					//右孩子入队
			Qu.data[Qu.rear]=p->lchild;	//入队节点
			Qu.level[Qu.rear]=k+1;		//入队节点层次
		}
	}//while


	max=0；

	i=0;	//i为遍历变量
	k=1;	//从第一层开始
	while(i<Qu.rear)
	{
		n=0	//统计k层节点个数
		while(i<Qu.rear && Qu.level[i]==k)	//在这一层姐节点k相同 累加
		{
			n++;
			i++;
		}
		k=Qu.level[i];	
		if(n>max)
			max=n;
	}
	return max;


}//同问 求二叉树的宽度 用队列完成