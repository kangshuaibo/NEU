//该元素在二维数组中在这一行最大 这一列最小
//最多有一个 也可能没有
#include <stdio.h>
#define N 4
#define M 5
int main(int argc, char const *argv[])
{
	int a[N][M];
	

	int i,j;//矩阵输入
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
    

		printf("您的矩阵为：\n");//输出矩阵
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%5d ",a[i][j]);
		}
	 printf("\n");
	}


	//找鞍点 关键代码
	int max,maxj,flag,k;
	for(i=0;i<=N;i++)    //从第一行开始
	{
		max=a[i][0];     //假设第一列这个是最大的
	    maxj=0;
	    for(j=0;j<M;j++)//遍历第一行中元素
	    	if(a[i][j]>max)
	    	{
	    		max=a[i][j];
	    	    maxj=j;
	    	}

	   flag=1;          //假设是鞍点
	 
	    for(k=0;k<N;k++)//遍历第一列元素
	      {
	 	   if(a[k][maxj]<max)//这一列中有比他小的
	 	     {
	 		  flag=0;
	 	     }
	      }
	    if(flag)
	 	printf("存在鞍点a[%d][%d]=%d\n",i,maxj,max);break;
	}
	
    if(!flag)
    {
    	printf("不存在鞍点");
    }


	return 0;
}