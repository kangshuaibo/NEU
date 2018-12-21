#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int number=0;
	int temp=0;

	int array[10];
	int length = 0;
	int i=0;
	int j=0;
	int sum =0;

	scanf("%d",&number);

//取每一位到数组中看是否对称
	temp=number;
	while(temp)
	{
		array[length]=temp%10;
		length+=1;
		temp=temp/10;
	}
//看是否对称
	i=0;
	j=length-1;
	while(i<j)
	{
		if(array[i]!=array[j])
			break;
		i++;
		j--;
	}

	if(i<j)
		printf("不是回文\n");
	else
	{
		printf("是回文\n");
//继续判断是不是完数
		for(i=1;i<number;i++)
	    	if(number%i==0)
	    		sum+=i;

	    if(sum==number)
	    	printf("是完数\n");
	    else
	    	printf("不是完数\n");



	}






	return 0;
}