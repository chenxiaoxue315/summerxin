/*����:�ø߾��ȼ����S=1!+2!+3!+��+n!��n��50��,����������N�����������S��
����:һ��������N��
���:������S��*/
 
#include<bits/stdc++.h>
using namespace std;
int a[10010];
int sum[10010];
int main()
{
    int n;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    memset(sum,0,sizeof(sum));
    a[0]=1;//�׳˼���
    sum[0]=1;//�������￪ʼΪ1����;
    int i,j,k,d=0;//��λ;
    for(k=2; k<=n; k++)
    {
        for(j=0; j<=d; j++)
            a[j]*=k;
        for(j=0; j<=d; j++)
        {
            if(a[j]>=10)
            {
                a[j+1]+=a[j]/10;
                a[j]=a[j]%10;
				if(j==d)
                    d++;
            }
        }
        //��͵Ĳ��裬���ȶѵ��ļ��㷽������
        for(i=0; i<=d; i++)
            sum[i]+=a[i];
        for(i=0; i<=d; i++)
        {
            if(sum[i]>=10)
            {
                sum[i+1]+=sum[i]/10;
                sum[i]=sum[i]%10;
                if(j==d)
                    d++;
            }
        }
    }
        for(i=d; i>=0; i--)
            printf("%d",sum[i]);
        printf("\n");

    return 0;
}


