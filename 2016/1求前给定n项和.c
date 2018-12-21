//题目：求s=1 + 2x3 + 4x5x6 + 7x8x9x10 + 11x12x13x14x15...的前n项和 由键盘输入n
#include<stdio.h>
//声明
int func(int n);//阶乘
int item(int x);//每一项的值

int main()
{
	int num;
	int item_sum=0;

	scanf("%d",&num);//输入 求前num项和
   
   int i;
   for(i=num;i>0;i--)//如求前五项 从第五项开始 加上第四项 加上第3项...
	  item_sum=item_sum+item(i);

   printf("item_sum=%d\n",item_sum);
   

}

int item(int num)//求第num项的值
{	//由题意 如第四项 10！/6！ 
	//第四项的末尾数为1+2+3+4=10 即连加到4
	int a,b;
	int tail=0;

	int i;
	for(i=1;i<=num;i++)//求末尾数字 从1连加到num
		tail=tail+i;

	a=func(tail);
	b=func(tail-num);

	return a/b;
	
}

int func(int num)//求阶乘
{
 int fac = 1;//用于累乘

 int i = 1;
 while(i <= num)
 {
   fac = fac * i;
   i++;
 }	
 return fac;
}




