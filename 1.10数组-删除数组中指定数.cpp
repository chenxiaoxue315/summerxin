/*������������ɾ��һ����
��������: ������ԡ�
ÿ���һ������1������n��n<20),Ȼ����n������ �ڶ�������1������m��
�������:
ɾ���ڵ�һ�е�n�������е�һ�γ�������m��ɾ����Ȼ����˳�����ʣ�µ�����*/
#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int a[25];
    while(cin>>n)//�������룬n��ʾ��N������ 
    {
        int m;
        int i,k=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
            cin>>m;
        for(i=1;i<=n;i++)
        {
            if(m==a[i])
            {
                k=i;
                break;
            }
        }
        if(k==0) //k=0��ʾû���������ҵ�������������ͬ�� 
        {
            for(i=1;i<n;i++)
                cout<<a[i]<<" ";//ԭ����� 
            cout<<a[n]<<endl;
        }
        else if(k==n)
        {
            for(i=1;i<n-1;i++)
                cout<<a[i]<<" ";
                cout<<a[n-1]<<endl;
        }  
        else
        {
            for(i=1;i<k;i++)
            {
                cout<<a[i]<<" ";
            }
            for(i=k+1;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<a[n]<<endl;
        }
    }
    return 0;
}
