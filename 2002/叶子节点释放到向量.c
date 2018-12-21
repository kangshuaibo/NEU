//思想：遇到叶子节点就释放
BiTree array[MAXSIZE]=0;
int count=0;
void prime(BiTree T,BiTree T_parent)
{
	if(T!=NULL)
	{
		if(T->lchild==NULL&&T->rchild==NULL)
		{
			T_parent->lchild=NULL;
			T_parent->rchild=NULL;
			array[count++]=T->data;
		}
		else
		{
			prime(T->lchild,T);
			prime(T->rchild,T);
		}
	}
}