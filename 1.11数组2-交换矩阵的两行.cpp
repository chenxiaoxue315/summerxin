/*描述
给定一个5*5的矩阵（数学上，一个r×c的矩阵是一个由r行c列元素排列成的矩形阵列），将第n行和第m行交换，输出交换后的结果。
输入
输入共6行，前5行为矩阵的每一行元素,元素与元素之间以一个空格分开。
第6行包含两个整数m、n，以一个空格分开。（1 <= m,n <= 5）
输出
输出交换之后的矩阵，矩阵的每一行元素占一行，元素之间以一个空格分开。*/ 
#include<iostream>
using namespace std;
int main ()
{
	int a[6][6];//只利用从1~5 
	int i,j;
	//输入矩阵 
	for(i=1;i<=5;i++)
	for(j=1;j<=5;j++)
	{
		cin>>a[i][j];
	}
	int m,n;//输入要交换的两行 
    cin>>m>>n;
	
	int temp; 
	for(j=1;j<=5;j++)//利用temp转换两者的数据 
	{
		temp=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=temp;
	} 
	
	for(i=1;i<=5;i++)//输出矩阵 
	{
		for(j=1;j<=5;j++)
	    {
		    cout<<a[i][j]<<" ";
	    }
		cout<<endl;
	}
	return 0;
}
