/*�������֮ɾ�����*/
#include<stdio.h>
#include<stdlib.h>
struct node_list{
	int num;
	struct node_list *next;
}; 
typedef struct node_list LIST;
LIST *creat_list();//���� 
LIST *del_list(LIST *L,int m);//ɾ�� 
void printlist(LIST *L)
{
	LIST *p;
	
	for(p=L->next;p!=NULL;p=p->next)
	printf("%d ",p->num);
	printf("\n");
 } 
int main ()
{
	LIST *L,*L2;
	L=creat_list();
	L2=NULL;
	int m;
	scanf("%d",&m);
	L2=del_list(L,m);
	printlist(L2);
	return 0;
}
LIST *creat_list()
{
	LIST *head,*tail,*pnew;
	head=(LIST *)malloc(sizeof(LIST));
	head->next=NULL;
	tail=head;
	while(1)
	{
		pnew=(LIST *)malloc(sizeof(LIST));
		scanf("%d",&pnew->num);
		if(pnew->num==-1) break;
		
		pnew->next=NULL;
		tail->next=pnew;
		tail=pnew;
	}
	return head;
}
LIST *del_list(LIST *L,int m)
{
	LIST *p,*q;
	//�ж��Ƿ�Ϊ�� 
	if(L==NULL) return NULL;
	
	//�жϵ�һ����������Ľ���ֵ�Ƿ����m 
	
	/*while(L!=NULL&&L->num==m)
	{
		p=L;
		L=L->next;
		free(p);
	}*/
	
	p=L;
	q=L->next;
	while(q!=NULL)
	{
		if(q->num==m)
		{
			p->next=q->next;//p����һ��ָ��q����һ������ָ��ԭ��p�����¸� 
			free(q);
		}
		else 
		p=q;//p�Ƶ�q��λ�ã���ԭ��p����һ�� 
		q=p->next;
	}
	return L;
} 
