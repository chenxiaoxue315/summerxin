//排序链表
/*示例 1:
输入: 4->2->1->3
输出: 1->2->3->4
示例 2:
输入: -1->5->3->4->0
输出: -1->0->3->4->5*/
//线性表的排序,采用冒泡排序,直接遍历链表
//2、链表排序—最简单、直接的方式（直接采用冒泡或者选择排序，而且不是交换结点，只交换数据域）
void Listsort(Node* & head) {
    int i = 0;
    int j = 0;
    //用于变量链表
    Node * L = head;
    //作为一个临时量
    Node * p;
    Node * p1;
    //如果链表为空直接返回
    if (head->value == 0)return;

    for (i = 0; i < head->value - 1; i++) {
        L = head->next;
        for (j = 0; j < head->value - i - 1; j++) {
            //得到两个值
            p = L;
            p1 = L->next;
            //如果前面的那个比后面的那个大，就交换它们之间的是数据域
            if (p->value > p1->value) {
                Elemtype temp = p->value;
                p->value = p1->value;
                p1->value = temp;
            }
            L = L->next;
        }
    }
}

