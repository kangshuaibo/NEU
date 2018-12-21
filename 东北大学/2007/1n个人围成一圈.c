//n个人围成一圈 从第一个人开始计数 凡事数到1 2 4 8 2^n的人推出圈子 求推出圈子的顺序
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int array[n];
	int count=0;
	int num=1;
	int remain=n;
	while(1)
	{
		int index=0;
		for(index=0;index<n;index++)
		{
			if(array[index]!=1 && ++count==num)
			{
				array[index]=1;	//出圈子的序号置为1 下次为1的不计入循环
				remain-=1;
				num*=2;
				printf("%d\n",index+1 );
			}
			if(remain==0)
				break;
		}

	}
}