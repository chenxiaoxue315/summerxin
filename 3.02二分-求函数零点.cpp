/*描述
有函数：f(x) = x5 - 15 * x4+ 85 * x3- 225 * x2+ 274 * x - 121
已知 f(1.5) > 0 , f(2.4) < 0 且方程 f(x) = 0 在区间 [1.5,2.4] 有且只有一个根，请用二分法求出该根。
输入
无。
输出
该方程在区间[1.5,2.4]中的根。要求四舍五入到小数点后6位。*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
//给定的函数，函数不同时可以变换 
double test(double k)
{
	return pow(k,5)-15*pow(k,4)+85*pow(k,3)-225*pow(k,2)+274*k-121;
 } 
int main()
{
	double l=1.500000,r=2.400000;//四舍五入到小数点后六位 
	double mid=0.0;
	while(abs(l-r)>0.000001)
	{
		mid=(l+r)/2;
		if(test(mid)>0)
		{
			l=mid;
		}
		else if(test(mid)<0)
		{
			r=mid;
		}
	 } 
	printf("%.6f\n",mid);
	return 0;
}
