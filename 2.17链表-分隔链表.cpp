/*����һ�������һ���ض�ֵ x����������зָ���ʹ������С�� x �Ľڵ㶼�ڴ��ڻ���� x �Ľڵ�֮ǰ��
��Ӧ����������������ÿ���ڵ�ĳ�ʼ���λ�á�
ʾ��:
����: head = 1->4->3->2->5->2, x = 3
���: 1->2->2->4->3->5*/ 
//˼·�������ڿ��ţ�������������½�������������Ȼ��ƴ�ӵ�һ��
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
