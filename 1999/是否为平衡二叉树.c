typedef struct tree
{
	int data;
	struct tree *lchild,*rchild;
}BiTree;

int getDepth(BiTree *t)
{
	if(t==NULL)
	{
		return 0;
	}
	int ldepth,rdepth,depth;

	ldepth=getDepth(t->lchild)+1;
	rdepth=getDepth(t->rchild)+1;
	depth=ldepth>rdepth?ldepth:rdepth;
	return depth;
}

bool isBalance(BiTree *t)
{
	int lchildDepth,rchildDepth;

	if(t==NULL||(!t->rchild &&!t->rchild))
	{
		return 0;
	}
	
	lchildDepth=getDepth(t->lchild);
	rchildDepth=getDepth(t->rchild);

	if(abs(lchildDepth-rchildDepth)<=1)
		return isBalance(t->lchild)&&isBalancet(t->rchild);
	else
		return false;





}