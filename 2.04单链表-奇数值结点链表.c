/*����ֵ�������*/ 
#include <stdio.h>
#include <stdlib.h>
 
struct ListNode {
	int data;
	struct ListNode *next;
}; 
 
struct ListNode *readlist();//���� 
struct ListNode *getodd(struct ListNode **L);//�ҳ���������������ֵ������� 
 
void printlist (struct ListNode *L)
{
	struct ListNode *p = L;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	
	printf("\n");
}
 
int main()
{
	struct ListNode *L, *Odd;
	L = readlist();
	Odd = getodd(&L);
	printlist(Odd);
	//printlist(L);
	
	return 0;
}
 
struct ListNode *readlist()
{
	int data;		// �������� 
	int size = sizeof(struct ListNode);		// ����������ռ�ݵ��ڴ� 
	struct ListNode *head, *tail, *p;
	head = tail = NULL;
	
	scanf("%d", &data);
	while (data!=-1)
	{
		p = (struct ListNode *) malloc(size);
		p->data = data;
		p->next = NULL;
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			tail->next = p;
		}
		tail = p;	
		scanf("%d", &data);
	}
 
	
	return head;
}
 
struct ListNode *getodd(struct ListNode **L)
{
	int data;
	int size = sizeof(struct ListNode);
	struct ListNode *head, *tail, *pNew;		// ����New
	struct ListNode *ptr1, *ptr2;
	head = tail = NULL;
	
	
	// L�����head������ 
	while (*L!=NULL && (*L)->data%2!=0)
	{
		data = (*L)->data;
		// ��L����������������һ���µ����� 
		pNew = (struct ListNode *) malloc(size);
		pNew->data = data;
		pNew->next = NULL;
		if (head==NULL)
		{
			head = pNew;
		}
		else
		{
			tail->next = pNew;
		}
		tail = pNew;	
		
		// ɾ��L���������
		ptr2 = *L;
		*L = (*L)->next;
		free(ptr2);	
	}
	
	if (*L==NULL)
	{
		return NULL;
	}
	
	//L�����head������ 
	ptr1 = *L;
	ptr2 = (*L)->next;
	while (ptr2!=NULL)
	{
		data = ptr2->data;
		if (data%2!=0)
		{
			// ��L����������������һ���µ����� 
			pNew = (struct ListNode *) malloc(size);
			pNew->data = data;
			pNew->next = NULL;
			if (head==NULL)
			{
				head = pNew;
			}
			else
			{
				tail->next = pNew;
			}
			tail = pNew;	
			
			// ɾ��L���������
			ptr1->next = ptr2->next;
			free(ptr2);
		}
		else
		{
			ptr1 = ptr2;
		}
		ptr2 = ptr1->next;	
	}	
	 
	return head;
} 
