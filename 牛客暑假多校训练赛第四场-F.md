# 牛客暑假多校训练赛第四场-F

#### 来源：https://ac.nowcoder.com/acm/contest/5669/F

##### 描述：

平面内有两条平行线AB和CD。A，B，C，D都是不同的点。 你只知道 AC，AD，BC，BD之间的欧氏距离。 但你不知道点的确切顺序。 (即 不知道是AB//CD还是AB//DC)。

![img](https://uploadfiles.nowcoder.com/images/20200716/329337_1594891605277_AE8E2FF51CF6CE451D3702D26FA94C98)

输入包含多个情况。 输入的第一行包含单个整数T(1≤T≤100)。 每种情况下，有四个整数a，b，c，d(1≤a，b，c，d≤1000)表示 AC，AD，BC，BD之间的距离。输出AB//CD还是AB//DC

##### 样例：

输入：2                            输出：
           3 5 5 3                      AB//CD
           5 3 3 5                      AB//DC

##### 思路：

第一反应就是AC<=AD&&BD<=BC就行了呗，但只有33%能过。明显AC大于AD的情况也有能满足的。以整体思路来考虑会更简单，我们将这四个点可以看成一个平行四边形，对角显得长度之和必然等于边缘两边之和。所以直接用AD+BC>AC+BD就好了，这时AB//CD.否则就是AB//DC.

上代码：

```c++
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int T;
	scanf("%d",&T);
	int AD,AC,BC,BD; 
	while(T--)
	{
		 scanf("%d %d %d %d",&AC,&AD,&BC,&BD);
		if(AD+BC>AC+BD) printf("AB//CD\n");
		else printf("AB//DC\n");
	}
	return 0; 
 } 
```

就是当成平行四边形，这一个整体就好啦