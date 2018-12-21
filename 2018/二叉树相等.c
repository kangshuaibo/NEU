typedef struct BiTree
{
	DATATYPE data;
	BiTree *lchild;
	BiTree *rchild;
}BiTree;

int isSimilar(BiTree T1,BiTree T2)
{
	
	if(T1->data==NULL && T2->data==NULL)//两树都空
		return true;
	else if(T1->data!=T2->data)//两树不等
		return false;
	else if(T1->data==T2->data)
	{
	 leftS=isSimilar(T1->lchild,T2->lchild)
	 rightS=isSimilar(T1->rchild,T2->rchild)
    }
    return leftS&&rightS;
}