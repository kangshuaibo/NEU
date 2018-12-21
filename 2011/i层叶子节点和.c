//二叉树第i层和第i+1层叶子节点个数之和
int leaf=0;
int depth=0;
void leaf(BiTree T)
{
	BiTree p;
	p=T;
	if(p)
	{
		depth+=1;
		if( (depth==level||depth==level+1))&&(p->lchild==NULL&&p->rchild==NULL)
			leaf+=1;
	}
	leaf(BiTree p->rchild);
	depth-=1;
	leaf(BiTree p->lchild);
	depth-=1;
} 