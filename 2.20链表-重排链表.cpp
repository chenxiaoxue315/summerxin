/*����һ��������?L��L0��L1������Ln-1��Ln ��
�����������к��Ϊ�� L0��Ln��L1��Ln-1��L2��Ln-2����
�㲻��ֻ�ǵ����ĸı�ڵ��ڲ���ֵ��������Ҫʵ�ʵĽ��нڵ㽻����
ʾ��?1:
�������� 1->2->3->4, ��������Ϊ 1->4->2->3.
ʾ�� 2:
�������� 1->2->3->4->5, ��������Ϊ 1->5->2->4-3*/
#include<stdio.h>
struct node
{
    int data;
    int next;
}p[100001];
 
int main()
{
    int i,j,n,be,x,This_address,Next_address;
    int add1[100001];//˳�򱣴�ԭʼ��ַ����
    int add2[100001];//��������֮���ַ����
    int length,k=0;
    
    scanf("%d %d",&be,&n);//��һ�У��׵�ַ�ͽڵ���
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&This_address,&x,&Next_address);
        p[This_address].data=x;
        p[This_address].next=Next_address;
    }//�������
    
    while(be!=-1)//���ڵ�˳�򱣴��ַ������add1
    {
        add1[k++]=be;
        be=p[be].next;
    }
    
    length=k;//��Ч��ַ�ġ�������
    k=0;//���¿�ʼ����
    
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
    
    for(i=0;i<length-1;i++)//���,ע��ĩβλ
    {
        printf("%05d %d %05d\n",add2[i],p[add2[i]].data,add2[i+1]);
    }
    printf("%05d %d -1\n",add2[length-1],p[add2[length-1]].data);
    
    return 0;
} 
