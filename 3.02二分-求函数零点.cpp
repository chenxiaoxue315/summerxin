/*����
�к�����f(x) = x5 - 15 * x4+ 85 * x3- 225 * x2+ 274 * x - 121
��֪ f(1.5) > 0 , f(2.4) < 0 �ҷ��� f(x) = 0 ������ [1.5,2.4] ����ֻ��һ���������ö��ַ�����ø���
����
�ޡ�
���
�÷���������[1.5,2.4]�еĸ���Ҫ���������뵽С�����6λ��*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
//�����ĺ�����������ͬʱ���Ա任 
double test(double k)
{
	return pow(k,5)-15*pow(k,4)+85*pow(k,3)-225*pow(k,2)+274*k-121;
 } 
int main()
{
	double l=1.500000,r=2.400000;//�������뵽С�������λ 
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
