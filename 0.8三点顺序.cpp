//����˳��
//�������������������㣬�ж������㣬�ǰ�˳ʱ�뻹����ʱ�룬˳ʱ�����1����ʱ�����0
//���뵽�����������ʱ�Ĳ��
//���� AB X AC >0 ʱΪ��ʱ�룬��֮Ϊ˳ʱ�� 
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
 
