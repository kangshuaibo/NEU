//把负数移到正数前面
//思想：找到链表中第一个正数的前驱 遍历所有节点 将后面的负数节点插到前驱节点的后面
void SortLink(Linklist &L)
{
	Linklist *Pre,*p,*Pre_p;
	pre=L;
	*p=L->next;

	while(p)
	{
		if(p->data>0)
			break;
		pre_p=p;
		p=p->next;
	}

	pre=pre_p;//第一个正数的前驱赋值给pre

	if(pre==NULL || pre==L)	//为空报错
	{
		printf("Erroe\n");
		exit(0);
	}
	pre_p=p;//p指向第一个正数

	p=p->next;	//以下遍历
	while(p)
	{
		if(p->data<0)	//当前节点为负数
		{
			pre_p->next=p->next;	//摘下节点

			p->next=pre->next;	//插入负数节点
			pre->next=p;

			p=pre_p->next;	//指向摘除节点的后继
		}
		else
		{
			pre_p=p;
			p=p->next;
		}
	}
}