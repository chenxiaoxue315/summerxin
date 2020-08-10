/*描述
求两个大的正整数相减的差。
输入
共2行，第1行是被减数a，第2行是减数b(a > b)。每个大整数不超过200位，不会有多余的前导零。
输出
一行，即所求的差。*/
//思路和大整数加法思路一致，多了要数组长度比较两个数的大小，来确定被减数  
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
    j = 0;//要用j的话，必须重置 
    for (i=n2-1;i>=0;i--)
         num2[j++]=b[i]-'0';
    //确定出被减数 
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
