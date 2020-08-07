/*描述:
一个长度为n（n>0）的序列中存在"有趣的跳跃"当前仅当相邻元素的差的绝对值经过排序后
正好是从1到(n-1)。例如，1 4 2 3存在"有趣的跳跃"，因为差的绝对值分别为3,2,1。
当然，任何只包含单个元素的序列一定存在"有趣的跳跃"。
你需要写一个程序判定给定序列是否存在"有趣的跳跃"。

输入:
一行，第一个数是n（0 < n < 3000），为序列长度，接下来有n个整数，依次为序列中各元素，
各元素的绝对值均不超过1,000,000,000。
输出:
一行，若该序列存在"有趣的跳跃"，输出"Jolly"，否则输出"Not jolly"。*/
 
//思路：我们需要元素的差的绝对值,排序。 abs() 和 sort()即可
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[3007],b[3007];
	int i;
	int flag=0;//flag用于判断是否是"jolly" 
	cin>>n;
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		b[i-1]=abs(a[i-1]-a[i]);//表示出相邻元素差的绝对值
	}
 
	sort(b,b+(n-1));//快速排序 
	
	for(i=0;i<n-1;i++)
	{
		if(b[i]!=i+1)//判断是否符合jolly 
		{
			flag=1;
			break;
		}
	} 
	 
	if(flag==0)
	cout<<"Jolly"<<endl;
	if(flag==1)
	cout<<"Not jolly"<<endl;
	return 0;
}
