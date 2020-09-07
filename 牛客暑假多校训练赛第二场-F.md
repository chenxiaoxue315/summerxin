#        牛客暑假多校训练赛第二场-F

#####                  来源：https://ac.nowcoder.com/acm/contest/5668/L

描述：

当字符串以“lovery"（不区分大小写时）开头才是可爱的。现在给定一个字符串，若是可爱的输出”lovely"

否则输出“ugly".

思路：就直接一一比较就好了啦。注意看样例，发现不区分大小写的意思是每一个字符之间，也就是可能输出字符串一个大写，一个小写。就不要限制太多就好了，每一个字符都容许它大写或者小写。

上代码：

```c++
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    if(s[0]=='l'||s[0]=='L'){
        if(s[1]=='o'||s[1]=='O'){
            if(s[2]=='v'||s[2]=='V'){
                if(s[3]=='e'||s[3]=='E'){
                    if(s[4]=='l'||s[4]=='L'){
                        if(s[5]=='y'||s[5]=='Y'){
                            printf("lovely\n");
                        return 0;
                        }
                    }
                }
            }
        }
    }
    printf("ugly\n");
    return 0;
}
```

就注意不区分大小啥的就好啦