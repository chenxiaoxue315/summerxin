/*������ȡ�����ӵķ�֧�ṹ
������֪2012 1 25������������дһ���������� ������ ��ʾһ��2012 1 25 �Ժ�����ڣ���������ڼ�*/
//˼·��2012 1 22 �������죬�����������ǴӸ��������x�죬Ȼ�����x%7
#include<iostream>
using namespace std;
int monthdays[13]={-1,31,28,31,30,31,30,31,31,30,31,30,31};
int main ()
{
	int year,month,date;
	int days=0;
	cin>>year>>month>>date;
	//�Ȱ�������������� 
	for(int y=2012;y<year;y++)
	{
		if(y%4==0&&y%100!=0||y%400==0)
		days+=366;
		else
		days+=365;
	}  
	//�жϲ������������Ƿ������� 
	if(year%4==0&&year%100!=0||year%400==0)
		monthdays[2]=29;
		
	for(int m=1;m<month;m++)
		days+=monthdays[m];
		
		days+=date;
		days-=22;//��ȥ2012�����������
		cout<<days%7<<endl;
		return 0; 
 } 
