/*描述
有一批易感人群住在网格状的宿舍区内，宿舍区为n*n的矩阵，每个格点为一个房间，房间里可能住人，也可能空着。在第一天，有些房间里的人得了流感，以后每天，得流感的人会使其邻居传染上流感，（已经得病的不变），空房间不会传染。请输出第m天得流感的人数。
输入
第一行一个数字n，n不超过100，表示有n*n的宿舍房间。
接下来的n行，每行n个字符，’.’表示第一天该房间住着健康的人，’#’表示该房间空着，’@’表示第一天该房间住着得流感的人。
接下来的一行是一个整数m，m不超过100.
输出
输出第m天，得流感的人数
样例输入
5
....#
.#.@.
.#@..
#....
.....
4
样例输出
16*/ 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,i,j;
    char sickman[101][101];
    scanf("%d",&n); //输入宿舍的大小 
    for(i = 0; i < n; i++)
        scanf("%s", &sickman[i]);//输入每一行的宿舍情况 
     scanf("%d",&m);//输入天数 
    while(--m > 0) //输入的数组已经是第一天的情况了，所以这里要设置为前自减
    {
        for( i = 0; i < n; i++)
            for( j = 0; j < n; j++)
            {
                if(sickman[i][j] == '@')//如果这个宿舍是生病的人，则把他上下左右的人标记成*  
                {
                    if( i-1 >= 0 && sickman[i-1][j] == '.')
                        sickman[i-1][j] = '*';
                    if( i+1 < n  && sickman[i+1][j] == '.')
                        sickman[i+1][j] = '*';
                    if( j-1 >= 0  && sickman[i][j-1] == '.')
                        sickman[i][j-1] = '*';
                    if( j+1 < n  && sickman[i][j+1] == '.')
                        sickman[i][j+1] = '*';
                }
            }
 
        for( i = 0; i < n; i++)//把标记成*的人变为@，表示为被传染的人 
            for( j = 0; j < n; j++)
                if(sickman[i][j] == '*')
                    sickman[i][j] = '@';
             
    }
 
    int sum = 0;
    for( i = 0; i < n; i++)
        for( j = 0; j < n; j++)
                if(sickman[i][j] == '@')
                    ++sum;
    printf("%d\n",sum);
 
    return 0;
}
