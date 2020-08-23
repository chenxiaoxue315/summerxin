/*05:输出亲朋字符串
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
编写程序，求给定字符串s的亲朋字符串s1。

亲朋字符串s1定义如下：给定字符串s的第一个字符的ASCII值加第二个字符的ASCII值，得到第一个亲朋字符； 给定字符串s的第二个字符的ASCII值加第三个字符的ASCII值，得到第二个亲朋字符；依此类推，直到给定字符串s的倒数第二个字符。亲朋字符串的最 后一个字符由给定字符串s的最后一个字符ASCII值加s的第一个字符的ASCII值。

输入
输入一行，一个长度大于等于2，小于等于100的字符串。字符串中每个字符的ASCII值不大于63。
输出
输出一行，为变换后的亲朋字符串。输入保证变换后的字符串只有一行。
样例输入
1234
样例输出
cege*/
#include<iostream>
#include<cstring>
using namespace std;
int len;
char s[110],s1[110];
int main(){
    cin.getline(s,110);//第一个要用getline获取字符串，因为有可能出现空格的情况
    len=strlen(s);//计算长度
    for(int i=0;i<len-1;i++)//第二个char直接相加 就是ascii码相加，可以自动类型转换
    {
        s1[i]=s[i]+s[i+1];
    }
    s1[len-1]=s[len-1]+s[0];
    for(int i=0;i<len;i++)//输出的时候用for循环或者直接cout都可以，但是要加\0 
    {
        cout<<s1[i];
    }
    cout<<endl;
}
 
