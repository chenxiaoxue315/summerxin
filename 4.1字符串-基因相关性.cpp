/*����
Ϊ�˻�֪���������ڹ��ܺͽṹ�ϵ������ԣ�������Ҫ��������ͬ���е�DNA���бȶԣ����жϸñȶԵ�DNA�Ƿ��������ԡ�
�ֱȶ�����������ͬ��DNA���С����ȶ�������DNA������ͬλ�õļ��Ϊһ������ԣ����һ��������е����������ͬ�Ļ������Ϊ��ͬ����ԡ����ż�����ͬ�����ռ�ܼ���������ı���������ñ������ڵ��ڸ�����ֵʱ���ж�������DNA��������صģ�������ء�
����
�����У���һ���������ж�������DNA�����Ƿ���ص���ֵ�����2��������DNA���У����Ȳ�����500����
���
������DNA������أ��������yes�������������no����
��������
0.85
ATCGCCGTAAGTAACGGTTTTAAATAGGCC
ATCGCCGGAAGTAACGGTCTTAAATAGGCC
�������
yes*/ 
#include<iostream>
#include<string>
using namespace std;
int main ()
{
	double n,count=0;//NΪ�ж����� 
	int i;
	string s1,s2;
	cin>>n>>s1>>s2;
	int length=s1.length();
	for(i=0;i<length;i++)
	{
		if(s1[i]==s2[i])//ÿ��Ԫ�ض�����Ƚ� 
		count++;
	}
	if(count/length>=n)//����ͬ�����ܳ��ȵı�ֵ���ڵ����ж�ֵ�������yes �������no 
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
