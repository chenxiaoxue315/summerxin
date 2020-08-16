/*描述
给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出，如果有相同分数则名字字典序小的在前。
输入
第一行为n (0 < n < 20)，表示班里的学生数目；
接下来的n行，每行为每个学生的名字和他的成绩, 中间用单个空格隔开。名字只包含字母且长度不超过20，成绩为一个不大于100的非负整数。
输出
把成绩单按分数从高到低的顺序进行排序并输出，每行包含名字和分数两项，之间有一个空格。
样例输入
4
Kitty 80
Hanmeimei 90
Joey 92
Tim 28
样例输出
Joey 92
Hanmeimei 90 
Kitty 80
Tim 28*/
//冒泡排序 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string m[21]; //姓名 
	int a[21],n,k,i,j;//a[]为分数 
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m[i]>>a[i];
	}
	//冒泡 排序 
	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]<a[j+1]||a[j]==a[j+1]&&m[j]>m[j+1])
			{
				swap(m[j],m[j+1]);
				swap(a[j],a[j+1]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<m[i]<<" "<<a[i]<<endl;
	}
	return 0;
}

