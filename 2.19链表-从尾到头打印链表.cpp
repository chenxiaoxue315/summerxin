//����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���
/*���룺head = [1,3,2]
�����[2,3,1]*/
typedef char ListType;
typedef struct ListNode
{
ListType data;
struct ListNode* next;
}ListNode;
void Printendtofirst(ListNode * first)
{
ListNode* cur = first;
ListNode* end = NULL;
while (end != first)
{
cur = first;
while (end != cur->next)
{
cur = cur->next;
}
//end==cur->next
printf(��%d��,cur->data);
//�����һ��ָ��ǰ��
end = cur;
}
}
 
