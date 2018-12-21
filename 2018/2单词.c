//题目：键盘输入长度不超过3000个字符的英文 单词之间使用空格分割 以#为结束标志 输出其中最短以及最长单词
//思想：从头到尾扫描数组 计数器从0增加 遇到空格单词结束 将单词长度（计数器）与最大和最小比较 更新最小最大值
#include <stdio.h>
#include <string.h>
int main()
{
	char str[10];

	//输入单词

	int str_len=0;
	while(str_len<=10)
	{
		char temp;
		//输入字母
		scanf("%c",&temp);

		   if(temp=='#')
			   break;

		str[str_len]=temp;
		str_len+=1;
	}
	printf("字符长度%d\n",str_len );


    //输出单词长度 进行大小比较
	int index=0;  //即数组下标i
	int min_word=3000;
	int max_word=0;
	while(index<str_len)
	{//计算一个单词的长度 若遇到空格 单词结束
		int word_len=0;
		while(str[index]!=' '&&index<str_len)  //😄不是空格单词没结束 记录字符数 即单词长度
		{
			index+=1;
			word_len+=1;
		}
		if(word_len!=0 && min_word>word_len)//当前是空格 记录的是此单词长度 拿这个单词与最大最小比较
			min_word=word_len;
		if(word_len>max_word)
			max_word=word_len;
		index+=1;
	}
	printf("最小%d 最大%d\n",min_word,max_word );
}