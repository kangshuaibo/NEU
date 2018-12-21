//有一个内容为英文的文本文件file.txt 文件中单词用空格分开 假定文件中单词少于50个 编写程序 将file.txt文件内容转存到file2.txt
//要求file2文件内容按字母排序
#include <stdio.h>
#include <string.h>
int main()
{
	char buf[50][64]={0};
	char tmp[64];
	FILE *fpin;
	FILE *fpout;		//用于读取文件的指针
	int n;
	int i,j;

	fpin=fopen("file.txt","r");	//打开文件 读

	   if(fpin==NULL)	//判断合法
	   {
		printf("can not open file\n");
		exit(1);
	   }

	n=0;
	while(fscanf(fpin,"%s",buf[n]) > 0)	//将文件中单词存到二维数组中
	{
		n++;
	}

	fclose(fpin);		//关闭文件

	//冒泡排序
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(strcmp(buf[j],buf[j+1]));
			strcpy(  tmp ,buf[j+1]);
			strcpy(buf[j+1],buf[j]);
			strcpy(  buf[j],tmp   );
		}
	}


	fpout=fopen("file2.txt","w");		//打开文件 写

	   if(fpout==NULL)	//判断合法
	   {
		 printf("cannot open\n");
		 exit(1);
	   }

	for(i=0;i<n;i++)
	{
		fprintf(fpout, "%s\n",buf[i] );		//数组中存到文件
	}

	fclose(fpout);				//关闭文件




}