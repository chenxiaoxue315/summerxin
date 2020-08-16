/*描述
给定一个长度为N（不大于500）的正整数序列，请将其中的所有奇数取出，并按升序输出。
输入
共2行：
第1行为 N；
第2行为 N 个正整数，其间用空格间隔。
输出
增序输出的奇数序列，数据之间以逗号间隔。数据保证至少有一个奇数。
样例输入
10
1 3 2 6 5 4 9 8 7 10
样例输出
1,3,5,7,9*/  
//快排，但是这里只用了sort函数，重点是分离出奇数序列 
#include<iostream>
#include<algorithm>
using namespace std;
int a[600],b[600];
int main()
{
	int n,j=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2)//分离奇数，保存在b[]数组 
		{
			b[j++]=a[i];
		}
	}
	sort(b,b+j);//快排函数 
	for(i=0;i<j;i++)
	{
		if(i>0)//逗号和数字分开输出，才能保证最后数字后面没有逗号 
		{
			printf(",");
		}
		printf("%d",b[i]);
	}
	printf("\n"); 
	return 0; 
}

