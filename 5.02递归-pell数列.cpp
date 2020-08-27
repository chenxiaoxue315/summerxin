/*描述
Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an ? 1 + an - 2 (n > 2)。
给出一个正整数k，要求Pell数列的第k项模上32767是多少。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。
输出
n行，每行输出对应一个输入。输出应是一个非负整数。
样例输入
2
1
8
样例输出
1
408*/
#include<iostream>
using namespace std;
 int a[1000001];
int pell(int k){
     if(a[k]!=0) return a[k]; 
     else if(k==1) return 1;
    else if(k==2) return 2;
    else return a[k]=(2*(pell(k-1)%32767)+pell(k-2)%32767)%32767;//等于前一项乘以2加上前二项，这里每一个数取模不会影响最终结果，以免数太大超过int范围 
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		 cout<<pell(a[i])<<endl;
	}
} 
