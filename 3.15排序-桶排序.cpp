/*桶排序，这里距离用五个数的排序来介绍桶排序*/
#include<stdio.h>
int main ()
{
	int a[11],i,j,t;
	for(i=0;i<=10;i++)
	a[i]=0;//初始化为0
	
	for(i=1;i<=5;i++)
	{
		scanf("%d",&t);//把每一个变量读到变量t中
		a[t]++;//进行计数 
	}
	for(i=0;i<=10;i++)//判断a[0]~a[10] 
        for(j=1;j<=a[i];j++)//出现了几次就打印几次 
		    printf("%d ",i);
			
	getchar();
	return 0; 
 } 
