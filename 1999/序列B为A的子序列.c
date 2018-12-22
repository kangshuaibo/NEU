bool sub(LinkList A,LinkList B)
{ 	//类似字符串比较流程 只是访问流程不同
	s=A;
	p=A->next;
	q=B->next;

	while(q&&p)
	{	//依次从A的每个节点开始匹配 不是子串就从下一个节点开始匹配，直到访问所有节点 或者匹配成功
		if(q->data==p->data)
		{
			q=q->next;
			p=p->next;
		}
		else
		{
			s=s->next;
			q=s->next;
			q=B->next;
		}
		
	}
	//如果q为NULL，说明B链的每个节点都在A链中
	if(!q)
	{
		return true;
	}
	else
	{
		return false;
	}


}