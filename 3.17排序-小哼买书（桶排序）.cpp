/*小哼买书，去重，排序
第一行输入一个正整数 n，n本书
第二行输入n 个书的ISBN号
输出两行，第一行是需要买k本书，第二行是K本书的ISBN号*/
#include<stdio.h>
int main ()
{
	int a[1001],n,i,t;
	for(i=1;i<=1000;i++)
	    a[i]=0;//初始化
	scanf("%d",&n);//读入n
	for(i=1;i<=n;i++)//循环读入N个图书的ISBN号
	{
		scanf("%d",&t);//把每一个ISBN号读到变量t中 
		a[t]=1;//标记出现过的ISBN号 
	} 
	
	for(i=1;i<1000;i++)//依次判断1~1000这个1000个桶 
	{
		if(a[i]==1)//如果这个ISBN号出现过则打印出来 
		printf("%d ",i); 
	} 
	return 0;
 } 
