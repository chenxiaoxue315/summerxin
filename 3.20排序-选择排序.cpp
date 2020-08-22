/*选择排序 ，输入n,输入n个数，从小到大排*/ 
#include<stdio.h>
int main()
{
    int a[10];
    int j,i,t;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        int m=i;//先找出在这一趟中的最大或最小值，记录下标，然后交换改变 
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

