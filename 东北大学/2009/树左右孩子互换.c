void Exchange(BiTree &T)
{
	BiTree *p;
	BiTree *temp;
	p=T;
	if(p)
	{
		temp=p->lchild;
		p->lchild=p->rchild;
		p->rchild=temp;

		Exchange(p->lchild);
		Exchange(p->rchild);
	}
	else
		return 0;
}