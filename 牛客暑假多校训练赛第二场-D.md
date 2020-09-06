#                     牛客多校训练赛第二场-D

####                        来源： https://ac.nowcoder.com/acm/contest/5667/D

##### 描述： 以HH：MM：SS的形式给出当天的两个时刻，打印两个时刻之间的秒数。输入两行每行包含一个以HH：MM：SS形式的字符串（00<=HH<=23)HH：MM：SS(00<==MM,SS<=59)，表示给定的时刻。

- 样例1：12:00:00     17:00:00      输出：18000
- 样例2：23:59:59     00:00:00      输出：86399   (注意这里不是1秒，证明就是大数据减去小数据)

###### 思路：将整个字符串拆分成三个部分，先把字符用ASCII存放，用三个变量存储时 分 秒，最后再进行秒数计算(时乘以3600，分乘以60，秒直接计算即可）。

上代码：

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int x=0,y=0,z=0,x1=0,y1=0,z1=0,i,sum;
    cin>>a;
    cin>>b;
    for(i=0;i<a.length();i++)
    {
        a[i]=a[i]-'0';
    }
    for(i=0;i<2;i++)
    {
        x=x+a[i]*pow(10,1-i);//存放时
    }
    for(i=3;i<=4;i++)
    {
        y=y+a[i]*pow(10,4-i);//存放分
    }
    for(i=6;i<=7;i++)
    {
        z=z+a[i]*pow(10,7-i);//存放秒
    }
    for(i=0;i<b.length();i++)
    {
        b[i]=b[i]-'0';
    }
    for(i=0;i<2;i++)
    {
        x1=x1+b[i]*pow(10,1-i);//存放时
    }
    for(i=3;i<=4;i++)
    {
        y1=y1+b[i]*pow(10,4-i);//存放分
    }
    for(i=6;i<=7;i++)
    {
        z1=z1+b[i]*pow(10,7-i);//存放秒
    }
    if(x>x1)
    {
        sum=(x-x1)*3600+(y-y1)*60+(z-z1);
    }
    else
    {
        sum=(x1-x)*3600+(y1-y)*60+(z1-z);
    }  
    printf("%d\n",sum);
    return 0;
}
```



看起来是不是太复杂了点，上一个更简略的代码：

```c++
#include<bits/stdc++.h>
using namespace std;
const int N=9;
char a[N],b[N];
int main()
{
    scanf("%s%s",a,b);
    int s1,s2;
    int i=0;
    s1=(a[0]*10+a[1])*3600+(a[3]*10+a[4])*60+(a[6]*10+a[7]);//可以直接加减啊，会直接转化为整形啊
    s2=(b[0]*10+b[1])*3600+(b[3]*10+b[4])*60+(b[6]*10+b[7]);
    if(s1>s2)printf("%d\n",s1-s2);
    else printf("%d\n",s2-s1);
   
    return 0;
}
```

