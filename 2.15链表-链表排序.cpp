//��������
/*ʾ�� 1:
����: 4->2->1->3
���: 1->2->3->4
ʾ�� 2:
����: -1->5->3->4->0
���: -1->0->3->4->5*/
//���Ա������,����ð������,ֱ�ӱ�������
//2������������򵥡�ֱ�ӵķ�ʽ��ֱ�Ӳ���ð�ݻ���ѡ�����򣬶��Ҳ��ǽ�����㣬ֻ����������
void Listsort(Node* & head) {
    int i = 0;
    int j = 0;
    //���ڱ�������
    Node * L = head;
    //��Ϊһ����ʱ��
    Node * p;
    Node * p1;
    //�������Ϊ��ֱ�ӷ���
    if (head->value == 0)return;

    for (i = 0; i < head->value - 1; i++) {
        L = head->next;
        for (j = 0; j < head->value - i - 1; j++) {
            //�õ�����ֵ
            p = L;
            p1 = L->next;
            //���ǰ����Ǹ��Ⱥ�����Ǹ��󣬾ͽ�������֮�����������
            if (p->value > p1->value) {
                Elemtype temp = p->value;
                p->value = p1->value;
                p1->value = temp;
            }
            L = L->next;
        }
    }
}

