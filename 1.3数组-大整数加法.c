/*描述:
求两个不超过200位的非负整数的和。
输入:
有两行，每行是一个不超过200位的非负整数，可能有多余的前导0。
输出:
一行，即相加后的结果。结果里不能有多余的前导0*/
//思路：整数过大，只能用数组存放表示
#include<stdio.h>
#include<string.h>
 int main ()
 {
 	int big1[205]={0};
 	int big2[205]={0};
 	int i,j;
 	char num1[205]={'\0'};
 	char num2[205]={'\0'};
 	scanf("%s %s",num1,num2);
 	
 	//把字符转换成数字，并且从低位向高位存储（和计算步骤相同，先低后高） 
 	for(i=0,j=strlen(num1)-1;j>=0;)
 	{
 		big1[i++]=num1[j--]-'0';
	}
	for(i=0,j=strlen(num2)-1;j>=0;)
 	{
 		big2[i++]=num2[j--]-'0';
	}
	
	//从低到高，大于10,高一位加1，此位减10 
	int k=0;
	while(k<=200)
	{
		big1[k]+=big2[k];
		if(big1[k]>=10)
		{
			big1[k+1]++;//注意这里不能写成big1[k++]++,这样k的值就变了 
			big1[k]-=10;
		}
		k++; 
	}
	
	//去除前导0 
	int flag=0;//记录第一个不是0的数组的下标
	for(i=200;i>=0;i--)//此时大整数存放还是从低位到高位,所以要从数组最后一位开始找 
	{
		if(big1[i]!=0)
		{
			flag=i;
			break; 
		} 
	} 
	if(i==-1)
	{
		printf("0\n");
	}
	else
	{
		for(i=flag;i>=0;i--)//注意从数组后往前输出 
		{
			printf("%d",big1[i]);
		}
		printf("\n"); 
	} 
	return 0;
  } 
