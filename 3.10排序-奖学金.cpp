/*������ ����ܷ�ǰ������ �ܷ���ͬ������ĳɼ���һ���
����
����n+1��:

��1��Ϊһ��������n����ʾ��У�μ���ѡ��ѧ��������

��2��n+1�У�ÿ����3���ÿո���������֣�ÿ�����ֶ���0��100֮�䡣��j�е�3���������α�ʾѧ��Ϊ j-1 ��ѧ�������ġ���ѧ��Ӣ��ĳɼ���ÿ��ѧ����ѧ�Ű�������˳����Ϊ1~n (ǡ�����������ݵ��кż�1)��

���������ݶ�����ȷ�ģ����ؼ��顣

50%����������:��ѧ�����ܳɼ�������ͬ��
100%����������: 6<=n<=300��
���
����5�У�ÿ���������ÿո�����������������α�ʾǰ5��ѧ����ѧ�ź��ܷ֡�
��������
���� #1��
6
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98

���� #2��
8
80 89 89 
88 98 78
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98

�������
���� #1��
6 265
4 264
3 258
2 244
1 237

���� #2��
8 265
2 264
6 264
1 258
5 258*/
//���õ��ṹ��ȥ������ͳһ����sort()����
#include<bits/stdc++.h>
using namespace std;
const int N=300;
struct _Student
{
	int ID;//ѧ�� 
	int Chinese;//����
	int Math;//�� 
	int English;//Ӣ�� 
	int total; //�ܷ� 
}; 
typedef struct _Student Student;
//����ȽϺ��� 
bool cmp(Student& s1, Student& s2)
{
    if (s1.total == s2.total)
    {
        if (s1.Chinese == s2.Chinese)
        {
            //�����ĳɼ���ͬʱ����ѧ����Ϊ�Ƚϵ����� 
            return (s1.ID < s2.ID); 
        }
        else
        {
            //���ĳɼ���ͬʱ�������ĳɼ���Ϊ�Ƚϵ������ͺ� 
            return (s1.Chinese > s2.Chinese); 
        }
    }
    else
    {
        //�ֲܷ�ͬʱ���ܷ���Ϊ�Ƚϵ����� 
        return (s1.total > s2.total); 
    }
}

int main()
{
    int n;

    cin >> n;

    assert(6 <= n && n <= N);//���n�����ϴ�����������ֹ�������� 

    Student stu;//�˽ṹ�������룬Ϊ��ʹi��ѧ�ţ��ʹ�������и��õĶ�ӡ��ϵ 
    Student AllStudents[N];//�˽ṹ�������ڴ������ 

    for(int i=1; i<=n; i++)
    {
        cin >> stu.Chinese >> stu.Math >> stu.English;

        assert(0 <= stu.Chinese && stu.Chinese <= 150);//ͬ������������������ֹ�������� 
        assert(0 <= stu.Math    && stu.Math    <= 150);
        assert(0 <= stu.English && stu.English <= 150);

        stu.ID    = i;
        stu.total = stu.Chinese + stu.Math + stu.English;

        AllStudents[i-1] = stu;
    }

    sort(AllStudents, AllStudents+n, cmp);//���ţ�cmpΪ���űȽ����� 
    
    //���ǰ���� 
    for(int i=1; i<=5; i++)
    {
        cout << AllStudents[i-1].ID << " " << AllStudents[i-1].total << endl;
    }

    return 0;
}
