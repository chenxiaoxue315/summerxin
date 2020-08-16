/*描述
输入n个数，从小到大将它们输出，重复的数只输出一次。保证不同的数不超过500个。

输入
第一行是一个整数n。1 <= n <= 100000。
之后n行，每行一个整数。整数大小在int范围内。
输出
一行，从小到大不重复地输出这些数，相邻两个数之间用单个空格隔开。
样例输入
5*/
//这个输入在noi二分里面找的题，但是好像和二分没啥关系 
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	
	int i;
	for(i=0; i<n; i++)
		cin>>a[i];
	
	sort(a,a+n);//快速排序 
	
	cout<<a[0]<<" ";
	for(i=1; i<n; i++)
		if(a[i]!=a[i-1])//如果此位和和是上一位不一样就直接输出，否则不输出 
			cout<<a[i]<<" ";
	
	return 0;
} 
