struct Student 
{
	char name[20];
	int data;
	Student *next;
};

struck Student *sortLink(struct Student *heap)
{
 Student *p=heap->next;

 while(p!=NULL)
 {
 	if(p->next==NULL)
 	{
 		break;
 	}
 	else if(p->data<p->next->data)
 	{
 		//交换两节点数据 逆序
 		char str_temp[20];
 		strcpy(str_temp,p->name);

 		int data_temp=p->data;
 		strcpy(p->name,p->next->name);
 		p->data=p->next->data_temp;
 	}
 	p=p->next;
 }
 return heap;
}

