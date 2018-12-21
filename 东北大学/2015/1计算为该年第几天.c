//输入某天的年月日 计算该天为当年的第几天 如输入 1998，9，25
//思想把月份的天数放到一个数组中 （若6月18日 就是前5个月相加，再加上本月的18天）
//若遇到闰年需要再加1（当月份为1、2月除外）

#include <stdio.h>
//声明
int leap(int year);//判断是否为闰年 是返回1
int sum_day(int month,int day);//计算前几个月的天数和

int main(int argc, char const *argv[])
{
	int year,month,day;
	int days;
	printf("请输入年，月，日：");
	scanf("%d,%d,%d",&year,&month,&day);

	if(leap(year)==1 && month>=3)
		days=sum_day(month,day)+1;

	printf("%d",days );

	return 0;
}

int sum_day(int month,int day)
{
	int month_s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum;
	for(i=1;i<=month;i++)
		sum=day+month_s[i];	//前几个月天数之和加上本月天数
	return sum;
}


int leap(int year)
{	
	int n=1;
	if(year%4!=0)
		n=0;
		else if(year%100!=0)
			n=1;
			else if(year%400!=0)
				n=0;
				else
					n=1;
	return n;
}