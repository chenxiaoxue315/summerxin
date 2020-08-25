/*给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。
你应当保留两个分区中每个节点的初始相对位置。
示例:
输入: head = 1->4->3->2->5->2, x = 3
输出: 1->2->2->4->3->5*/ 
//思路：类似于快排，但是链表可以新建左右两个链表，然后拼接到一起。
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* h1=0,*t1=0,*h2=0,*t2=0;
        for(;head;head=head->next){
            if(head->val < x){
                if(t1){
                    t1->next=head;
                    t1=head;
                }else{
                    h1=head;
                    t1=head;
                }
            }else{
                if(t2){
                    t2->next=head;
                    t2=head;
                }else{
                    h2=head;
                    t2=head;
                }
            }
        }
        if(t2){
            t2->next=0;
        }
        if(t1){
            t1->next=h2;
        }
        return h1?h1:h2;
    }
};
