/*题目：假设AD表示出栈入栈，入栈出栈的操作序列可以表示为仅由AD表示的字符序列，存储在一个一维数组中，
栈的初始状态和终止状态为空，对于可以操做的序列为合法序列否则为非法序列
*/
//思想：设被操作序列已经存入一维数组A中，一次逐一扫描入栈序列，扫描到任意位置均检查出栈次数（I），是否小于入栈次数（O）
int Judge(char A[])
{
	int i=0;
	int j=k=0;
	while(A[i]!='\0')//逐个扫描 遇到I，j加   遇到O， k加 然后比较
	{
		switch(A[i])
		{
			case 'I':j++;break;
			case 'O':k++;
			if(k>j)
			{
				printf("非法\n");
				exit(0);
			}
			i++;
		}
		
		if(j!=k) //最后比较j k个数
		{
			printf("非法\n");
			return false;
		}
		else
		{
			printf("合法\n");
			return true;
		}
	}
}