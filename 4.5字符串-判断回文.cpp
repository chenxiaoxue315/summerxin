/*描述
输入一个字符串，输出该字符串是否回文。回文是指顺读和倒读都一样的字符串。
输入
输入为一行字符串（字符串中没有空白字符，字符串长度不超过100）。
输出
如果字符串是回文，输出yes；否则，输出no。
样例输入
abcdedcba
样例输出
yes */
#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int i,len,x;
	string s;
	cin>>s;
	len=s.length();
	x=len-1;
	for(i=0;i<len;i++)
	{
		if(s[i]==s[x])//前后比较，不同跳出输出no 
		x--;
		else
		break;
	}
	if(i>=x)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
	
}
