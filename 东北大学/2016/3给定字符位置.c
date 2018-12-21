/*
查找给定字符在字符串中首次出现位置
要求：
1、不得使用字符串处理的库函数
2、在主函数中输入字符串 要查找的字符 调用子函数
3、子函数完成查找任务 如果字符串包含所查找的字符 返回该字符在字符串中首次出现位置 否则返回0
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
int main()
{
	char Index(char *str,char character);//声明 

	char character;
	char str[MAXSIZE]={0};

	int index;
	//输入字符 并显示
	printf("Enter a character:");
	character=getchar();
	putchar(character);

	putchar('\n');
	//输入字符串 并显示
	printf("输入字符串：");
	scanf("%s",str);
	printf("str=%s\n",str);


	index=Index(str,character);//调用 返回值字符地址 

	if(index>=1)
		printf("字符首地址是%d\n",index-1);
	else
		printf("字符不存在\n");
}

char Index(char *str,char character)
{//查找给定 字符 在 字符串 中首次出现位置
	char *p;
	p=str;//指向字符串首地址

	int index=1;//指示在字符串中的位置
	while(*p)
	{
		printf("*****");
		if(*p==character)
			return index;
		p++;
		index++;

	}
	return 0;
}
