//树的高度 祖先节点的左右子树中的最大层树加1
int Depth(BiTree T)
{
	int level=0;
	BiTree *p;
	p=T;
	while(p)
	{
		level+=1;
		if(p->bf<0)	//若平衡因子是负数 说明右子树高
			p=p->rchild;
		else
			p=p->lchild;
	}
}