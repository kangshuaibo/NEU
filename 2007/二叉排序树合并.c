void InsertBST(t,key)
{
	if(t==NULL)
	{
		t=new BiTree;
		t->lchild=t->rchild=NULL;
		t->data=key;
		return ;
	}
	if(key<t->data)
		InsertBST(t->lchild,key);
	else
		InsertBST(t->rchild,key);
}

//先序遍历
void PreOrder(Node *t,Node *t_new)
{
	if(t!=NULL)
	{
		InsertBST(t_new,t->key);	//反复调用创建新树
		PreOrder(t->lchild,t_new);
		PreOrder(t->rchild,t_newz);
	}
	return;
}

Node *Merge(Node *root1,Node *root2)	//总函数 输入两颗树的根节点
{
	Node *t_new=NULL;
	PreOrder(root1,t_new);
	PreOrder(root2,t_new);
	return t_new;
}