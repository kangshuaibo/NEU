#include<stdio.h>
#include "string.h"
int main()
{
	int Total(int n); //声明

	int n;
	scanf("%d",&n);
	//输出结果
	printf("n=%d\n",n );
	printf("total=%d\n",Total(n) );
}

int Total(int n)
{
	int total;
	if(n==1)
	{
		return total=1;
	}
	else
	{
		total=Total(n-1)+n+1;
		return total;
	}
}