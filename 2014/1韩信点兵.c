//古代算书上韩信点兵 卫兵 列队成五行纵队末行1人，列成六行纵队末行五人，列成7行末行4人，列成11行末行10人，求符合条件最小的数。
#include <stdio.h>
int main()
{
	int data=1;
	while( ((data%5==1)&&(data%6==5)&&(data%7==4)&&(data%11==10))==0 )
	{
		data=data+1;
	}
	printf("data=%d",data );
}