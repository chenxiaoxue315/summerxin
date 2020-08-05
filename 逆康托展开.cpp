//逆康托展开
//公式x = an * (n - 1)! + an - 1 * (n - 2)! +...+ a2 * 1! + a1 * 0!
// 例如{1,2,3,4,5}的全排列，从小到大排列完成
//找出第96个数
/*1:用96-1=95      
2:  95/4！=3...23  =>有三个数比它小 所以第一位为4 
3:  23/3!=3...5    =>除去第一位数，有三个数比它小，所以第二位为5 
4:  5/2!=2...1     =>第三位为3 
5:  1/1!=1...0     =>第四位为2
所以 该数为45321*/
//例题，15位数 abcdfghijkl中，给一个数字，输出对应的字母序列 
#include <cstdio>
#include <cstring>
int f[15];//阶乘数组 
 
void fact()//求阶乘 
{
    f[0] = 1;
    for(int i = 1;i <= 11;++i)
        f[i] = f[i - 1] * i;
}
int v[15];//和s[]共同判断此字母是否已经输出，如果输出赋值为1 
char s[] = "abcdefghijkl";//最小的字母序列 

int main()
{
    fact();
    int n;//多组输入 
    scanf("%d",&n);
    while(n--)
    {
        memset(v,0,sizeof(v));
        int m;
        scanf("%d",&m);
        m--;
        int t = 11;
        for(int i = 12;i >= 1;--i)
        {
            int cnt = m / f[t];//cnt记录在这个位置上有几个数字比它小 
            m = m % f[t];
            int cnt_ = 0;//和cnt比较，判断输出原始字母序列的第几位 
            for(int j = 0;j < 12;++j)
            {
                if(!v[j])//v[j]为1表示此位已输出 
                {
                    if(cnt == cnt_)
                    {
                        v[j] = 1;
                        printf("%c",s[j]);
                        break;
                    }
                    cnt_++;
                }
            }
            t--;//此位已输出，阶乘移到下一位 
        }
        printf("\n");
    }
    return 0;
}

