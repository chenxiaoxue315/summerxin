//欧几里得算法求最大公约数（辗转相除法） 
// 递归法 gcd(a,b)=gcd(b,a%b)
#include<cstdio>
using namespace std;
int gys(int a,int b)//递归 返回值为最大公约数 
{
	if(a%b==0) return b;
	return gys(b,a%b);
}
/*int gus(int a,int b)
{
   int r=0;
   while(b>0)
   {
   r=a%b;
   a=b;
   b=r;
   }
} */
int main ()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int t;
		if(a<b)
		{
			t=a; a=b; b=t;//保证a>b 
		}
		printf("%d\n",a*b/gys(a,b));//通过最大公约数可求最小公倍数 
	}
	return 0;
 } 
//*当最大公约数为1时，说明a,b两个数互质 
