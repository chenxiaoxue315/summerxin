//��д���룬�Ƴ�δ���������е��ظ��ڵ㡣�����ʼ���ֵĽ��
struct ListNode* removeDuplicateNodes(struct ListNode* head){
	struct ListNode *ptr1 = NULL, *ptr2 = NULL, *tmpPtr= NULL ,*ptr = NULL;

	if (!head) 
	{
		return NULL;
	}
	ptr1 = head;
	while (ptr1) 
	{
		ptr = ptr1;
		ptr2 = ptr->next;
		while (ptr2) 
		{
			if (ptr2->val == ptr1->val) 
			{
				tmpPtr = ptr2;
				ptr2 = ptr2->next;
				ptr->next = ptr2;
				free(tmpPtr);
			}else
			{
				ptr = ptr->next;
				ptr2 = ptr->next;
			}
		}
		ptr1 = ptr1->next;
	}
	return head;
}
 
