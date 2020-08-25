/*给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。
请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。
示例 1:
输入: 1->2->3->4->5->NULL
输出: 1->3->5->2->4->NULL
示例 2:
输入: 2->1->3->5->6->4->7->NULL 
输出: 2->3->6->7->1->5->4->NULL
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/odd-even-linked-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/ 
/*应当保持奇数节点和偶数节点的相对顺序。
链表的第一个节点视为奇数节点，第二个节点视为偶数节点，以此类推。
分析：
用两个指针作为奇偶链表的头指针，遍历原链表，依次将奇偶数添加到对应的链表，完成解答*/
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // 奇偶数头指针与尾指针
        ListNode *even = new ListNode(0);
        ListNode *even_tail = even;
        ListNode *odd = new ListNode(0);
        ListNode *odd_tail = odd;
        // 奇标志
        bool flag = true;
        while(head != NULL){
            flag?odd_tail->next = head:even_tail->next = head;
            flag?odd_tail = head:even_tail = head;
            head = head->next;
            flag = !flag;
        }
        even_tail->next = NULL;
        // 拼接
        odd_tail->next = even->next;
        return odd->next;
    }
};
 
