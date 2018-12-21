//思想：用数组接受每个元素 然后对数组冒泡排序 尾插法生成链表
void get_sort(int &a[MAXSIZE])
{
	int i,j,m,temp,exchange;
	for(i=0;i<MAXSIZE;i++)
	{
		scanf("%d",&temp);
		if(temp==0)
		{
			for(j=0;j<i;j++)
			{
				for(m=0;m<i;++m)
				{
					if(a[m]>a[m+1])
					{
						exchange=a[m];
						a[m]=a[m+1];
						a[m+1]=exchange;
					}
				}
			}

			a[i]=temp;
			break;
		}
	}
}

void InsertLink(LinkList &L,int *p)
{
	LinkList *r;
	LinkList *temp;
	r=L;
	while(*p!=0)
	{
		temp=(LinkList*)malloc(sizeof(LinkList));
		temp->data=*p;
		temp->next=NULL;
		++p;
		r->next=temp;
		r=r->next;
	}
}

void main()
{
	LinkList *L;
	L=(LinkList*)malloc(sizeof(LinkList));
	L->next=NULL;
	int a[MAXSIZE];
	get_sort(a);
	InsertLink(&L,A);
}