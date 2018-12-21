//思想：因为是循环链表 x前面的节点可以通过往后的循环遍历得到
void Delete(LinkList *x)
{
	LinkList *t;
	LinkList *r;
	
	//如果只有一个节点
	if(t->next==x)
	{
		printf("ERROE\n");
	}

	//如果t指向的节点的下一个是x 说明t是x的前驱
	while(t->next!=x)
	{
		t=t->next;
	}

	t->next=x->next;
	free(x);



}