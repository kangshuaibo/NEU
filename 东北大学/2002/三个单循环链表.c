/*
已知L为没有头节点的单链表中第一个节点的指针，每个节点数据与存放一个字符。
该字符可能是英文字符数字或其他
构造三个带头节点的单循环链表 使得每个链表只含有同一类字符
*/

//思想：将一个节点数据与为字符的单链表 分解成含有字母字符 数字字符 和其他字符的三个循环链表
//首先要分别构造这三类字符的表头节点 
//然后从原链表第一个节点开始，根据不同数据分别插入三个链表中

void OneToThree(LinkList L,la,ld,lo)
{
	la=(LinkList)malloc(sizeof(LNode));
	ld=(LinkList)malloc(sizeof(LNode));
	lo=(LinkList)malloc(sizeof(LNode));

	la->next=la;
	ls->next=ld;
	lo->next=lo;

	while(L!=NULL)
	{
		r=L;
		L=L->next;
		if(r->data>='a'&&r->data<='z' || r->data>='A'&&r->data<='Z')
		{
			r->next=la->next;
			la->data=r;
		}
		else if(r->data>='0'&&r->data<='9')
		{
			r->next=ld->next;
			ld->next=r;
		}
		else
		{
			r->next=lo->next;
			lo->next=r;
		}
	}
}