/*描述： 
一天，小A和小B正好在玩石头剪刀布。已知他们的出拳都是有周期性规律的，
比如：“石头-布-石头-剪刀-石头-布-石头-剪刀……”，就是以“石头-布-石头-剪刀”
为周期不断循环的。请问，小A和小B比了N轮之后，谁赢的轮数多？
输入： 
输入包含三行。
第一行包含三个整数：N，NA，NB，分别表示比了N轮，小A出拳的周期长度，小B出拳的周期长度。
0 < N,NA,NB < 100。
第二行包含NA个整数，表示小A出拳的规律。第三行包含NB个整数，表示小B出拳的规律。
其中，0表示"石头"，2表示"剪刀"，5表示"布"。相邻两个整数之间用单个空格隔开。
输出
输出一行，如果小A赢的轮数多，输出A；如果小B赢的轮数多，输出B；如果两人打平，输出draw。*/
//思路：用两个数组分别存储A,B的规律。若A要赢，A[i]-B[i]=-2,-3,5,所以用一个计数器记录结果是这样的次数
#include<iostream>
using namespace std;
int main()
{
	int N,NA,NB;
	cin>>N>>NA>>NB;
	int i,count=0;//计数器初始为0表示平局，>0 A赢 <0 B赢
	int A[107],B[107];
	for(i=0;i<NA;i++) cin>>A[i];
	for(i=0;i<NB;i++) cin>>B[i];
	for(i=0;i<N;i++)
	{
		int temp=A[i%NA]-B[i%NB];
		if(temp==-3||temp==5||temp==-2) count++;//此局A赢 
		else if(temp==0) continue;//平手局 
		else count--;//此局A输 
	}
	
	if(count==0) cout<<"draw"<<endl;
	else if(count>0) cout<<"A"<<endl;
	else cout<<"B"<<endl;
	return 0; 
 } 










