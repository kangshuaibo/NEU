void LRShift(int array[],int elemNum,int n)
{
	int i=0;
	int temp=0;
	if(n>=1)
	{
		LRShift(array,elemNum,n-1);	//递归调用
		temp=*(array+elemNum-1);
		for(i=elemNum-2;i>=0;i--)
		{
			*(array+i+1)=*(array+i);
		}
		*array=temp;
	}
}