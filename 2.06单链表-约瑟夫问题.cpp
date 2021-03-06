/*描述
约瑟夫问题：有ｎ只猴子，按顺时针方向围成一圈选大王（编号从１到ｎ），从第１号开始报数，一直数到ｍ，数到ｍ的猴子退出圈外，剩下的猴子再接着从1开始报数。
就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王，编程求输入ｎ，ｍ后，输出最后猴王的编号。
输入
每行是用空格分开的两个整数，第一个是 n, 第二个是 m ( 0 < m,n <=300)。最后一行是：0 0
输出
对于每行输入数据（最后一行除外)，输出数据也是一行，即最后猴王的编号
样例输入
6 2
12 4
8 3
0 0
样例输出
5
1
7 */ 
#include <cstdio>
#include <iostream>
using namespace std;
struct point {
    int number;
    point *next;
    point(){
        next=NULL;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    while(n!=0&&m!=0){
        point *head=new point();
        head->number=1;
        head->next=NULL;
        point *tmp=head;
        for(int i=1;i<n;i++){//构成一个环
            point *t=new point();
            t->number=i+1;
            tmp->next=t;
            tmp=tmp->next;
        }
        tmp->next=head;
        while(tmp->next!=tmp){//当只剩一个的时候
            for(int i=1;i<m;i++){//找排名为m的前一个
                tmp=tmp->next;
            }
            tmp->next=tmp->next->next;
        }
        cout<<tmp->number<<endl;
        cin>>n>>m;
    }
}

