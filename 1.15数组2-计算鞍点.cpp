/*描述
给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25

输入
输入包含一个5行5列的矩阵
输出
如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"*/
//寻找唯一的点，使得行最大值&&列最小值 
#include<iostream>
#include<cstdio> 
using namespace std;
int main ()
{
	int i,j;
	int a[6][6],h[6],l[6];//h存每行最大值，l存每列最小值 
	
	//读入矩阵 
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	for(i=1;i<=5;i++)
	{
		h[i]=0;//行求最大值，所以赋小值 
		l[i]=999999999;//列求最小值，所以赋大值 
	} 
	
	//寻找行最大，列最小 
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(h[i]<a[i][j]) h[i]=a[i][j];
			if(l[j]>a[i][j]) l[j]=a[i][j];
		}
	 } 
	int flag=0,x,y,s;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)//判断行最大和列最小是否为一个数 
		{
			if(h[i]==l[j])
			{
				flag++;
				x=i;
				y=j;
				s=a[i][j];
			}
		}
	}
 
	if(flag==1) printf("%d %d %d\n",x,y,s);
	else printf("not found\n"); 
	 
	 return 0;
}
