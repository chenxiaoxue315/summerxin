/*����
���ö�̬�����¼�ӱ�׼���������ѧ����Ϣ��ѧ�š��������Ա����䡢�÷֡���ַ��

����,ѧ�ų��Ȳ�����20, �������Ȳ�����40, �Ա𳤶�Ϊ1, ��ַ���Ȳ�����40

����
���������У�ÿһ�ж���һ��ѧ������Ϣ���磺
00630018 zhouyan m 20 10.0 28#460
����������"end"����
���
����������ݵ������
ÿ��һ����¼������
ѧ�� ���� �Ա� ���� �÷� ��ַ
�ĸ�ʽ���
��������
00630018 zhouyan m 20 10 28#4600
0063001 zhouyn f 21 100 28#460000
0063008 zhoyan f 20 1000 28#460000
0063018 zhouan m 21 10000 28#4600000
00613018 zhuyan m 20 100 28#4600
00160018 zouyan f 21 100 28#4600
01030018 houyan m 20 10 28#4600
0630018 zuyan m 21 100 28#4600
10630018 zouan m 20 10 28#46000
end
�������
10630018 zouan m 20 10 28#46000
0630018 zuyan m 21 100 28#4600
01030018 houyan m 20 10 28#4600
00160018 zouyan f 21 100 28#4600
00613018 zhuyan m 20 100 28#4600
0063018 zhouan m 21 10000 28#4600000
0063008 zhoyan f 20 1000 28#460000
0063001 zhouyn f 21 100 28#460000
00630018 zhouyan m 20 10 28#4600*/
#include<iostream>
using namespace std;
struct student
{
    string id;
    string name;
    char sex;
    int age;
    double score;
    string address;//��ַ
};
struct node
{
    student date;
    node *befor;
};
node * create()//����nodeָ������
{
    string End="end";
    node *p,*l;
    l=NULL;//�׵�ַΪ�գ�ֹͣ
    p=new node;
    while(cin>>p->date.id&&p->date.id!=End)
    {
        cin>>p->date.name;
        cin>>p->date.sex;
        cin>>p->date.age;
        cin>>p->date.score;
        cin>>p->date.address;
        if(l==NULL)
        {
            p->befor=l;
        }
        else
            p->befor=l;//��ǰһ����ַ����ǰ��befor
        l=p;//��¼λ��
        p=new node;
    }
    delete p;
    return l;
}
void show(node *head)
{
    while(head)
    {
        cout<<head->date.id<<" ";
        cout<<head->date.name<<" ";
        cout<<head->date.sex<<" ";
        cout<<head->date.age<<" ";
        cout<<head->date.score<<" ";
        cout<<head->date.address<<endl;
 
        head=head->befor;
    }
}
 
int main()
{
    node *head;
    head=NULL;
    head=create();
    show(head);
    delete head;
    return 0;
}

