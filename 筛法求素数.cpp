//ɸ��������(����) 
//1��ͨ����ɸ�� 
//ԭ�������ı����Ǻ����������ı����Ǻ���
/*#include<bits/stdc++.h>
#define maxx 19 //��Χ 
using namespace std;
int su[maxx];//�������
int mask[maxx+7];//����Ƿ�Ϊ����(-1Ϊ������0Ϊ����) 
int cnt;//su[]�����±� 
void sushu()
{
	cnt=1;//su[]�����±� ��1��ʼ 
	memset(mask,-1,sizeof(mask));//��������ʼֵ��ֵΪ-1
	for(int i=2;i<maxx;i++)//��ΧΪ��������i<maxx,������Ϊi<=maxx 
	{
		if(mask[i]==-1)
		su[cnt++]=i;
		
		for(int j=i*2;j<maxx;j+=i)//����i�ڷ�Χ�ڵ����б��������Ϊ0 
		mask[j]=0;
	 } 
 } 
 int main ()
 {
 	sushu();
 	for(int i=1;i<cnt;i++)//*i<cnt 
 	{
 		cout<<su[i]<<" ";
	 }
	 return 0;
 }*/
//2.��������ɸ��
//ԭ���κ�һ������������д�ɼ���������˵���ʽ  
#include<bits/stdc++.h>
#define maxx 200//��Χ 
using namespace std;
int su[maxx];
int mask[maxx+7]; 
int cnt;
void quick_su()
{ 
	memset(mask,-1,sizeof(mask));//��������ʼ��
	cnt=0;
	mask[0]=mask[1]=0;//0��1�������������Ϊ0 
	for(int i=0;i<maxx;i++)
	{
		if(mask[i]==-1)
		su[cnt++]=i;
		
		for(int j=0;j<cnt&&i*su[j]<maxx;j++)
		{
			mask[i*su[j]]=0;//ɸ��С�ڵ���i��������i�Ļ����ɵĺ��� 
		}
	 } 
 } 
int main()
{
	quick_su();
	for(int i=0;i<cnt;i++)
	printf("%d ",su[i]);
	printf("\n");
	return 0;
}
