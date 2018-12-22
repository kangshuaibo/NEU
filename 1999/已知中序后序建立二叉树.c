#define N 10
char postOrder[]={};
char inOrder[]={};

Status CreatBiTree(BiTree &T,int s1,int e1,int s2,int e2)
{	//s1 e1为中序序列起始位置 s2 e2为后续序列的起始位置
	if(!(BiTree *)malloc(sizeof(BiTNode))   )
		exit(OverFollow)
	
	T->data=postOrder_str[e2];
	T->lchild=T->rchild=NULL;
	if(s1!=e1)	//非叶节点
	{
		t=FindPosition(postOrder_str[e2]);
		if(t!=s1)
		{
			CreatBiTree(T->lchild,s1,t-1,s2,s2+(t1-1-s2));	//中序序列子树长度t1-1-s2
		}
	}

}