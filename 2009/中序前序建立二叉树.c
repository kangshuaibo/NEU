//思想：前序序列和中序序列所占位置总是连续的 可以用起始下标和终止下标来确定一颗子树 
//Pre_Start,Pre_End,In_Start,In_End分别指示 子树 在 前序子序列里 的起始下标 终止下标 和在 中序子序列里的起始和终止下标
char Pred,Ind;
Build_Sub(int Pre_Start,int Pre_End,int In_Start,int In_End)
{
	sroot=(BTNode*)malloc(sizeof(BTNode));	//建根
	sroot->data=Pre[Pre_Start];

	for(i=In_Start;In[i]=sroot->data;i++)	//在中序序列查找子树根
		leftlen=i-InStart;
	rightlen=In_End-i	//计算左子树大小
	
	if(leftlen)
	{
		lroot=Build_Sub(Pre_Start+1,Pre_Start+leftlen,In_Start,In_Start+leftlen-1);
		sroot->lchild=lroot;
	}
	if(rightlen)
	{
		rroot=Build_Sub(Pre_End-rightlen+1,Pre_End,In_End,In_End-rightlen+1,In_End);
		sroot->rchild=rroot;
	}
	return sroot;
}