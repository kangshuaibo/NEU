//键盘输入50个单词 每个单词由空格分割 判断这n个单词是否按字典顺序
#include <stdio.h>
#include <string.h>
#define N 50
int Order(char word[N][20],int n)
{
	if(n<2)
		return 1;
	if(strcmp(word[n-2],word[n-1])<=0)
	{
		if(!Order(word,n-1))
			return 0;
		else
			return 1;
		
	}
	return 0;
}


int main()
{    int Order(char word[N][20],int n);

	char word[N][20];
	
	int i=0,j=0;

	char c;
	while( (c=getchar())!='\n')
	{
		if(c==' ')		//空格判断下一个单词开始 列向下移动
		{
			word[i][j]='\0';
			j=0;
			i++;
		}
		else		//输入单词 行向右移动
		{
			word[i][j]=c;
			j++;
		}
	}
	word[i][j]='\0';
	printf("%d\n",Order(word,i+1) );
	return 0;
}	