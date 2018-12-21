#include<stdio.h>
#include <stdlib.h>
int main()
{
	void merge(int *ary1,int n,int *ary2,int m);

	int ary1[3]={1,2,3};
	int ary2[5]={1,3,4,5,6};

	int i=0;
	int j=0;
	merge(ary1,3,ary2,5);

}

void merge(int *ary1,int n,int *ary2,int m)
{
	int i=0,j=0,count1=0,count2=0,k=0,len=0;
	int ary3[100];

	while(count1<n && count2<m)	//两个数组 依次取小者插入到ary3中
	{
		if(ary1[i]<ary2[j])
		{
			ary3[len]=ary1[i];
			i++;
			count1++;
			len++;
		}
		else
		{
			ary3[len]=ary2[j];
			j++;
			count2++;
			len++;
		}
	}

	if(count1<n)	//插剩下的
	{
		for(k=count1;k<n;k++)
		{
			ary3[len]=ary1[k];
			len++;
		}
	}
	else
	{
		for(k=count2;k<m;k++)
		{
			ary3[len]=ary2[k];
			len++
		}
	}
	for(k=0;k<len;k++)
	{
		ary1[k]=ary3[k];
		printf("%d\n",ary1[k] );
	}







}