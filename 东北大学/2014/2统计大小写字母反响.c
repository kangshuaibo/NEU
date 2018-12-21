#include <stdio.h>
#define MAXSIZE 100
int main()
{
	void UpLowerchar(char *str,int *lower,int *upper);
	void reverseput(char *str);	//声明

	int lower=0;
	int upper=0;
	char str[MAXSIZE];
	gets(str);
	puts(str);
	UpLowerchar(str,&lower,&upper);	//调用
	printf("大写字母个数%d 小写字母个数%d \n",upper,lower);

	reverseput(str);	//调用
}

void UpLowerchar(char *str,int *lower,int *upper)
{
	char *p=str;
	char *t=NULL;
	while(*p)
	{
		if( (*p>='A')&&(*p<='Z') )
			(*upper)++;
		if( (*p<='a')&&(*p<='z'))
			(*lower)++;
		p=p+1;
	}
}

void reverseput(char *str)
{
	char *p=str;
	while(*p)
	{
		p++;
	}
	p=p-1;	//p指向最后一个字母


	while(p>=str) //反向逐个输出字母
	{
		if((*p>'A')&&(*p<'Z'))
			printf("%c",*p );
		p--;
	}
}