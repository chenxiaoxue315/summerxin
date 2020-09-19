#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int N,i;
	int a[105]={0};
	int sum; 
	while(cin>>N)
	{
		if(N==0) break;
		else
		{
			sum=0;
		    for(i=0;i<N;i++)
			{
				scanf("%d",&a[i]);
			}
			sum+=6*a[0]+5; 
			for(i=1;i<N;i++)
			{
				if(a[i]>a[i-1]) 
				sum+=6*(a[i]-a[i-1])+5;//上升情况 
				else if(a[i]<a[i-1])
				sum+=4*(a[i-1]-a[i])+5;//下降情况 
			}
		}
		printf("%d\n",sum);
	}
	return 0;
 } 
