/*ð���������������ʮ�������Ӵ�С����*/
#include<stdio.h>
int main ()
{
	int a[100],i,j,t,n;
	scanf("%d",&n);//����һ����n����ʾ��������N���� 
	for(i=1;i<=n;i++) 
        scanf("%d",&a[i]);//������a[]����
	for(i=1;i<=n-i;i++)//n������n-1�� 
	{
		for(j=1;j<=n-1;j++)
		{
			if(a[j]<a[j+1])//�Ƚϴ�С������
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			} 
		}
	} 
	for(i=1;i<=n;i++)//������ 
	    printf("%d ",a[i]);
	    
	return 0; 
        
 } 
