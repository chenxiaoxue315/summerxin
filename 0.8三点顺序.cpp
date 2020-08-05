//三点顺序
//描述：给定三角形三点，判断所给点，是按顺时针还是逆时针，顺时针输出1，逆时针输出0
//联想到求三角形面积时的叉乘
//计算 AB X AC >0 时为逆时针，反之为顺时针 
/* i       j      k
 x2-x1   y2-y1    0
 x3-x1   y3-y1    0*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	if(((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1))>0)
	cout<<"0"<<endl;
	else
	cout<<"1"<<endl;
	return 0; 
	
} 
 
