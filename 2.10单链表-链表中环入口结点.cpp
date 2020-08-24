/*题目：一个链表中包含环，请找出该链表的环的入口结点。

思路：

第一步，找环中相汇点。分别用p1，p2指向链表头部，p1每次走一步，p2每次走二步，直到p1==p2找到在环中的相汇点。

第二步，找环的长度。从环中的相汇点开始, p2不动, p1前移，　当再次相遇时，p1刚好绕环一周, 其移动即为环的长度K，使用一快一慢两个指针（比如慢指针一次走一步，　慢指针一次走两步），如果走的过程中发现快指针追上了慢指针, 说明遇见了环，而且相遇的位置一定在环内, 考虑一下环内, 从任何一个节点出现再回到这个节点的距离就是环的长度, 于是我们可以进一步移动慢指针，快指针原地不动, 当慢指针再次回到相遇位置时, 正好在环内走了一圈, 从而我们通过计数就可以获取到环的长度

第三步, 求换的起点, 转换为求环的倒数第N-K个节点，则两指针left和right均指向起始, right先走K步, 然后两个指针开始同步移动, 当两个指针再次相遇时, right刚好绕环一周回到起点, left则刚好走到了起点位置*/

class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        ListNode*fast=pHead,*low=pHead;
        while(fast&&fast->next){
            fast=fast->next->next;
            low=low->next;
            if(fast==low)
                break;
        }
        if(!fast||!fast->next)return NULL;
        low=pHead;
        while(fast!=low){
            fast=fast->next;
            low=low->next;
        }
        return low;
    }
};
