//L�Ǹ�������������ReverseҪ���ر���ת�������
# include <iostream>
# include <cstdlib>
using namespace std;
 
struct linkNode
{
int val;
linkNode *next;
linkNode(int x):val(x),next(NULL){}
};
//��ת���� 
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
	return h;         //����ͷ���
}
int main()                //���Դ���
{
	linkNode *head=new linkNode(1);
	linkNode *p1=new linkNode(2);
	linkNode *p2=new linkNode(3);
	head->next=p1;
	p1->next=p2;      //��������   1->2->3->NULL
	linkNode *p=reverse2(head);
	while(p)
	{
		cout<<p->val<<endl;
		p=p->next;
	}                //���Ϊ  3->2->1->NULL
system("pause");
return 0;
}
