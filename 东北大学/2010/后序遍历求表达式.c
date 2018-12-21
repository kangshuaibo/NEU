//假设 一个仅包含二元运算符号 的算术表达式 以二叉链表形式存储在二叉树T中 编写按后序遍历计算表达式的值
//思想：因为叶子节点是数值 父节点是运算符 所以采用后序遍历
double count(Bitree T)
{
	BiTree *p;
	p=T;
	int A,B;
	int sum=0;
	if(!p=NULL)
	{
		if(p->lchild!=NULL && p->rchild!=NULL)
		{
			A=count(p->lchild);
			B=count(p->rchild);
			sum=op(A,B,p->data);
			return sum;
		}
		else
			return p->data-'0';	左右子树都空，则为数值 直接返回
	}
	else
		return 0;	//空树
}