/*
某单位员工工资如下定义
struct Salary
{
	char id[10];
	char name[20];
	float wage;
	struct Salary *next;
}
(1)输入该单位所有员工工资信息
(2)计算该单位员工工资的中位数（将员工工资升序排列 中位数为中间员工工资 若为偶数中间两位的平均数）
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Salary
{
	char id[10];
	char name[20];
	float wage;
	struct Salary *next;
}Salary;

int main()
{
	Salary *s=(Salary*)malloc(sizeof(Salary));
	s->next=NULL;

	char end_label;//#结束

	int count=0;
	while(end_label!='#')
	{
		scanf("%c",&end_label);

		if(end_label!='#')
		{
			//生成节点信息
			Salary *temp=(Salary*)malloc(sizeof(Salary));

			scanf("%f",&(temp->wage));
			scanf("%s",temp->id);
			getchar();	//过滤其中回车
			gets(temp->name);

			printf("**%lf\n",temp->wage );

			count+=1;

			temp->next=s->next;//头插法
			s->next=temp;
		}
	}


    //定义指针遍历所有信息 将其中工资信息存放到定义的数组中
	Salary *temp=s->next;

	float array_wage[count];

	int array_len=0;
	while(temp!=NULL)
	{
		array_wage[array_len]=temp->wage;
		printf("%f",temp->wage );
		array_len+=1;
		temp=temp->next;
	}

	//冒泡排序
	int i=0;
	for(i=0;i<array_len;i++)
	{
		int index;
		for(index=1;index<array_len-i;index++)
		{
			if(array_wage[index-1]>array_wage[index])
			{
				float temp = array_wage[index];
				array_wage[index]=array_wage[index-1];
				array_wage[index-1]=temp;
			}
		}
	}

	//计算中卫数
	float middle_number=0;
	if(count%2==0)
	{
		middle_number=array_wage[count/2-1]+array_wage[count/2];
		middle_number/=2;
	}
	else
	{
		middle_number=array_wage[count/2-1];
	}
	printf("%f\n",middle_number );









}