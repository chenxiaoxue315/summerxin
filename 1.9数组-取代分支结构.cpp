/*用数组取代复杂的分支结构
例：已知2012 1 25是星期三，编写一个程序，输入 年月日 表示一个2012 1 25 以后的日期，输出是星期几*/
//思路：2012 1 22 是星期天，算出结果日期是从该天起过了x天，然后输出x%7
#include<iostream>
using namespace std;
int monthdays[13]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
int main ()
{
	int year,month,date;
	int days=0;
	cin>>year>>month>>date;
	//先把整年的天数加了 
	for(int y=2012;y<year;y++)
	{
		if(y%4==0&&y%100!=0||y%400==0)
		days+=366;
		else
		days+=365;
	}  
	//判断不是整年的年份是否是闰年 
	if(year%4==0&&year%100!=0||year%400==0)
		monthdays[2]=29;
		
	for(int m=1;m<month;m++)
		days+=monthdays[m];
		
		days+=date;
		days-=22;//减去2012年多来的天数
		cout<<days%7<<endl;
		return 0; 
 } 
