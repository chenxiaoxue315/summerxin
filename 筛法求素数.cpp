//筛法求素数(质数) 
//1普通线性筛法 
//原理：素数的倍数是合数，合数的倍数是合数
/*#include<bits/stdc++.h>
#define maxx 19 //范围 
using namespace std;
int su[maxx];//存放素数
int mask[maxx+7];//标记是否为素数(-1为素数，0为合数) 
int cnt;//su[]数组下标 
void sushu()
{
	cnt=1;//su[]数组下标 从1开始 
	memset(mask,-1,sizeof(mask));//标记数组初始值赋值为-1
	for(int i=2;i<maxx;i++)//范围为开区间则i<maxx,闭区间为i<=maxx 
	{
		if(mask[i]==-1)
		su[cnt++]=i;
		
		for(int j=i*2;j<maxx;j+=i)//素数i在范围内的所有倍数都标记为0 
		mask[j]=0;
	 } 
 } 
 int main ()
 {
 	sushu();
 	for(int i=1;i<cnt;i++)//*i<cnt 
 	{
 		cout<<su[i]<<" ";
	 }
	 return 0;
 }*/
//2.快速线性筛法
//原理：任何一个合数都可以写成几个质数相乘的形式  
#include<bits/stdc++.h>
#define maxx 200//范围 
using namespace std;
int su[maxx];
int mask[maxx+7]; 
int cnt;
void quick_su()
{ 
	memset(mask,-1,sizeof(mask));//标记数组初始化
	cnt=0;
	mask[0]=mask[1]=0;//0和1不是素数，标记为0 
	for(int i=0;i<maxx;i++)
	{
		if(mask[i]==-1)
		su[cnt++]=i;
		
		for(int j=0;j<cnt&&i*su[j]<maxx;j++)
		{
			mask[i*su[j]]=0;//筛掉小于等于i的素数和i的积构成的合数 
		}
	 } 
 } 
int main()
{
	quick_su();
	for(int i=0;i<cnt;i++)
	printf("%d ",su[i]);
	printf("\n");
	return 0;
}
