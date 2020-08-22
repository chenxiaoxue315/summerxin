/*冒泡排序，这里简单输入十个数，从大到小排序*/
#include<stdio.h>
int main ()
{
	int a[100],i,j,t,n;
	scanf("%d",&n);//输入一个数n，表示接下来有N个数 
	for(i=1;i<=n;i++) 
        scanf("%d",&a[i]);//数读入a[]数组
	for(i=1;i<=n-i;i++)//n个数，n-1趟 
	{
		for(j=1;j<=n-1;j++)
		{
			if(a[j]<a[j+1])//比较大小并交换
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			} 
		}
	} 
	for(i=1;i<=n;i++)//输出结果 
	    printf("%d ",a[i]);
	    
	return 0; 
        
 } 
