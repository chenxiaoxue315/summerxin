/*描述:已知正整数k满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，
求所有能整除c的k。
输入:一个非负整数c，c的位数<=30。
输出:若存在满足 c%k == 0 的k，从小到大输出所有这样的k，
相邻两个数之间用单个空格隔开；若没有这样的k，则输出"none"。*/
/*例如：输入32
i=2  a[0]=3 t=10 a[1]=2 t=0 输出1
i=3 a[0]=3 t=0 a[2]=2 t=2不为0 不输出
...... 
i=4 a[0]=3 t=30 a[1]=2 t=0 输出4
i=8 a[0]=3 t=30 a[1]=2 t=0 输出8 
*/ 
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    char a[32];  //存的被除数
    int flag=0,t,len;  //flag判断是否有被除数的因子；t表示除后的余数
    gets(a);
    len=strlen(a);
    for(int i=2;i<=9;i++)  //除数从2循环到9
    {
       t=0;
        for(int j=0;j<len;j++)   //被除数从左向右依次被除
        {
            if(a[j]-'0'+t>=i)  //当前位数够除时
            {
                t=((a[j]-'0'+t)%i)*10; //除法处理，余数t等于当前位数加上上一个余数除以除数然后乘以10
            }
            else  //当前位数不够除时
            {
                t=(a[j]-'0')*10;    //余数直接等于当前数乘以10
            }
        }
        //余数为0，表示整除 
        if(t==0)  
        {
            cout<<i<<' ';
            flag=1;   //只要有一个除数可以就行 
        }

    }
    if(flag==0)
    {
        cout<<"none";
    }
    return 0;
}

