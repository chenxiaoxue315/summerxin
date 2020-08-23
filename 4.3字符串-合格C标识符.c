/*给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号（注：题目保证这些字符串一定不是C语言的保留字）。
C语言标识符要求：
1. 非保留字；
2. 只包含字母、数字及下划线（“_”）。
3. 不以数字开头。
输入
一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。
输出
一行，如果它是C语言的合法标识符，则输出yes，否则输出no。
样例输入
RKPEGX9R;TWyYcp
样例输出
no*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[25];
    int b,b1,i,n,len=0;
    gets(a);
    if((a[0]>='a' && a[0]<='z') ||(a[0]>='A' &&a[0]<='Z')||(a[0]=='_'))
    b=1;//开头只能是下划线还有字母 
    else
    b=0; 
	len=strlen(a);
    for(i=1;i<len;i++)
    {
        if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]=='_')) 
        b1=1;
        else
        {
            b1=0;
            break;//已经不符合条件，直接退出 
        }
    }
    if(b==1 && b1==1) //当字符串同时满足两个条件时，才输出yes
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
  
