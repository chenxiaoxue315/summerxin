/*描述
我们称序列Z = < z1, z2, ..., zk >是序列X = < x1, x2, ..., xm >的子序列当且仅当存在 严格上升 的序列< i1, i2, ..., ik >，使得对j = 1, 2, ... ,k, 有xij = zj。比如Z = < a, b, f, c > 是X = < a, b, c, f, b, c >的子序列。
现在给出两个序列X和Y，你的任务是找到X和Y的最大公共子序列，也就是说要找到一个最长的序列Z，使得Z既是X的子序列也是Y的子序列。
输入
输入包括多组测试数据。每组数据包括一行，给出两个长度不超过200的字符串，表示两个序列。两个字符串之间由若干个空格隔开。
输出
对每组输入数据，输出一行，给出两个序列的最大公共子序列的长度。
样例输入
abcfbc         abfcab
programming    contest 
abcd           mnp
样例输出
4
2
0*/ 
//采用动态规划的方法，用二维数组C[][]来保存子问题（C[i][j]存储子序列长度为i的L1[0...i-1],长度为j的L2[0...j-1]的LCS长度），然后两层循环自底向上不断更新C，直至找到C[L1.size()][L2.size()]，即找到我们的解。
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int i,j,c[202][202]={0},la,lb;
    char a[201],b[201];
    while(scanf("%s%s",a+1,b+1)!=EOF)
    {
        la=strlen(a+1);lb=strlen(b+1);
        for(i=1;i<=la;i++)
            for(j=1;j<=lb;j++)
        {
            if(a[i]==b[j]) c[i][j]=c[i-1][j-1]+1;
            else
                c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
        cout<<c[i-1][j-1]<<endl;
    }
    return 0;
}

