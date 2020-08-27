/*描述
一个数的序列bi，当b1 < b2 < ... < bS的时候，我们称这个序列是上升的。对于给定的一个序列(a1, a2, ..., aN)，我们可以得到一些上升的子序列(ai1, ai2, ..., aiK)，这里1 <= i1 < i2 < ... < iK <= N。比如，对于序列(1, 7, 3, 5, 9, 4, 8)，有它的一些上升子序列，如(1, 7), (3, 4, 8)等等。这些子序列中最长的长度是4，比如子序列(1, 3, 5, 8).

你的任务，就是对于给定的序列，求出最长上升子序列的长度。
输入
输入的第一行是序列的长度N (1 <= N <= 1000)。第二行给出序列中的N个整数，这些整数的取值范围都在0到10000。
输出
最长上升子序列的长度。
样例输入
7
1 7 3 5 9 4 8
样例输出
4*/
/*假如给出一段序列{4,2,1,5,4,9,3}，求最长上升子序列。

我们首先需要开两个数组，a数组用来储存给出的序列，b数组用来储存最长上升子序列（不是真正的最长上升子序列），然后遍历整个a数组

首先找到4,b[1]=4,len=1

再找到2,发现2比b数组里的所有元素都小，更新b[1]=2，len=1

接着我们找到1,发现1比b数组里的所有元素都小，更新b[1]=1,len=1

到5,发现5比b数组里所有元素都大，b[2]=5,len=2

到3,发现b数组里5是比3大的最小数字，找到5的位置，b[2]=3,len=2

到9,发现9比b数组里所有元素都大，b[3]=9,len=3

到8,发现b数组里4是比3大的最小数字，找到9的位置，b[2]=3,len=3

通过这样的操作后，我们得到了最长上升子序列的长度。*/
#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f;
typedef long long LL;
const double PI = acos(-1.0);
const double eps = 1e-6;
const int maxn=1e5+9;
int a[maxn],b[maxn];
int find(int l,int r,int val)
{
	int ans=1;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(b[mid]>=val)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return l;
}
int main()
{
	int i,j,k,n,len=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		int next=find(1,len,a[i]);
		b[next]=a[i];
		if(next>len)len=next;
	}
	cout<<len<<endl;
}
