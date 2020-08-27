/*描述
一个工厂制造的产品形状都是长方体，它们的高度都是h，长和宽都相等，一共有六个型号，他们的长宽分别为1*1, 2*2, 3*3, 4*4, 5*5, 6*6。这些产品通常使用一个 6*6*h 的长方体包裹包装然后邮寄给客户。因为邮费很贵，所以工厂要想方设法的减小每个订单运送时的包裹数量。他们很需要有一个好的程序帮他们解决这个问题从而节省费用。现在这个程序由你来设计。
输入
输入文件包括几行，每一行代表一个订单。每个订单里的一行包括六个整数，中间用空格隔开，分别为1*1至6*6这六种产品的数量。输入文件将以6个0组成的一行结尾。
输出
除了输入的最后一行6个0以外，输入文件里每一行对应着输出文件的一行，每一行输出一个整数代表对应的订单所需的最小包裹数。
样例输入
0 0 4 0 0 1 
7 5 1 0 0 0 
0 0 0 0 0 0 
样例输出
2 
1 */
#include <bits/stdc++.h>
using namespace std;
const int N=1001;
int n,V,v[N];
int R[N];//某个箱子已装入体积
int Greed()//用贪心法求得使用箱子数的最小值
{
    int k=0;
    for(int i=0;i<n;++i)
    {
        if(v[i]>V)
            return -1;//箱子无法装入某个物品
        if(R[k]+v[i]>V)//如果当前物品 i 不能装入 k 号箱子，则需要的箱子数加 1
            ++k;
        R[k]+=v[i];//物品 i 可以装入当前箱子 k 的话，那么更新已装入的总体积
    }
    return k+1;//下标号与箱子个数差 1
}
int main()
{
    cin>>n;//物品的个数
    cin>>V;//每个箱子的体积
    for(int i=0;i<n;++i)
        cin>>v[i];//输入每个物品的体积
    sort(v,v+n,greater<int>()); //降序
    cout<<"至少要使用箱子数为:"<<Greed();
    return 0;
}
