/*奇数值结点链表*/ 
#include <stdio.h>
#include <stdlib.h>
 
struct ListNode {
	int data;
	struct ListNode *next;
}; 
 
struct ListNode *readlist();//遍历 
struct ListNode *getodd(struct ListNode **L);//找出奇数，创建奇数值结点链表 
 
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
	int data;		// 输入数据 
	int size = sizeof(struct ListNode);		// 单个链表结点占据的内存 
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
	struct ListNode *head, *tail, *pNew;		// 链表New
	struct ListNode *ptr1, *ptr2;
	head = tail = NULL;
	
	
	// L链表的head是奇数 
	while (*L!=NULL && (*L)->data%2!=0)
	{
		data = (*L)->data;
		// 将L链表的奇数重新组成一个新的链表 
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
		
		// 删除L链表的奇数
		ptr2 = *L;
		*L = (*L)->next;
		free(ptr2);	
	}
	
	if (*L==NULL)
	{
		return NULL;
	}
	
	//L链表的head非奇数 
	ptr1 = *L;
	ptr2 = (*L)->next;
	while (ptr2!=NULL)
	{
		data = ptr2->data;
		if (data%2!=0)
		{
			// 将L链表的奇数重新组成一个新的链表 
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
			
			// 删除L链表的奇数
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
