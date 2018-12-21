int renum(LinkList *L,int n)
{
	LinkList *p;
	int count =0;
	int e;
	InitStack(S);
	InitQueue(Q);
	p=L->next;
	count+=1;
	while( (p!=NULL)&&(count<=n))
	{
		PushStack(&Stack,p->data);//同时进栈和队列
		EnQueue(&EnQueue,p->data);
		p=p->next;
		count+=1;
	}

	while(!QueueIsEmpty(Q)&&!StackIsEmpty(S))//同时出栈和队列
		if(DeQueue(&Queue,&e)!=PopStack(&Stack,&e))
			return 0;

	return 1;	//相等就是回文
}