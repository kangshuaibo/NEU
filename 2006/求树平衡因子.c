//求树的平衡因子 并返回非叶子节点个数
//思想：遍历二叉树 计算出每个节点左右子树的深度 然后两者相减
int Balance(BiTree T)
{
	if(T)
	{
		Balance(T->rchild);
		Balance(T->lchild);

		m=Depth(T->rchild);
		n=Depth(T->lchild);
		T->bf=m-n;
	}
}

int Depth(BiTree T)
{
	int *pt,int s=0;int t=0;
	if(T==NULL)
		return 0;
	else
		s=Depth(T->lchild);
		t=Depth(T->rchild);
		return(s>t?s:t)+1;
}