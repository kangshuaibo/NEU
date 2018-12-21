//题目：有一个3*3的二维数组，数组中的数由键盘录入，请将数组中的奇数输出到奇数行 偶数输出到偶数行 每一行3个数

//定义两个数组一个存放奇数 一个存放偶数 扫描整个二维数组 按题目要求打印输
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int matrix[3][3]={1,3,4,6,8,11,14,19,18};

	int array_odd[9];
	int array_even[9];//定义分别存放奇数和偶数的数组

	int row=0;
	int col=0;//定义数组下标i，j

	int even_len=0;
	int odd_len=0;  //定义奇偶的长度k

	for(row=0;row<3;row++)
		for(col=0;col<3;col++)
			if(matrix[row][col]%2==0)//扫描数组 是偶数
			{
				array_even[even_len]=matrix[row][col];
				even_len+=1;
			}
			else
			{
				array_odd[odd_len]=matrix[row][col];
				odd_len+=1;
			}


	//按题目要求打印
    int even_index=0;
    int odd_index=0;//定义下标i j

    int count=0;//当前已经打印数字的个数
    while(count<9)
    {
    	int odd_count=0;//奇数计数
    	for(    ;odd_index<odd_len;odd_index++)
    	{
    		printf("%d ", array_odd[odd_index]);
    		count+=1;
    		odd_count+=1;
    		if(odd_count%3==0)
    			break;

    	}
    	odd_index++;
    	printf("\n");

    	int even_count=0;
    	for(    ;even_index<even_len;even_index++)
    	{
    		printf("%d ",array_even[even_index] );
    		count+=1;
    		even_count+=1;
    		if(even_count%3==0)
    			break;
    	}
    	even_index++;
    	printf("\n");

    }



	return 0;
}
