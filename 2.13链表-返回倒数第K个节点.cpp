/*�ҳ������еĵ�����K����㣬���ظýڵ��ֵ*/
/* ��һ�ַ�������ѭ��һ������ȷ��������n��������k�������Ǿ��������ĵ�n+1-k����Ȼ���ڱ���һ������Ϳ����ҵ�ָ������ˣ�����Ȼ��Ҫ������������
 �ڶ��ַ�������ʹ������ָ�룬��һ��ָ������k-1����Ȼ��ڶ���ָ�뿪ʼ�ߡ�����һ��ָ���ƶ������ʱ���ڶ���ָ������ָ������k����㣬ֻ��Ҫ����һ������*/
#include <iostream>
#include <stdlib.h>
using namespace std;
 
typedef struct Node
{
    int data;
    Node *next;
}*LinkList;
 
//��������
void createList(LinkList &l,int n)
{
    l=(LinkList)malloc(sizeof(Node));
    l->next=NULL;
    Node *s;
    for(int i=0;i<n;i++)
    {
        s=(Node*)malloc(sizeof(Node));
        cin>>s->data;
        s->next=l->next;    //ͷ�巨
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
 
//��ʾ����
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
    cout<<"�����������";
    int n;
    cin>>n;
    cout<<"�����������ݣ�";
    createList(l,n);
    cout<<"����";
    showList(l);
    cout<<endl<<"������ҵĽ��λ��k��";
    int k;
    cin>>k;
    cout<<"������"<<k<<"���������Ϊ��"<<findNode(l,k);
    return 0;
}

 
