/*链表操作之插入*/
//输入n，创建一个长度为n的链表，输入t,当前结点是最后一个结点，或者下一个结点的值大于带插入的数的时候插入 
#include<stdio.h>
#include<stdlib.h>
//这里创建一个链表用来表示链表的节点类型
struct node
{
	int data;
	struct node *next;
};
int main ()
{
	struct node *head,*p,*q,*t;
	int i,n,a;
	scanf("%d",&n);
	head=NULL;//头指针初始为空
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		//动态申请一个空间，用来做一个结点，并用临时指针p指向这个结点
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;//将数据存储到当前结点的date域中
		p->next=NULL;//将当前结点的后继结点设为空，
		if(head==NULL)
		    head=p;//如果这是第一个创建的结点，则头指针指向这个结点
		else
		    q->next=p;//如果不是第一个创建的结点的话，则将上一个结点的后继结点指向当前结点
		
		q=p;//指针q也指向当前结点 
	}
	scanf("%d",&a);
	t=head;//从头部开始遍历
	while(t!=NULL)
	{
		if(t->next==NULL||t->next->data>a)//当前结点是最后一个结点，或者下一个结点的值大于带插入的数的时候插入 
		{
			p=(struct node *)malloc(sizeof(struct node));//动态申请一个空间，用来存放新增结点
			p->data=a;
			p->next=t->next;//新增指针的后继指针指向当前结点的后继指针所指向的结点
			t->next=p;//当前结点的后继指针指向新增结点
			break; 
		}
		t=t->next;//继续下一个结点 
	 } 
	//输出链表中的所有数
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data );
		t=t->next;//继续下一个结点 
	} 
	return 0; 
}
