//同余定理
/*描述：2个不同整数a,b 被一个整数m相除时，得到相同的余数
则 a,b 同余，因为a,b同余，所以当他们相减时，余数就相互抵消了
剩下部分就是能被m整除的*/
//记作 a≡b(mod m)
//很常用的还有(a+b)%m=((a%m)+(b%m))%m 
//            (a*b)%m=((a%m)*(b%m))%m 
/*应用1：当数特别大的时候，可以用到加和乘的应用
比如1234=(((0*10+1)*10+2)*10+3)*10+4 
即1234%m= (((((0*10+1)%m)*10+2)%m)*10+3)*10+4)%m
当数大到只能用字符数组表示的时候，用循环分步求余*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int b;
	int i;
	cin>>a>>b;
	int len =a.length();
	int ans=0;
	for(i=0;i<len;i++)
	{
		ans=(ans*10+a[i]-'0')%b;
	}
	cout<<ans<<endl;
	return 0;
}*/

/*应用2：快速幂取模 将幂拆解为多个底数的平方次幂，
如果指数为偶数，把指数除以2，并让底数平方次方取余
如果指数为奇数，就把多余的指数记录下来，再按偶数次操作*/ 
//例题：求（a^b）%c 
/* 例（6^5）%5
（6%5）=1 所以相当于求（1^5）%5
相当于(1*(1^2)*(1^2))%5出现了相同的部份 
可以利用循环，每次计算一小部分*/
 
#include<iostream>
using namespace std;
int PowerMod(int a,int b,int c)
{
	int ans=1;
	a=a%c;//a和a%c同余，相当于求(a%c)^b%c,也可不要这一步，计算结果依然正确 
	while(b>0)//b 
	{
		if(b&1)//判断b是不是偶数 if(b%2==1) 
		{
			ans*=(a%c);
		}
		b>>=1;//是偶数则除以2，化成底数平方的（b/2)幂 
		a=(a*a)%c;
	}
	ans%=c;
	return ans;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<PowerMod(a,b,c)<<endl;
	return 0;
}
							   
 
 
