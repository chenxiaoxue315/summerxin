/*给定的数组中删除一个数
输入描述: 多组测试。
每组第一行输入1个整数n（n<20),然后是n个整数 第二行输入1个整数m。
输出描述:
删除在第一行的n个整数中第一次出现数字m并删除，然后按照顺序输出剩下的数。*/
#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int a[25];
    while(cin>>n)//多组输入，n表示有N个整数 
    {
        int m;
        int i,k=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
            cin>>m;
        for(i=1;i<=n;i++)
        {
            if(m==a[i])
            {
                k=i;
                break;
            }
        }
        if(k==0) //k=0表示没在数组里找到和所给数字相同的 
        {
            for(i=1;i<n;i++)
                cout<<a[i]<<" ";//原样输出 
            cout<<a[n]<<endl;
        }
        else if(k==n)
        {
            for(i=1;i<n-1;i++)
                cout<<a[i]<<" ";
                cout<<a[n-1]<<endl;
        }  
        else
        {
            for(i=1;i<k;i++)
            {
                cout<<a[i]<<" ";
            }
            for(i=k+1;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<a[n]<<endl;
        }
    }
    return 0;
}
