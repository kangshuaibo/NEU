#include <stdio.h>
#include <string.h>
int main()
{

	void deleteListStr4Str(char enter_str[],char *list_str[]);	//声明
	char isExistedList(char **list_str,char *str);

	char *list_str[5]={"form","in","at","an","on"};
	char enter_str[100];

	gets(enter_str);

	deleteListStr4Str(enter_str,list_str);	//调用
}

char isExistedList(char **list_str,char *str)
{
	int index;
	for(index=0;index<5;index++)
	{
		if(strcmp(list_str[index],str)==0)
		{
			return 0;
		}
	}
	return 1;
}

void deleteListStr4Str(char *str,char **list_str)
{
	char new_str[100]={'\0'};

	char *move=str;
	while(*move!='\0')
	{   //移动到第一个单词开头
		while(*move==' '&& *move!='\0')	
		{
			move+=1;
		}

		

        char temp[100];
		//读一个单词复制到临时数组
		int temp_len=0;	
		while(*move!=' '&& *move!='\0')
		{
			temp[temp_len++]=*move;
			move+=1;
		}
		temp[temp_len]='\0';	//末尾加结束符



		//匹配字符串是否存在列表中 符合要求（不是no at等）拼接到new_str
		if(isExistedList(list_str,temp))	
		{
			if(new_str[0]=='\0')
			{
				strcat(new_str,temp);	//链接第一个时
			}
			else
			{
				char new_temp[101]={' ','\0'};
				strcat(new_temp,temp);	//字符串链接	链接不是第一个时 加上空格 即先到new_temp加空格 new_temp加好空格后在扔到str
				strcat(new_str,new_temp);
			}
		}
	}
	printf("%s",new_str);
}