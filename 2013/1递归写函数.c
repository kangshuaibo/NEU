#include<stdio.h>
#include<stdlib.h>
int f(int n,int m);	//声明
int main()
{
	int n,m;
	int sum=0;
	printf("please enter m n\n");
	scanf("%d %d",&m,&n);

	sum=f(m,n);
	printf("sum=%d\n",sum );

}

int f(int m,int n)
{
	int sum=0;
	if( (m==0)||(m>n) )
		return 0;
	if( (m==1)||(m==n) )
		return 1;
	sum=m+f(n-1,m)-f(n-1,m-1);
	return sum;
}