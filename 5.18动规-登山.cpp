/*描述
五一到了，PKU-ACM队组织大家去登山观光，队员们发现山上一个有N个景点，并且决定按照顺序来浏览这些景点，即每次所浏览景点的编号都要大于前一个浏览景点的编号。同时队员们还有另一个登山习惯，就是不连续浏览海拔相同的两个景点，并且一旦开始下山，就不再向上走了。队员们希望在满足上面条件的同时，尽可能多的浏览景点，你能帮他们找出最多可能浏览的景点数么？

输入
Line 1： N (2 <= N <= 1000) 景点数
Line 2： N个整数，每个景点的海拔
输出
最多能浏览的景点数
样例输入
8
186 186 150 200 160 130 197 220
样例输出
4*/
//遍历一遍所有点，同时找最长上升子序列和最长下降子序列，过该点的最长路径就是最长上升子序列的长+最长下降子序列的长-1 
#include<bits/stdc++.h>
using namespace std;
int d[1024]= {0};
int ans_left[1024],ans_right[1024];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&d[i]);
        ans_left[i]=1;
        ans_right[i]=1;
    }

    for(int i=2; i<=n; i++)                                     //正序查找
        for(int j=1; j<i; j++)
            if(d[i]>d[j])
                ans_left[i]=max(ans_left[i],ans_left[j]+1);

    for( int i=n-1; i>=1; i-- )                                  //逆序查找
        for( int j=n; j>i; j-- )
            if(d[i]>d[j])
                ans_right[i]=max(ans_right[i],ans_right[j]+1);

    for (int i=1; i<=n; i++)
        ans_left[i]+=ans_right[i];

    printf("%d\n",*max_element(ans_left+1,ans_left+1+n)-1);
    return 0;
}


