char *RSSindex(char *str,char *substr)
{
	char *p=NULL;
	char *p1=NULL;
	char *slipping_str=NULL;

	char *index=NULL;`

	int substring_len=0;
	char *temp_substr=substr;
	while(*temp_substr!='\0')
	{
		substring_len+=1;
		temp_substr+=1;
	}
	p=str;
	p1=substr;
	while(*p!='\0')
	{
		slipping_str=p;
		p1=substr;
		对字符串进行匹配 查找子串出现位置
		while(*slipping_str==*p1 &&*p1!='\0')
		{
			slipping_str++;
			p1++;
		}
		if(!p1=='\0')	//子串匹配成功
		{
			index=p;
		}
		p++;
	}
	return index;
}