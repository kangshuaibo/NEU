/*将单链表L1拆成两个链表，其中L1为头的链表保持原来向后的链表，
另一个链表的头为L2，其链接方向与L1相反，L1包含原链表的奇数序号的节点，L2包含原链表的偶函数序号的节点
*/
//思想：本题中L2链表实际上是链表的逆置，可采用 头插法
LinkList DisUnion(LinkList L1,L2)
{
	int i=0;
	L2=(LNode*)malloc(sizeof(LNode));
	 L2->next=NULL;	//空链表
	 p=L1->next;
	 pre=L1;
	 while(p)
	 {
	 	i++;
	 	if(i%2)
	 	{
	 		pre->next=p;
	 		pre=p;
	 		p=p->next;	//奇数序号节点在L1中
	 	}
	 	else
	 	{
	 		s=p->next;
	 		p->next=L2->next;
	 		L2->next=p;
	 		p=s;
	 	}		//偶数号节点逆置插入L2中
	 }
	 pre->next=NULL;
	 return L2;
}