//边写函数char *stuff(char *str1,char *str2,int i,int j)将串str1中第i个字符到第j个字符之间的字符串替换成str2
#include <stdio.h>
char *stuff(char *str1,char *str2,int i,int j)
{
	char array[512];
	char *p;
	char *q;
	int x;


	p=str1;
	q=array;	//数组名表述数组首地址
	for(x=0;x<i;x++)	//i之前复制到备用数组	 循环到i
	{
		*q=*p;
		p++;
		q++;
	}

	p=str2;
	while(*p!='\0')	   //str2即要替换的那部分 复制到备用数组
	{
		*q=*p;
		p++;
		q++;
	}




	p=str1+j+1;			//j之后复制到备用数组 循环从j+1开始
	while(*p!='\0')
	{
		*q=*p;
		p++;
		q++;
	}

	*q='\0';
	p=array;
	q=str1;
	while(*p!='\0')		//备用数组覆盖str1
	{
		*q=*p;
		p++;
		q++;
	}
	*q='\0';	//末尾加上结束符
	return str1;
}


int main()
{
	char a[64]="abcdefghijklmn";
	stuff(a,"1234",3,5);
	printf("%s\n",a );
}