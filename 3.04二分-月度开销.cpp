/*描述
农夫约翰是一个精明的会计师。他意识到自己可能没有足够的钱来维持农场的运转了。他计算出并记录下了接下来 N (1 ≤N ≤100,000) 天里每天需要的开销。
约翰打算为连续的M (1 ≤M <=N) 个财政周期创建预算案，他把一个财政周期命名为fajo月。每个fajo月包含一天或连续的多天，每天被恰好包含在一个fajo月里。
约翰的目标是合理安排每个fajo月包含的天数，使得开销最多的fajo月的开销尽可能少。
输入
第一行包含两个整数N,M，用单个空格隔开。
接下来N行，每行包含一个1到10000之间的整数，按顺序给出接下来N天里每天的开销。
输出
一个整数，即最大月度开销的最小值。
样例输入
7 5
100
400
300
100
500
101
400
样例输出
500*/
//若约翰将前两天作为一个月，第三、四两天作为一个月，
//最后三天每天作为一个月，则最大月度开销为500。其他任何分配方案都会比这个值更大。
#include<bits/stdc++.h>
using namespace std;
const int maxn=1000010;
const int INF=1000000000;
const double pi=3.141592653589;
long long n,m;
long long a[maxn],mina,sum;
//递归求月度开销的最小值 
long long solve(long long L,long long R)
{
   const long long mid=(L+R)/2;
   if(L==R) return mid;
   long long i,x,y;
   for(i=0,x=a[i],y=0;i<n;i++,x+=a[i])
   {
      if(x>mid)
	  { 
        x=a[i];
        y++;//当单月的开销大于最小开销时，天数加1，直到y的值等于开销周期 
      }
   }
   if(y<m)return solve(L,mid);
   else return solve(mid+1,R);
}
int main()
{
    cin>>n>>m;
    sum=0;
    mina=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mina=max(a[i],mina);//最小值为所有单个开销中的最大值 
        sum+=a[i];//最大值为所有单个开支的总和  
    }
    printf("%lld\n",solve(mina,sum));
    return 0;
}

