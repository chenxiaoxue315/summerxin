/*找出链表中的倒数第K个结点，返回该节点的值*/
/* 第一种方法是先循环一遍链表确定结点个数n，则倒数第k个结点就是就是正数的第n+1-k个，然后在遍历一次链表就可以找到指定结点了，但显然需要遍历两遍链表。
 第二种方法可以使用两个指针，第一个指针先走k-1步，然后第二个指针开始走。当第一个指针移动到最后时，第二个指针正好指向倒数第k个结点，只需要遍历一遍链表*/
#include <iostream>
#include <stdlib.h>
using namespace std;
 
typedef struct Node
{
    int data;
    Node *next;
}*LinkList;
 
//创建链表
void createList(LinkList &l,int n)
{
    l=(LinkList)malloc(sizeof(Node));
    l->next=NULL;
    Node *s;
    for(int i=0;i<n;i++)
    {
        s=(Node*)malloc(sizeof(Node));
        cin>>s->data;
        s->next=l->next;    //头插法
        l->next=s;
    }
}
int findNode(LinkList l,int k)
{
    Node *s1,*s2;
    s1=s2=l;
    int counter=0;
    while(s1->next)
    {
        if(counter<k-1)
        {
            s1=s1->next;
            counter++;
        }
        else
        {
            s1=s1->next;
            s2=s2->next;
        }
    }
    return s2->data;
}
 
//显示链表
void showList(LinkList l)
{
    Node *s;
    s=l->next;
    while(s)
    {
        cout<<s->data<<" ";
        s=s->next;
    }
}
 
int main()
{
    LinkList l;
    cout<<"输入结点个数：";
    int n;
    cin>>n;
    cout<<"输入各结点数据：";
    createList(l,n);
    cout<<"链表：";
    showList(l);
    cout<<endl<<"输入查找的结点位置k：";
    int k;
    cin>>k;
    cout<<"倒数第"<<k<<"个结点数据为："<<findNode(l,k);
    return 0;
}

 
