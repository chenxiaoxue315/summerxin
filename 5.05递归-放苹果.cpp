/*描述
把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）5，1，1和1，5，1 是同一种分法。
输入
第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1<=M，N<=10。
输出
对输入的每组数据M和N，用一行输出相应的K。
样例输入
1
7 3
样例输出
8*/
/*(m, n) = f(m-n, n) + f(m, n-1)
f(m, n): 把m个苹果放到n个盘子中的方法数
f(m, n-1): 把m个苹果放到n-1个盘子中的方法数(其中至少有一个空盘子)
f(m-n, n): 把m个苹果放到n个盘子中,而且每个盘子中都有苹果(先拿n个出来,等m-n个放好了,然后每个盘子放一个)*/
#include <iostream>
#include<cstdio>
using namespace std;
int f(int m,int n)//递归 
{
 if(m==0||m==1) return 1;
 if(n==0||n==1) return 1;
 if(m<n) return f(m,m);
 else return f(m-n,n)+f(m,n-1);
}
int main()
{
    int t=0;
    int m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        cout<<f(m,n)<<endl;        
    }

    return 0;
}


 
