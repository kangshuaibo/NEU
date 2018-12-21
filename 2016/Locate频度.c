/*
20设头指针为L的带有表头结点的非循环双向链表,
其每个结点中除有pred(前驱指针)data（数据）和next(后继指针)域外,还有一个访问频度域freq。
在链表被启用前,其值均始化为零。每当在链表中进行一次 Locate(L,x)运算时,令元素值为x的结点中freq域的值增1,
并使此链表中结点保持按访问频度非增(递减)的顺序排列,同时最近访问的结点排在频度相同的结点的前面,以便使频繁访问的结点总是靠近表头。
试编写符合上述要求的 Locate(L,x)运算的算法,该运算为函数过程,返回找到结点的地址,类型为指针型
*/

//思想：在双向链表中查找数据值为x的节点，查到后将节点从链表上摘下，然后再顺着节点的前驱链查找到该节点的插入位置
//频度递减，且排在同频度的第一个，即向前找到第一个比他频度还大的节点，插入位置为该节点之后
DLinkList Locate(DLinkList &L,ElemType x)
{//先查x 查找成功频度加1
 //按频度递减插入（同频度最近访问的在前面）
	DNode *p=L->next,*q;	//p为工作指针 q为p的前驱，用于查找插入位置
	while(p&&p->data!=x)
		p=p->next;
	if(!p)
	{
		printf("不存在值为x的节点\n");
		exit(0);
	}
	else
	{
		p->freq++;	//值为x的节点频度加1

		p->next->pred=p->pred;
		p->pred->next=p->next;	//p节点摘下

		q=p->pred;	//查找p的插入位置
		while(q!=L && q->freq <= p->freq)
			q=q->pred;

		p->next=q->next;
		q->next->pred=p;	//p节点插入 排在同频率的第一个
		p->pred=q;
		q->next=p;
	}
	return p

}