/*����
��һ���ˣ�PKU-ACM����֯���ȥ��ɽ�۹⣬��Ա�Ƿ���ɽ��һ����N�����㣬���Ҿ�������˳���������Щ���㣬��ÿ�����������ı�Ŷ�Ҫ����ǰһ���������ı�š�ͬʱ��Ա�ǻ�����һ����ɽϰ�ߣ����ǲ��������������ͬ���������㣬����һ����ʼ��ɽ���Ͳ����������ˡ���Ա��ϣ������������������ͬʱ�������ܶ��������㣬���ܰ������ҳ�����������ľ�����ô��

����
Line 1�� N (2 <= N <= 1000) ������
Line 2�� N��������ÿ������ĺ���
���
���������ľ�����
��������
8
186 186 150 200 160 130 197 220
�������
4*/
//����һ�����е㣬ͬʱ������������к���½������У����õ���·����������������еĳ�+��½������еĳ�-1 
#include<bits/stdc++.h>
using namespace std;
int d[1024]= {0};
int ans_left[1024],ans_right[1024];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&d[i]);
        ans_left[i]=1;
        ans_right[i]=1;
    }

    for(int i=2; i<=n; i++)                                     //�������
        for(int j=1; j<i; j++)
            if(d[i]>d[j])
                ans_left[i]=max(ans_left[i],ans_left[j]+1);

    for( int i=n-1; i>=1; i-- )                                  //�������
        for( int j=n; j>i; j-- )
            if(d[i]>d[j])
                ans_right[i]=max(ans_right[i],ans_right[j]+1);

    for (int i=1; i<=n; i++)
        ans_left[i]+=ans_right[i];

    printf("%d\n",*max_element(ans_left+1,ans_left+1+n)-1);
    return 0;
}


