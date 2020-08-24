//两个链表的公共结点，计算链表的长度 然后移动较长链表的指针, 使其到相同结点的距离的相同, 再同时移动两个链表的指针, 找到相同元素.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct ListNode {
	int m_nKey;
	ListNode *m_pNext;
};
 
size_t GetListLength (ListNode* pHead) {
	size_t nLength = 0;
	ListNode* pNode = pHead;
	while (pNode != NULL) {
		++nLength;
		pNode = pNode->m_pNext;
	}
	return nLength;
}
 
ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
	size_t nLength1 = GetListLength(pHead1);
	size_t nLength2 = GetListLength(pHead2);
	int nLengthDif = nLength1 - nLength2;
	ListNode* pListHeadLong = pHead1;
	ListNode* pListHeadShort = pHead2;
	if (nLength2 > nLength1) {
		pListHeadLong = pHead2;
		pListHeadShort = pHead1;
		nLengthDif = nLength2 - nLength1;
	}
 
	for (int i=0; i<nLengthDif; ++i)
		pListHeadLong = pListHeadLong->m_pNext;
 
	while ((pListHeadLong != NULL) && (pListHeadShort != NULL)
			&& (pListHeadLong != pListHeadShort)) {
		pListHeadLong = pListHeadLong->m_pNext;
		pListHeadShort = pListHeadShort->m_pNext;
	}
 
	ListNode* pFirstCommonNode = pListHeadLong;
	return pFirstCommonNode;
}
 
int main(void)
{
	ListNode* pHead1 = new ListNode();
	ListNode* pHead1Node1 = new ListNode();
	ListNode* pHead1Node2 = new ListNode();
	ListNode* pHead1Node3 = new ListNode();
	ListNode* pHead1Node4 = new ListNode();
	pHead1->m_nKey = 1;
	pHead1Node1->m_nKey = 2;
	pHead1Node2->m_nKey = 3;
	pHead1Node3->m_nKey = 6;
	pHead1Node4->m_nKey = 7;
	pHead1->m_pNext = pHead1Node1;
	pHead1Node1->m_pNext = pHead1Node2;
	pHead1Node2->m_pNext = pHead1Node3;
	pHead1Node3->m_pNext = pHead1Node4;
	pHead1Node4->m_pNext = NULL;
 
	ListNode* pHead2 = new ListNode();
	ListNode* pHead2Node1 = new ListNode();
	pHead2->m_nKey = 4;
	pHead2Node1->m_nKey = 5;
	pHead2->m_pNext = pHead2Node1;
	pHead2Node1->m_pNext = pHead1Node3;
 
	ListNode* result = FindFirstCommonNode(pHead1, pHead2);
	printf("result = %d\n", result->m_nKey);
 
    return 0;
}
 
