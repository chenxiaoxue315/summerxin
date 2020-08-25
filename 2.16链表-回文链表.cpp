//判断一个链表是否为回文链表
/*示例 1:
输入: 1->2
输出: false
示例 2:
输入: 1->2->2->1
输出: true */
/*使用快慢指针,当快指针到达表尾的时候，慢指针在链表中部，将链表的后半部分进行倒置，与前半部分进行比较，相等则为回文链表。
链表的倒置部分：例如1>2>3>4>3>2>1
相当于是pre（前节点）>slow（当前节点）>next（下个节点）三个指针在链表上滑动,开始的时候，slow指向4这个节点，pre 开始指向为NULL;
1、用新指针p保存每一次slow的下个节点（p = slow -> next）;
2、要实现链表的反转，就是要实现pre<slow这个步骤，所以将slow指向pre(slow -> next = pre);
3、一次反转完成后将指针向右滑动，pre = slow（slow成为了前节点）；
4、slow = p(此时的p成为了当前节点)；
循环以上步骤，直到slow = NULL，pre刚好指向链表的最后一个节点，实现了所有链表的反转。*/
bool isPalindrome(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    struct ListNode* pre = NULL;
    if(!head || !head->next)
        return true;
    while(fast && fast->next){      //快慢指针移动
           fast = fast->next->next;
           slow = slow->next;     
    } 
    while(slow){                    //链表倒置
        struct ListNode *p 
        p = slow->next;
        slow->next = pre;
        pre = slow;
        slow = p;
    }
    while(pre && head){             //比较
        if(pre->val != head->val)
            return false;
        pre = pre->next;
        head = head->next;
    }
    return true;
}
