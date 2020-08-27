/*描述
对于一个2行N列的走道。现在用1*2,2*2的砖去铺满。问有多少种不同的方式。
输入
整个测试有多组数据，请做到文件底结束。每行给出一个数字N，0 <= n <= 250
样例输入
2
8
12
100
200
样例输出
3
171
2731
845100400152152934331135470251
1071292029505993517027974728227441735014801995855195223534251*/ 
/*以有五列为例
要想铺满伍列不重复的有两种办法：1，在四列的基础上再铺一列，一个竖列（首先当路被铺满四列时所有都铺设方式和肯定是不会重复的，所以再加上一列也肯定不会重复，就变成了伍列）2，在三列的基础上直接铺两列，这样也变成了伍列，还和原来一样，三列的所有铺法肯定不会重复，要再加的两列要直接到五列这样才不会与重四列到伍列的重复，为了从三列直接到五列就有两种选择1*2两个横着的和2*2的，这样就有推导公式
f(n)=f(n-1)+2*f(n-2)*/
#include<bits/stdc++.h>
using namespace std;
int arr[260][500];
int main()
{
    arr[1][0]=1;
    arr[1][1]=1;
    arr[2][0]=1;
    arr[2][1]=3;
    int len;//记录高精度时存放的长度，输出的时候要用
    for(int i=3; i<=250; i++)
    {
        len=0;
        //进位变量
        int decade=0;
        //每位结果暂存
        int temp;
        for(int j=1; j<=max(arr[i-1][0],arr[i-2][0]); j++)
        {
            len++;
            temp=arr[i-1][j]+arr[i-2][j]*2+decade;
            arr[i][j]=temp%10;
            decade=temp/10;
        }
        //如果有剩余的进位还得存
        if(decade)
        {
            len++;
            arr[i][len]=decade;
        }

        arr[i][0]=len;
    }
    int n;
    while(cin>>n)
    {
        if(!n)
        {
            cout<<"1"<<endl;
            continue;
        }

        for(int i=arr[n][0]; i>0; i--)
        {
            cout<<arr[n][i];
        }
        cout<<endl;
    }
    return 0;
}

