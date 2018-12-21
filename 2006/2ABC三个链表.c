//ABC三个链表 删掉A链表中重现在BC中的节点
void Difference(LinkList& La, LinkList& Lb,int *n)
{//差集的结果存储于单链表La中，*n是结果集合中元素个数，调用时为0
  pa=La->next;
  pb=Lb->next;      
   //pa和pb分别是链表La和Lb的工作指针,初始化为相应链表的第一个结点
  pre=La;          //pre为La中pa所指结点的前驱结点的指针
  while(pa&&pb)
  {
	if(pa->data<q->data)
		{
			pre=pa;
			pa=pa->next;
			*n++;
		} 
    //A链表中当前结点指针后移
	else if(pa->data>q->data)
		q=q->next;     //B链表中当前结点指针后移
    else 
    {
          pre->next=pa->next;      //处理A，B中元素值相同的结点，应删除

          u=pa; 
          pa=pa->next; 
          delete u; 
    }  //删除结点
  }
}

int delete(LinkList A,LinkList B,LinkList C)
{
		Difference(A,B,0);
		Difference(A,C,0);
		return A;
}
