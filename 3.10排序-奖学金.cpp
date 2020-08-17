/*描述： 输出总分前五名， 总分相同输出语文成绩高一点的
输入
包含n+1行:

第1行为一个正整数n，表示该校参加评选的学生人数。

第2到n+1行，每行有3个用空格隔开的数字，每个数字都在0到100之间。第j行的3个数字依次表示学号为 j-1 的学生的语文、数学、英语的成绩。每个学生的学号按照输入顺序编号为1~n (恰好是输入数据的行号减1)。

所给的数据都是正确的，不必检验。

50%的数据满足:各学生的总成绩各不相同；
100%的数据满足: 6<=n<=300。
输出
共有5行，每行是两个用空格隔开的正整数，依次表示前5名学生的学号和总分。
样例输入
样例 #1：
6
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98

样例 #2：
8
80 89 89 
88 98 78
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98

样例输出
样例 #1：
6 265
4 264
3 258
2 244
1 237

样例 #2：
8 265
2 264
6 264
1 258
5 258*/
//会用到结构体去把数据统一，用sort()快排
#include<bits/stdc++.h>
using namespace std;
const int N=300;
struct _Student
{
	int ID;//学号 
	int Chinese;//语文
	int Math;//数 
	int English;//英语 
	int total; //总分 
}; 
typedef struct _Student Student;
//定义比较函数 
bool cmp(Student& s1, Student& s2)
{
    if (s1.total == s2.total)
    {
        if (s1.Chinese == s2.Chinese)
        {
            //当语文成绩相同时，用学号作为比较的条件 
            return (s1.ID < s2.ID); 
        }
        else
        {
            //语文成绩不同时，用语文成绩作为比较的条件就好 
            return (s1.Chinese > s2.Chinese); 
        }
    }
    else
    {
        //总分不同时用总分作为比较的条件 
        return (s1.total > s2.total); 
    }
}

int main()
{
    int n;

    cin >> n;

    assert(6 <= n && n <= N);//如果n不符合此条件，将终止程序运行 

    Student stu;//此结构用于输入，为了使i（学号）和存放数组有更好的对印关系 
    Student AllStudents[N];//此结构体组用于存放数据 

    for(int i=1; i<=n; i++)
    {
        cin >> stu.Chinese >> stu.Math >> stu.English;

        assert(0 <= stu.Chinese && stu.Chinese <= 150);//同样不满足条件，则终止程序运行 
        assert(0 <= stu.Math    && stu.Math    <= 150);
        assert(0 <= stu.English && stu.English <= 150);

        stu.ID    = i;
        stu.total = stu.Chinese + stu.Math + stu.English;

        AllStudents[i-1] = stu;
    }

    sort(AllStudents, AllStudents+n, cmp);//快排，cmp为快排比较条件 
    
    //输出前五名 
    for(int i=1; i<=5; i++)
    {
        cout << AllStudents[i-1].ID << " " << AllStudents[i-1].total << endl;
    }

    return 0;
}
