/*����
Լɪ�����⣺�У�ֻ���ӣ���˳ʱ�뷽��Χ��һȦѡ��������Ŵӣ�������ӵڣ��ſ�ʼ������һֱ������������ĺ����˳�Ȧ�⣬ʣ�µĺ����ٽ��Ŵ�1��ʼ������
��������ֱ��Ȧ��ֻʣ��һֻ����ʱ��������Ӿ��Ǻ���������������������������ı�š�
����
ÿ�����ÿո�ֿ���������������һ���� n, �ڶ����� m ( 0 < m,n <=300)�����һ���ǣ�0 0
���
����ÿ���������ݣ����һ�г���)���������Ҳ��һ�У����������ı��
��������
6 2
12 4
8 3
0 0
�������
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
        for(int i=1;i<n;i++){//����һ����
            point *t=new point();
            t->number=i+1;
            tmp->next=t;
            tmp=tmp->next;
        }
        tmp->next=head;
        while(tmp->next!=tmp){//��ֻʣһ����ʱ��
            for(int i=1;i<m;i++){//������Ϊm��ǰһ��
                tmp=tmp->next;
            }
            tmp->next=tmp->next->next;
        }
        cout<<tmp->number<<endl;
        cin>>n>>m;
    }
}

