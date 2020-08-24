//L是给定单链表，函数Reverse要返回被逆转后的链表。
# include <iostream>
# include <cstdlib>
using namespace std;
 
struct linkNode
{
int val;
linkNode *next;
linkNode(int x):val(x),next(NULL){}
};
//反转函数 
linkNode *reverse2(linkNode *head)
{
	if(head==NULL)
		return NULL;
	linkNode *pre=NULL;
	linkNode *p=head;
	linkNode *h=NULL;
	while(p)
	{
		h=p;
		linkNode *tmp=p->next;
		p->next=pre;
		pre=p;
		p=tmp;
	}
	return h;         //返回头结点
}
int main()                //测试代码
{
	linkNode *head=new linkNode(1);
	linkNode *p1=new linkNode(2);
	linkNode *p2=new linkNode(3);
	head->next=p1;
	p1->next=p2;      //建立链表   1->2->3->NULL
	linkNode *p=reverse2(head);
	while(p)
	{
		cout<<p->val<<endl;
		p=p->next;
	}                //输出为  3->2->1->NULL
system("pause");
return 0;
}
