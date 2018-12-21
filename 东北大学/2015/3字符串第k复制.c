/*
将字符串第k个字符开始的全部字符复制到另一个字符串
（1）复制过程单独写一个函数 用指针
（2）在主函数输入字符串和k 并在主函数输出这个结果
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
int main()
{
	void Copy(char *string,int k,char *copystring);	//声明

	char copystring[MAXSIZE];
	char string[MAXSIZE]={'\0'};

	int k;
	gets(string);//输入字符串
	puts(string);

	printf("\n");

	printf("Enter number k\n");//输入k
	scanf("%d",&k);
	printf("复制从%d开始的字符串\n",k);

	Copy(string,k,copystring);//调用

	puts(copystring);//输出复制后字符串 即结果
}

void Copy(char *string,int k,char *copystring)
{
	char *p=NULL;
	p=string+k-1;	//p指向字符串中第k个字符的地址
	while(*p)
	{
		*copystring=*p;	//第k个字符元素赋值给 待接受的字符串
		copystring++;//指向下一个地址
		p++;
	}
	*copystring='\0';//最后一个赋结束符
}
