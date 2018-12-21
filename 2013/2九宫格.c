//九宫格是3x3矩阵 要求将九个不重复的数字填入，满足各行各列，以及各对角线上的三个数字之和相等，判断九宫格是否满足要求
#include <stdio.h>
int ninesquare(int (*matrix)[3],int row,int col);	//声明
int main()
{
	int matrix[3][3]={2,9,4,7,5,3,6,1,8};
	int flag=0;
	flag=ninesquare(matrix,3,3);
	if(flag==1)
		printf("yes\n");
	else
		printf("no\n");
}

int ninesquare(int (*matrix)[3],int row,int col)
{
	int tri_sum=0;
	int col_sum=0;
	int row_sum=0;
	int i,j;
	for(i=0;i<row;i++)
	{
		row_sum=0;
		for(j=0;j<col;j++)
		{
		  if(i==j)
			 tri_sum+=matrix[i][j];
		  row_sum+=matrix[i][j];
		}
		if(row_sum!=15)
		  return 0;
	}

	if (tri_sum!=0)
	{
		return 0;
	}

	

	for(i=0;i<col;i++)
	{
		col_sum=0;
		for(j=0;j<row;j++)
			col_sum+=matrix[j][i];
		if(col_sum!=15)
			return 0;
	}

	return 1;



}