//ŷ������㷨�����Լ����շת������� 
// �ݹ鷨 gcd(a,b)=gcd(b,a%b)
#include<cstdio>
using namespace std;
int gys(int a,int b)//�ݹ� ����ֵΪ���Լ�� 
{
	if(a%b==0) return b;
	return gys(b,a%b);
}
/*int gus(int a,int b)
{
   int r=0;
   while(b>0)
   {
   r=a%b;
   a=b;
   b=r;
   }
} */
int main ()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int t;
		if(a<b)
		{
			t=a; a=b; b=t;//��֤a>b 
		}
		printf("%d\n",a*b/gys(a,b));//ͨ�����Լ��������С������ 
	}
	return 0;
 } 
//*�����Լ��Ϊ1ʱ��˵��a,b���������� 
