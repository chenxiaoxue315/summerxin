/*10:��������
�鿴�ύͳ������
��ʱ������: 1000ms �ڴ�����: 65536kB
����
����һ�е������У����ڵ���֮����1�������ո������밴���ֵ��������Щ���ʣ�Ҫ���ظ��ĵ���ֻ���һ�Ρ������ִ�Сд��
����
һ�е������У�����1�����ʣ����100�����ʣ�ÿ�����ʳ��Ȳ�����50������֮��������1���ո��������ݲ�������ĸ���ո���������ַ���
���
���ֵ��������Щ���ʣ��ظ��ĵ���ֻ���һ�Ρ�
��������
She  wants  to go to Peking University to study  Chinese
�������
Chinese
Peking
She
University
go
study
to
wants*/ 
//ð������ 
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int c=0;
	string s[101];

	for (;cin>>s[c];c++);//ѭ�������ַ������� s

	for (int i=0;i<c-1;i++)
	for (int j=i+1;j<c;j++)
	if (s[i]>s[j])
	swap (s[i],s[j]);//Ҫ��ǰ�Ⱥ��ͽ������ַ����ıȽ�
	
	cout<<s[0]<<endl;//�������һ���������ǰ��Ƚϣ��������ģ��᷽��
	for (int i=0;i<c-1;i++)
	if (s[i]!=s[i+1]) cout<<s[i+1]<<endl;//�ٰѺ���������

	return 0;
}

