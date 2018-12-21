Status delete(BiTree &t,ElemType x)
{
	if(x<p->data)	//删除x
	{
		q=p;
		p=p->lchild;
	}
	else
	{
		q=p;
		p=p->rchild;
	}


	if(!p)	
	{
		return 0;	//没找到
	}
	else if(!p->rchild)	  //被删除节点无右子树
	{
		q=p;	//重接
		p=p->lchild;
		free(q);
	}
	else if(!p->rchild)	  //无左子树
	{
		q=p;
		p=p->rchild;
		free(q);
	}
	else	//左右子树都不为空进行查找
	{
		q=p;
		s=p->rchild;
		while(s->rchild)	//右子树中查找
		{
			q=s;
			s=s->rchild;
		}

		p->data=s->data;	//置换

		if(q!=p)
		{
			q->rchild=s->lchild;//重接左子树
		}
		else
		{
			q->rchild=s->lchild;//重接右子树
		}
	}




}