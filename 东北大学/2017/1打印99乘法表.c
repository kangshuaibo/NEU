#include<stdio.h>
/*int main(int argc, char const *argv[])
{
	int m,n;
	m=1;
	while(m<=9)//外循环控制有几行
	{
		n=1;
		while(n<=m)//内循环控制一行循环多少次
		{
			
			printf("%d*%d=%-4d",m,n,m*n );//在这一行中 每循环着一个 输出一个
		    n++;
	    }
	
	printf("\n");//一行打印结束后换行
    m++;
	
	}
return 0;
}*/
int main(int argc, char const *argv[])
{
	int m,n;
	for (m=1; m<=9; m++)
	{
		for (n=1; n<=m; n++)
		{
			printf("%d*%d=%d\t",m,n,m*n );
		}
		printf("\n");
	}
	return 0;
}





