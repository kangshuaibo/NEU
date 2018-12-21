//先序遍历 求指定节点所在层数

//遍历 将遍历得到的节点于指定节点比较相等就反回 不等就继续
int count=0;
int PreOrder(BTNode *p)
{
	count++;
	if(p!=NULL)
	{
		if(p->data==key)
		{
			printf("%d\n",count );
			return true;
		}
		else
		{
			PreOrder(p->lchild);
			count--;
			PreOrder(p->rchild);
			count--;
		}
	}
	return false;
}

//天勤：
void leno(btnode &p,int key)
{
    if(p)
    {
        if(p->data==key)
            printf("leno=%d\n",L);
        ++L;
        leno(p->lchild,key);
        leno(p->rchild,key);
        --L;
    }
}