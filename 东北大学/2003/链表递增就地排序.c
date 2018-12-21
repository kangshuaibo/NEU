//实际上就是多次遍历链表 进行冒泡排序
void Order(LinkList f)
{
	LinkList p,q;
	int temp;
	for(q=f->next;q!=NULL;q=q->next)
		for(p=q;p!=NULL;p=p->next)
		{
			if(q->data>p->data)
			{
				temp=p->data;
				q->data=p->data;
				p->data=temp;
			}
		}
		return f;
}