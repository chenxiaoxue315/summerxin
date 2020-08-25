/*����һ�������������е������ڵ��ż���ڵ�ֱ�����һ����ע�⣬����������ڵ��ż���ڵ�ָ���ǽڵ��ŵ���ż�ԣ������ǽڵ��ֵ����ż�ԡ�
�볢��ʹ��ԭ���㷨��ɡ�����㷨�Ŀռ临�Ӷ�ӦΪ O(1)��ʱ�临�Ӷ�ӦΪ O(nodes)��nodes Ϊ�ڵ�������
ʾ�� 1:
����: 1->2->3->4->5->NULL
���: 1->3->5->2->4->NULL
ʾ�� 2:
����: 2->1->3->5->6->4->7->NULL 
���: 2->3->6->7->1->5->4->NULL
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/odd-even-linked-list
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/ 
/*Ӧ�����������ڵ��ż���ڵ�����˳��
����ĵ�һ���ڵ���Ϊ�����ڵ㣬�ڶ����ڵ���Ϊż���ڵ㣬�Դ����ơ�
������
������ָ����Ϊ��ż�����ͷָ�룬����ԭ�������ν���ż����ӵ���Ӧ��������ɽ��*/
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // ��ż��ͷָ����βָ��
        ListNode *even = new ListNode(0);
        ListNode *even_tail = even;
        ListNode *odd = new ListNode(0);
        ListNode *odd_tail = odd;
        // ���־
        bool flag = true;
        while(head != NULL){
            flag?odd_tail->next = head:even_tail->next = head;
            flag?odd_tail = head:even_tail = head;
            head = head->next;
            flag = !flag;
        }
        even_tail->next = NULL;
        // ƴ��
        odd_tail->next = even->next;
        return odd->next;
    }
};
 
