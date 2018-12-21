//题目：已知线性表中元素按有序递增 但链表存储结构 删除线性表中所有相同多余元素
//思想：在有序链表中 值相同的节点排列在一起 因此只需要检测相邻节点的值是否相等 相等则删除后继节点 否则继续向后检测
void delSameNode(Linklist &L)
{
	Linklist *p=L->next;
	Linklist *temp=NULL;
	while(p!=NULL && p->next!=NULL)
	{
		if(p->data==p->next->data)
		{
			temp=p->next;
			p->next=temp->next;
			free(temp);
		}
		else
			p=p->next;
	}
}