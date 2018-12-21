//思想：相邻节点之间有序。遍历整个链表，比较前后相邻节点之间大小
void Ordered_Link(Linklist &L)
{
	int temp;
	int flag;
	int flag1;

	Link *p=NULL;
	p=L;
	p=p->next;
	temp=p->data;
	flag=1;
	//判断是递增还是递减
	if(temp>p->next->data)
		flag=1;
	else
		flag=0;//增

	flag1=flag；
	//遍历
	while(p)
	{
		if(temp>p->next->data)
			flag=1;
		else
			flag=0;
		if(flag1!=flag)
			printf("无序\n");
	}
	printf("有序")
}