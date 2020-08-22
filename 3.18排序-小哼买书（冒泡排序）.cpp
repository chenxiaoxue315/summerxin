/*小哼买书，去重，排序
第一行输入一个正整数 n，n本书
第二行输入n 个书的ISBN号
输出两行，第一行是需要买k本书，第二行是K本书的ISBN号*/
//冒泡排序
#include<stdio.h>
int main ()
{
	int a[101],n,i,t;
	scanf("%d",&n);//读入n
	for(i=1;i<=n;i++)//循环读入N个图书的ISBN号
	{
		scanf("%d",&t);//把每一个ISBN号读到变量t中 
	} 
	//开始冒泡排序
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
	printf("%d ",a[1]);//输出第一个数
	for(i=2;i<=n;i++)//从2循环到n
	{
		if(a[i]!=a[i-1])//如果当前这个数是第一次出现则输出
		printf("%d ",a[i]); 
	} 
	return 0;
 } 
