/*在一个非降序列中，查找与给定值最接近的元素。
输入
第一行包含一个整数n，为非降序列长度。1 <= n <= 100000。
第二行包含n个整数，为非降序列各元素。所有元素的大小均在0-1,000,000,000之间。
第三行包含一个整数m，为要询问的给定值个数。1 <= m <= 10000。
接下来m行，每行一个整数，为要询问最接近元素的给定值。所有给定值的大小均在0-1,000,000,000之间。
输出
m行，每行一个整数，为最接近相应给定值的元素值，保持输入顺序。若有多个值满足条件，输出最小的一个。
样例输入
3
2 5 8
2
10
5
样例输出
8
5*/ 
//二分查找,注意这里序列为 非降序 代表输入的数组是从小到大的 不用我们再去排序 
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int n,m,number,l,r,mid;
long long a[100005];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    cin>>m;
    while(m--)
	{
        cin>>number;//number为要比较的数字
        l=0,r=n;//l为左端，r为右端
        if(number<=a[0]) //如果number比最小的还小的话，直接输出最小的a[0] 
		{
            cout<<a[0]<<endl;
        }else if(number>=a[n-1])//如果number比最大的还大的话，直接输出最大的a[n-1]  
		{
            cout<<a[n-1]<<endl;
        }else
		{
        while(l<r)
		{
            mid=(l+r)/2;
            if(a[mid]<number)
                l=mid;//左端右移 
            else if(a[mid]>number)
                r=mid;// 右端左移 
            else 
			{
                cout<<a[mid]<<endl;
                break;
            }
            //始终没找到和number相同的数字，最后只能在左端和右端找一个更接近的 
            if(l==r-1&&a[l]<=number&&a[r]>=number)
			{
                if(abs(a[l]-number)<=abs(a[r]-number))
                    cout<<a[l]<<endl;
                else cout<<a[r]<<endl;
                break;
            }
        }
        }
    }
    return 0;
}

 
