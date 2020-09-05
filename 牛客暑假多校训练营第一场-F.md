#            牛客暑假多校训练营第一场

## F Infinite String Comparision题解：

###  来源：[https://ac.nowcoder.com/acm/contest/5666/F]()

##### 描述：多组输入，给定两个字符串a，b。比较无限个字符串a拼接和无限个字符串b拼接后的大小。 

1≤∣a∣,∣b∣≤10^5。若拼接后的字符串a=b输出“=”，a<b输出"<",a>b输出">"。

##### 思路：比较a + b和 b + a的大小。

①字符串a，b长度相等，这个方法无疑没有任何问题。

②若字符串a,b长度不相等，假设strlen(a)<strlen(b)

​     ⒈如果前 len(a) 个字符有大小不相等的，那一定输出大于或小于了。

​     ⒉但如果b字符串前len(a)个字母与a相等 ，就相当于将b字符串第len(a)+1位与字符串a的第1位相比    

​     较，例如：

-  a字符串是aaa        b字符串是aaabb
- a+b :aaaaaabb       b+a :aaabbaaa
- ~~aaa~~aaabb 和 ~~aaa~~bbaaa b从第四位和a的第一位相比较
- 当strlen(a)>strlen(b)时，b字符串后面接a也是相同道理。



c++代码：

```c++
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string a, b;
    while(cin >> a >> b) //多组输入
    {
        string A = a + b;//二段字符拼接
        string B = b + a;
        if(A > B) //string可以直接比较
            cout<<">"<<endl;
        else if(A == B) 
            cout<<"="<<endl;
        else 
            cout<<"<"<<endl;
    }
    return 0;
}


```

c语言代码：

```c
#include<stdio.h>
#include<string.h>
int main() 
{
    char a[200005],b[200005],temp[200005];
    while(~scanf("%s %s",a,b)) //多组输入
    {    
        strcpy(temp,a);//用一个temp数组存放未拼接前的字符串a
         strcat(a,b);//二段字符拼接
         strcat(b,temp);
        if(strcmp(a,b)==0) //比较
            printf("=\n");
        else if(strcmp(a,b)<0) 
            printf("<\n");
        else 
            printf(">\n");
    }
    return 0;
}
```

