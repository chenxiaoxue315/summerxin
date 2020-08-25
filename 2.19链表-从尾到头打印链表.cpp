//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
/*输入：head = [1,3,2]
输出：[2,3,1]*/
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
printf(“%d”,cur->data);
//将最后一个指针前移
end = cur;
}
}
 
