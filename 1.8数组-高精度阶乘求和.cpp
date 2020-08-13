/*描述:用高精度计算出S=1!+2!+3!+…+n!（n≤50）,输入正整数N，输出计算结果S。
输入:一个正整数N。
输出:计算结果S。*/
 
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
    a[0]=1;//阶乘计数
    sum[0]=1;//计数这里开始为1计数;
    int i,j,k,d=0;//数位;
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
        //求和的步骤，精度堆叠的计算方法很像
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


