//思想：若树非空 通过遍历根节点所有子女计算根节点的的 然后分别递归计算每一个子树的度 取最大值

 int GetDegree_CSTree(CSTree T)//求孩子兄弟链表表示的树 T 的度 
{
 if(!T->firstchild) 
 	return 0; //空树 
 else
 {
	degree=0;
	for(p=T->firstchild;p;p=p->nextsib) 
		degree++;//本结点的度 
	for(p=T->firstchild;p;p=p->nextsib)
	{
	 d=GetDegree_CSTree(p);
	 if(d>degree) 
		degree=d; //孩子结点的度的最大值
 
  	}
	return degree; 
   }//else
}//GetDegree_CSTree

