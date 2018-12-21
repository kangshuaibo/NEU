#include<stdlib.h>
#include<stdlib.h>

int main()
{
	char string[10]="a";
	char string2[10]="acba";
	int head=0;
	int tail=strlen(string2)-1;

	is_palindrome(string2,head,tail);
}

void is_palindrome(char *string,int head, int tail)
{
	if(head<tail && string[head]==string[tail])	//首尾比较，相等就比较下一组
	{
		is_palindrome(string,++head,--tail);
	}

	//如果前面的if没执行（执行了会进入到下一次递归调用）就执行下面的 跳出递归
	if(head<tail)
	{
		printf("Is not parlindrome");
		exit(0);
	}

	if(head>=tail)
	{
		printf("Is parlindrome");
		exit(1);
	}

}