/*10:单词排序
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一行单词序列，相邻单词之间由1个或多个空格间隔，请按照字典序输出这些单词，要求重复的单词只输出一次。（区分大小写）
输入
一行单词序列，最少1个单词，最多100个单词，每个单词长度不超过50，单词之间用至少1个空格间隔。数据不含除字母、空格外的其他字符。
输出
按字典序输出这些单词，重复的单词只输出一次。
样例输入
She  wants  to go to Peking University to study  Chinese
样例输出
Chinese
Peking
She
University
go
study
to
wants*/ 
//冒泡排序 
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int c=0;
	string s[101];

	for (;cin>>s[c];c++);//循环输入字符串数组 s

	for (int i=0;i<c-1;i++)
	for (int j=i+1;j<c;j++)
	if (s[i]>s[j])
	swap (s[i],s[j]);//要是前比后大就交换，字符串的比较
	
	cout<<s[0]<<endl;//先输出第一个，后面和前面比较，输出后面的，会方便
	for (int i=0;i<c-1;i++)
	if (s[i]!=s[i+1]) cout<<s[i+1]<<endl;//再把后面的输出完

	return 0;
}

