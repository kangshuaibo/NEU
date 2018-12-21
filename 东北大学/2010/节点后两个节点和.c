//编写算法 每个节点值是否等于有面两个之和，若满足返回1并输出最大值 若不满足输出0并输出最小值
int Judge(LinkList &L)
{
	while(p->next->next!=NULL && p->data==p->next->data+p->next->next->data)
		p=p->next;
	if(p->next->next->next!=NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}