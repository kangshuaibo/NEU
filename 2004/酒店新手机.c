//某酒店有一批新手机 按价格从高到低构成单链表 节点包括 数量 价格 指针。现在到n台不同的手机，编写将新到手机插入到原链表中的算法
typedef struct LNode
{
	int number;
	int value;
	struct LNode *next;
}LNode,*LinkList;

void insert(Link &L,int n)
{
	//插入到链表中
	for(i=1;i<=n;i++)
	{
		scanf(&price);
		S(LinkList)malloc(sizeof(LNode));
		S->value=price;
		S->number=1;
		P=L->next;
		if(p->value<S->value)
		{	//插入首部
			S->next=L->next;
			L->next=S;
		}
		else
		{
			while(p->next&&(p->next->value>S->value))
				p=p->next;
			if(!p->next)
			{
				//尾插
				S->next=p->next;
				p->next=S;
			}
			else if(p->next->value==s->value)
			{
				p->next->number++;
			}
		}
	}
}