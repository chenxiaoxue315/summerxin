/*����
�������������������Ĳ
����
��2�У���1���Ǳ�����a����2���Ǽ���b(a > b)��ÿ��������������200λ�������ж����ǰ���㡣
���
һ�У�������Ĳ*/
//˼·�ʹ������ӷ�˼·һ�£�����Ҫ���鳤�ȱȽ��������Ĵ�С����ȷ��������  
#include <stdio.h>
#include <string.h>
#define MAX_LEN 205
void bigNumAdd(char a[],char b[],char c[]); 
void bigNumAdd(char a[],char b[],char c[])
{
    int i,j,n1,n2,n;
    int num1[MAX_LEN]={0},num2[MAX_LEN]={0};
    n1 = strlen(a);
    j = 0;
    for (i=n1-1;i>= 0;i--)
         num1[j++]=a[i]-'0';
    n2=strlen(b);
    j = 0;//Ҫ��j�Ļ����������� 
    for (i=n2-1;i>=0;i--)
         num2[j++]=b[i]-'0';
    //ȷ���������� 
	if(n1>n2)
	n=n1;
	else
	n=n2; 
	
    for (i=0;i<n;i++)
    {
        num1[i]-=num2[i];
        if (num1[i] <0 ) 
        { 
            num1[i]+=10;
            num1[i+1]--;
        }
    }
    j=0;
    if (num1[n]!=0) c[j++]=num1[n]+'0';
    for(i=n-1; i>=0; i--) 
        c[j++]=num1[i]+'0';
     c[j]='\0';
}
int main()
{
     char a[MAX_LEN],b[MAX_LEN],c[MAX_LEN+1];
     scanf("%s",a);
     scanf("%s",b);
     bigNumAdd(a,b,c);
     printf("%s\n",c);
     return 0;
}  
