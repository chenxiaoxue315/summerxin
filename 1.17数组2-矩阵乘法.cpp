/*描述
计算两个矩阵的乘法。n*m阶的矩阵A乘以m*k阶的矩阵B得到的矩阵C 是n*k阶的，且C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + …… +A[i][m-1]*B[m-1][j](C[i][j]表示C矩阵中第i行第j列元素)。

输入
第一行为n, m, k，表示A矩阵是n行m列，B矩阵是m行k列，n, m, k均小于100
然后先后输入A和B两个矩阵，A矩阵n行m列，B矩阵m行k列，矩阵中每个元素的绝对值不会大于1000。
输出
输出矩阵C，一共n行，每行k个整数，整数之间以一个空格分开。
样例输入 
3 2 3
1 1
1 1
1 1
1 1 1
1 1 1
样例输出
2 2 2
2 2 2
2 2 2*/
//套公式就行
#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
	int a[105][105],b[105][105],c[105][105];
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int i,j,x;
	//读入a数组 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//读入b数组 
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=k;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//数组C初始化
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			c[i][j]=0;
		}
	} 
	//套公式
	for(x=1;x<=m;x++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=k;j++)
			{
				c[i][j]+=a[i][x]*b[x][j];
			}
		}
	}
	//输出
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",c[i][j]);
		} 
		printf("\n");
	}
    return 0; 
}
