void InThread(BiThreTree *T)
{
	BiThreTree  *p;
	p=T;
	if(p)
	{
		InThread(p->lchild)；	//左子树线索化
		if(!p->lchild)
		{
			p->LTag=Thread;
			p->lchild=pre;
		}
		if(!pre->rchild)
		{
			pre->RTag=Thread;
			pre->rchild=p;
		}
		pre=p;
		InThread(p->rchild);
	}
}

void FirstThreTravel(BiTree *Thre)
{
	BiThreTree *p;
	p=Thre->lchild;
	while(p!=Thre)
	{
		printf("%d",p->data);
		while(p->LTag==Link)
		{
			p=p->lchild;
			printf("%4d\n",Thread );
		}
		if(p->RTag==Thread)
		{
			p=p->rchild;
		}
		if(p->RTag==Link)
		{
			p=p->rchild;
		}
	}
}

void LastThreTravel(BiThreTree *p)
{
	if(p!=NULL)
	{
		if(p->LTag==Link)
		{
			LastThreTravel(p->lchild);
		}
		if(p->RTag==Link)
		{
			LastThreTravel(p->rchild);
		}
		printf("%4d\n", p->data);
	}
}