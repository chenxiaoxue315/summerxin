/*��������Զ���룬��ʹ�ú�������������n ����N����������n��������*/
#include<stdio.h>
int a[101],n;//����ȫ�ֱ���

void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left<right)
	 return;
	 
	temp=a[left];//temp�д洢�ľ��ǻ�׼��
	i=left;
	j=right;
	while(i!=j)
	{
		//˳�����Ҫ��Ҫ�ȴ��Һ�������
		while(a[j]>=temp&&i<j)
		 j--;
		//�ٴ���������
		while(a[i]<=temp&&i<j)
		i++;
		
		//�����������������е�λ��
		if(i<j)//���ڱ�i���ڱ�jû������ʱ 
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		} 
	} 
    //���ս���׼���λ
	a[left]=a[i];
	a[i]=temp;
	
	quicksort(left,i-1);//����������ߵģ�������һ���ݹ�Ĺ���
	quicksort(i+1,right);//���������ұߵģ�������һ���ݹ���̵� 
	return; 
 } 
int main ()
{
	int i,j;
	//��������
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	
	quicksort(1,n);//�����������
	
	//���������
	for(i=1;i<=n;i++)
	   printf("%d",a[i]);
	 return 0; 
}
