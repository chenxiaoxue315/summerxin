/*ѡ������ ������n,����n��������С������*/ 
#include<stdio.h>
int main()
{
    int a[10];
    int j,i,t;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        int m=i;//���ҳ�����һ���е�������Сֵ����¼�±꣬Ȼ�󽻻��ı� 
        for(j=i;j<10;j++)
            if(a[j]<a[m])
               m=j;
            if(m!=i)
            {
                t=a[i];
                a[i]=a[m];
                a[m]=t;
             }
        }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
return 0;
}

