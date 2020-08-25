/*给定一个单链表?L：L0→L1→…→Ln-1→Ln ，
将其重新排列后变为： L0→Ln→L1→Ln-1→L2→Ln-2→…
你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
示例?1:
给定链表 1->2->3->4, 重新排列为 1->4->2->3.
示例 2:
给定链表 1->2->3->4->5, 重新排列为 1->5->2->4-3*/
#include<stdio.h>
struct node
{
    int data;
    int next;
}p[100001];
 
int main()
{
    int i,j,n,be,x,This_address,Next_address;
    int add1[100001];//顺序保存原始地址数据
    int add2[100001];//保存重排之后地址数据
    int length,k=0;
    
    scanf("%d %d",&be,&n);//第一行，首地址和节点数
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&This_address,&x,&Next_address);
        p[This_address].data=x;
        p[This_address].next=Next_address;
    }//输入完成
    
    while(be!=-1)//按节点顺序保存地址数据于add1
    {
        add1[k++]=be;
        be=p[be].next;
    }
    
    length=k;//有效地址的“个数”
    k=0;//重新开始计数
    
    for(i=0,j=length-1;i<=j;)
    {
        if(i==j)
            add2[k]=add1[i];
        else
        {
            add2[k++]=add1[j--];
            add2[k++]=add1[i++];
        }
    }
    
    for(i=0;i<length-1;i++)//输出,注意末尾位
    {
        printf("%05d %d %05d\n",add2[i],p[add2[i]].data,add2[i+1]);
    }
    printf("%05d %d -1\n",add2[length-1],p[add2[length-1]].data);
    
    return 0;
} 
