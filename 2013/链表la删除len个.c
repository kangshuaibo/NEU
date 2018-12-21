//题目：从表la中删除第i个元素起共len个元素
//思想：遍历链表 从遍历到第i个链表开始删除len个元素 如果链表节点总数小鱼i则说明不需要删除节点
//如果链表节点总数大雨i但小雨i+len则从i开始删除

#DeleteElement(DataType L,int i,int len)
{
	DataType *p=NULL;
	DataType *t=L;
	int count=1;

	p=L->next;
	while(*p)
	{
		if( (count>=i)&&(count<=i+len) )
		{
			t->next=p->next;
			p=t->next;
			free(p);
		}
		else
		{
			t=p;
			p=p->next;
		}
	}
}









//从表la中删除第i个元素起共len个元素
Status Delete AndInsertSub(LinkList &la, Link List &lb, int i, int j, int len)
{
  Linklist p, q, s prev=NULL
  int k=1;

 if(i<0||j<0||len <0) return INFEASIBLE


//在la表中查找第i个结点
p=la;
while(p&&k<i)	//p为查找i的指针
{
	prev=p;
	p=p->next;
	k++;
}

//在la表中查找第计+len-1个结点
q=p;
k=1;
while(q&&k<len)		//q为查找len的指针
{
 q=q->next;
 k++;
}


//完成删除,注意,i=1的情况需要特殊处理
if(!prev)
	la=p->next;	//i=1
else 
	prev->next=q->next;



//将从l中删除的结点插入到lb中
if(j=1)
{
	q->next=lb;
	lb=p;
}
else
{
	s=lb;
	k=1;
	while(s&&k≤j-1)
	{
	  S=S->next;
	  k++;
     }

if(!s)return INFEASIBLE
 q->next=s->next
 s->next=p;//完成插入
return OK