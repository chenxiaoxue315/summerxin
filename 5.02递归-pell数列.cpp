/*����
Pell����a1, a2, a3, ...�Ķ����������ģ�a1 = 1, a2 = 2, ... , an = 2 * an ? 1 + an - 2 (n > 2)��
����һ��������k��Ҫ��Pell���еĵ�k��ģ��32767�Ƕ��١�
����
��1���ǲ������ݵ�����n���������n�����롣ÿ���������ռ1�У�����һ��������k (1 �� k < 1000000)��
���
n�У�ÿ�������Ӧһ�����롣���Ӧ��һ���Ǹ�������
��������
2
1
8
�������
1
408*/
#include<iostream>
using namespace std;
 int a[1000001];
int pell(int k){
     if(a[k]!=0) return a[k]; 
     else if(k==1) return 1;
    else if(k==2) return 2;
    else return a[k]=(2*(pell(k-1)%32767)+pell(k-2)%32767)%32767;//����ǰһ�����2����ǰ�������ÿһ����ȡģ����Ӱ�����ս����������̫�󳬹�int��Χ 
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
