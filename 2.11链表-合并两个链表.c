/*��Ŀ
��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
ʾ����
���룺1->2->4, 1->3->4
�����1->1->2->3->4->4
���˼·
1.����˳��Ϊ��С�����������Խ���һ������ָ��headָ��������������Ԫ�ؽ�С�ĵ��Ǹ�����
2.����������ϲ�����������ָ��p1,p2�ֱ�ָ�������������αȽ�p1,p2��ָ��Ԫ�ص�ֵ����С�����ӵ��µ������У�������ƶ���ֱ��p1,p2����һ��ָ��NULL��
3.�������Ǹ�p1û��ָ��NULL���������ӵ���������档*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p1,*p2,*q1,*q2,*p,*head;
    p1=l1;
    p2=l2;
    if(l1==NULL){
        return l2;
    }else if(l2==NULL){
        return l1;
    }
    
    if( p1->val < p2->val ){
        head=p1;
        p1=p1->next;
    }else{
        head=p2;
        p2=p2->next;
    }
        p=head;
    while(p1!=NULL && p2!=NULL){
        if(p1->val <= p2->val){
            p->next=p1;
            p=p1;
            p1=p1->next;
        }else{
            p->next=p2;
            p=p2;
            p2=p2->next;
        }
        
    }
    
    if(p1!=NULL){
        p->next=p1;
    }else{
        p->next=p2;
    }
    return head;
}



