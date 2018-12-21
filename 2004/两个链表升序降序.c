//思想：先将降序链表逆置，之后合并
LinkList Union(LinkList la,lb)
{	
	//逆置
	p=lb->next;
	while(p)
	{
		s=p->next;	//暂存后继
		p->next=lb->next;	//逆置
		p=s;	//恢复待逆置节点

	}
	//合并
	p=la->next;
	q=lb->next;
	pre=la;

	while(p&&q)
		if(p->data<q->data)
		{
			pre->next=p;	//插入
			pre=p;
			p=p->next;	//移动到下一个节点
		}
		else
		{
			pre->next=q;
			pre=q;
			q=q->next;
		}
	if(p)
		pre->next=p;
	else
		pre->next=q;
}