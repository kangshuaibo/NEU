/*学生某门课程结构体如下
struct Student
{
	int studentID;
	float score;
	struct student *next;
};
(1)动态建立链表存储学生成绩 键盘输入学号成绩 人数 输入0表示结束
(2)分别统计60以下60-69 70-79 80-89 90-100各个分数段的人数 并输出统计结果
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
	int studentID;
	float score;
	struct student *next;
}Student;

//创建链表
int creat_list(Student **p)
{
	Student *temp=NULL;
	Student *tp=NULL;

	float score=0;
	int studentID=0;

	//各个区间人数
	int A=0;//90-100
	int B=0;
	int C=0;
	int D=0;
	int E=0;//60以下

	printf("输入float学号成绩 0推出\n");

    printf("Enter studentID:");
    scanf("%d",&studentID);
    if(studentID<0)
    {
    	printf("链表构建失败\n");
    	exit(0);
    }

    printf("Enter score:");
    scanf("%f",&score);
    if(score<0||score>100)
    {
    	printf("链表构建失败\n");
    	exit(0);	
    }


    while(score>=0&&score<=100&&studentID>=0)
    {
    	if(score>=90&&score<=100)
    		A++;
    	else if(score>=80&&score<=89)
    		B++;
    	else if(score>=70&&score<=79)
    		C++;
    	else if(score>=60&&score<=69)
    		D++;
    	else
    		E++;
    }
    
    temp=(Student*)malloc(sizeof(Student)*1);
    temp->score=score;
    temp->studentID=studentID;

    temp->next=tp->next;
    tp=temp;

    printf("A:%d B:%d C:%d D:%d E:%d\n",A,B,C,D,E );

}//creat_list


int print_list(const Student *p)
{
	int i=0;
	if(p==NULL)
	{
		printf("Func print_list()err\n");
		return -2;
	}
	printf("对构建链表进行输出：\n");
	Student *tp=NULL;
	tp=p->next;

	while(tp)
	{
		printf("No.%dnode_data%d %f\n",i++,tp->studentID,tp->score );
		tp=tp->next;
	}
	if(tp!=NULL)
	{
		printf("链表构建失败\n");
		return-2;
	}
	return 1;
}

int main()
{
	Student*Head=NULL;
	int ret=0;
	creat_list(&Head);
	print_list(Head);
}