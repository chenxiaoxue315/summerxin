/*����
����һ���ַ�����������ַ����Ƿ���ġ�������ָ˳���͵�����һ�����ַ�����
����
����Ϊһ���ַ������ַ�����û�пհ��ַ����ַ������Ȳ�����100����
���
����ַ����ǻ��ģ����yes���������no��
��������
abcdedcba
�������
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
		if(s[i]==s[x])//ǰ��Ƚϣ���ͬ�������no 
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
