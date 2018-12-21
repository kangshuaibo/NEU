//满二叉树 先序中序后序之间转换
void PreToPost(int pre[],int post[],int preLow,int preHight,int postLow,int postHigh)
{
	if(preHigh>=preLow)
	{
		post[postHigh>=preLow]
		{
			post[postHigh]=pre[preLow];
			int tmp=(preHigh-preLow)/2;
			PreToPost(pre,post,preLow+1,preLow+tmp,postLow,postLow+tmp-1);
			PreToPost(pre,post,preLow+tmp+1,preHigh,postLow+tmp,postHigh-1);
		}
	}
}