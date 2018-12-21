/*
歌咏比赛中 有8个评委对20位选手进行评分，选手按1-20号进行编号，每个评委给出1-10的分数，在统计分数时去掉最高最低分
计算平均分。
要求：
（1）评委输入
（2）按评分输出得分最高的三位选手编号和分数
*/
#include <stdio.h>
typedef struct competitor
{
	double grade;
	int no;
}competitor;

int main()
{
	void InsertSort(competitor *players,double ave,int number);//声明
	
	
	int max=0;
	int min=0;

	int grade;//成绩
	int number=0;//编号
	double sum=0;
	double ave;
	
	

	competitor players[21]={0};//定义结构体数组，存放选手信息 数组名players

	int i,j;
	for(j=0;j<20;j++)//每个选手从1-20
	{
		sum=0;
		for(i=0;i<8;i++)
		{
			scanf("%d",&grade);//这个选手 8个评委分别给分
			sum=sum+grade;

			if(grade<min)
			{
				min=grade;
			}
			if(grade>max)
			{
				max=grade;
			}
		}

		sum=sum-min-max;
		printf("%f\n",sum );

		ave=sum/6;//8个评委去掉最高分 最低分剩余6个
		printf("ave=%f\n",ave);

		number++;//编号从1开始 每轮是个评委评完后编号加1
		InsertSort(players,ave,number);//将选手的平均成绩 编号传递到数组首地址排序
	}
	printf("max1=%f\n no is %d\n",players[21].grade,players[21].no);//输出成绩最高三位
	printf("max1=%f\n no is %d\n",players[20].grade,players[20].no);
	printf("max1=%f\n no is %d\n",players[19].grade,players[20].no);
}
void InsertSort(competitor *players,double ave,int number)
{
	int i;
	int j=number-1;

	while(j>=0 && ave<players[j].grade)//一开始数组是空的 直接插入排序
	{
		players[j+1]=players[j];
		--j;
	}

	players[j+1].grade=ave;
	players[j+1].no=number;
}