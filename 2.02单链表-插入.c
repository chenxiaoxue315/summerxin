/*�������֮����*/
//����n������һ������Ϊn����������t,��ǰ��������һ����㣬������һ������ֵ���ڴ����������ʱ����� 
#include<stdio.h>
#include<stdlib.h>
//���ﴴ��һ������������ʾ����Ľڵ�����
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
	head=NULL;//ͷָ���ʼΪ��
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		//��̬����һ���ռ䣬������һ����㣬������ʱָ��pָ��������
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;//�����ݴ洢����ǰ����date����
		p->next=NULL;//����ǰ���ĺ�̽����Ϊ�գ�
		if(head==NULL)
		    head=p;//������ǵ�һ�������Ľ�㣬��ͷָ��ָ��������
		else
		    q->next=p;//������ǵ�һ�������Ľ��Ļ�������һ�����ĺ�̽��ָ��ǰ���
		
		q=p;//ָ��qҲָ��ǰ��� 
	}
	scanf("%d",&a);
	t=head;//��ͷ����ʼ����
	while(t!=NULL)
	{
		if(t->next==NULL||t->next->data>a)//��ǰ��������һ����㣬������һ������ֵ���ڴ����������ʱ����� 
		{
			p=(struct node *)malloc(sizeof(struct node));//��̬����һ���ռ䣬��������������
			p->data=a;
			p->next=t->next;//����ָ��ĺ��ָ��ָ��ǰ���ĺ��ָ����ָ��Ľ��
			t->next=p;//��ǰ���ĺ��ָ��ָ���������
			break; 
		}
		t=t->next;//������һ����� 
	 } 
	//��������е�������
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data );
		t=t->next;//������һ����� 
	} 
	return 0; 
}
