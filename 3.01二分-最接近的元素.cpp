/*��һ���ǽ������У����������ֵ��ӽ���Ԫ�ء�
����
��һ�а���һ������n��Ϊ�ǽ����г��ȡ�1 <= n <= 100000��
�ڶ��а���n��������Ϊ�ǽ����и�Ԫ�ء�����Ԫ�صĴ�С����0-1,000,000,000֮�䡣
�����а���һ������m��ΪҪѯ�ʵĸ���ֵ������1 <= m <= 10000��
������m�У�ÿ��һ��������ΪҪѯ����ӽ�Ԫ�صĸ���ֵ�����и���ֵ�Ĵ�С����0-1,000,000,000֮�䡣
���
m�У�ÿ��һ��������Ϊ��ӽ���Ӧ����ֵ��Ԫ��ֵ����������˳�����ж��ֵ���������������С��һ����
��������
3
2 5 8
2
10
5
�������
8
5*/ 
//���ֲ���,ע����������Ϊ �ǽ��� ��������������Ǵ�С����� ����������ȥ���� 
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int n,m,number,l,r,mid;
long long a[100005];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    cin>>m;
    while(m--)
	{
        cin>>number;//numberΪҪ�Ƚϵ�����
        l=0,r=n;//lΪ��ˣ�rΪ�Ҷ�
        if(number<=a[0]) //���number����С�Ļ�С�Ļ���ֱ�������С��a[0] 
		{
            cout<<a[0]<<endl;
        }else if(number>=a[n-1])//���number�����Ļ���Ļ���ֱ���������a[n-1]  
		{
            cout<<a[n-1]<<endl;
        }else
		{
        while(l<r)
		{
            mid=(l+r)/2;
            if(a[mid]<number)
                l=mid;//������� 
            else if(a[mid]>number)
                r=mid;// �Ҷ����� 
            else 
			{
                cout<<a[mid]<<endl;
                break;
            }
            //ʼ��û�ҵ���number��ͬ�����֣����ֻ������˺��Ҷ���һ�����ӽ��� 
            if(l==r-1&&a[l]<=number&&a[r]>=number)
			{
                if(abs(a[l]-number)<=abs(a[r]-number))
                    cout<<a[l]<<endl;
                else cout<<a[r]<<endl;
                break;
            }
        }
        }
    }
    return 0;
}

 
