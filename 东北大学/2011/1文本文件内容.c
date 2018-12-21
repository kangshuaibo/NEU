//编写程序 显示指定文本文件内容 要求每行显示的字符数不超过30个
#include <stdio.h>
int main()
{
	FILE *fp;
	char buf;
	int count=0;

	fp=fopen("1.txt","r");


		if(fp==NULL)
		{
			printf("cannot open\n");
			exit(0);
		}


	while(fscanf(fp,"%c",&buf)>0)
	{
		count++;
		printf("%c\n",buf );
		if(buf=='\n')
		{
			count=0;
			continue;
		}
		if(count%30==0)
		{
			printf("\n");
		}
	}

	fclose(fp);


}