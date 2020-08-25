//�ж�һ�������Ƿ�Ϊ��������
/*ʾ�� 1:
����: 1->2
���: false
ʾ�� 2:
����: 1->2->2->1
���: true */
/*ʹ�ÿ���ָ��,����ָ�뵽���β��ʱ����ָ���������в���������ĺ�벿�ֽ��е��ã���ǰ�벿�ֽ��бȽϣ������Ϊ��������
����ĵ��ò��֣�����1>2>3>4>3>2>1
�൱����pre��ǰ�ڵ㣩>slow����ǰ�ڵ㣩>next���¸��ڵ㣩����ָ���������ϻ���,��ʼ��ʱ��slowָ��4����ڵ㣬pre ��ʼָ��ΪNULL;
1������ָ��p����ÿһ��slow���¸��ڵ㣨p = slow -> next��;
2��Ҫʵ������ķ�ת������Ҫʵ��pre<slow������裬���Խ�slowָ��pre(slow -> next = pre);
3��һ�η�ת��ɺ�ָ�����һ�����pre = slow��slow��Ϊ��ǰ�ڵ㣩��
4��slow = p(��ʱ��p��Ϊ�˵�ǰ�ڵ�)��
ѭ�����ϲ��裬ֱ��slow = NULL��pre�պ�ָ����������һ���ڵ㣬ʵ������������ķ�ת��*/
bool isPalindrome(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    struct ListNode* pre = NULL;
    if(!head || !head->next)
        return true;
    while(fast && fast->next){      //����ָ���ƶ�
           fast = fast->next->next;
           slow = slow->next;     
    } 
    while(slow){                    //������
        struct ListNode *p 
        p = slow->next;
        slow->next = pre;
        pre = slow;
        slow = p;
    }
    while(pre && head){             //�Ƚ�
        if(pre->val != head->val)
            return false;
        pre = pre->next;
        head = head->next;
    }
    return true;
}
