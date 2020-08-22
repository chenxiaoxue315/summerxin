/*快速排序远代码，不使用函数，输入数字n 输入N个数，对这n个数排序*/
#include<stdio.h>
int a[101],n;//定义全局变量

void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left<right)
	 return;
	 
	temp=a[left];//temp中存储的就是基准数
	i=left;
	j=right;
	while(i!=j)
	{
		//顺序很重要，要先从右后往左找
		while(a[j]>=temp&&i<j)
		 j--;
		//再从左往右找
		while(a[i]<=temp&&i<j)
		i++;
		
		//交换两个数在数组中的位置
		if(i<j)//当哨兵i和哨兵j没有相遇时 
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		} 
	} 
    //最终将基准书归位
	a[left]=a[i];
	a[i]=temp;
	
	quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程
	quicksort(i+1,right);//继续处理右边的，这里是一个递归过程的 
	return; 
 } 
int main ()
{
	int i,j;
	//读入数据
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	
	quicksort(1,n);//快速排序调用
	
	//输出后面结果
	for(i=1;i<=n;i++)
	   printf("%d",a[i]);
	 return 0; 
}
