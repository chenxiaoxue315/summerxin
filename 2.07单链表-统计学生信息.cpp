/*描述
利用动态链表记录从标准输入输入的学生信息（学号、姓名、性别、年龄、得分、地址）

其中,学号长度不超过20, 姓名长度不超过40, 性别长度为1, 地址长度不超过40

输入
包括若干行，每一行都是一个学生的信息，如：
00630018 zhouyan m 20 10.0 28#460
输入的最后以"end"结束
输出
将输入的内容倒序输出
每行一条记录，按照
学号 姓名 性别 年龄 得分 地址
的格式输出
样例输入
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
样例输出
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
    string address;//地址
};
struct node
{
    student date;
    node *befor;
};
node * create()//返回node指针类型
{
    string End="end";
    node *p,*l;
    l=NULL;//首地址为空，停止
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
            p->befor=l;//将前一个地址给当前的befor
        l=p;//记录位置
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

