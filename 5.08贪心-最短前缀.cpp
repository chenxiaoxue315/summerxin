/*����
һ���ַ�����ǰ׺�ǴӸ��ַ����ĵ�һ���ַ���ʼ��һ���Ӵ������� "carbon"���ִ���: "c", "ca", "car", "carb", "carbo", �� "carbon"��ע�⵽�������ǲ���Ϊ�մ����ִ�, ����ÿ���ǿմ�����������ִ�. ��������ϣ������ǰ׺�����Եı�ʾ���ʡ�����, "carbohydrate" ͨ����"carb"�����Ա�ʾ. ���ڸ���һ�鵥��, Ҫ�����ҵ�Ψһ��ʶÿ�����ʵ����ǰ׺
������������У�"carbohydrate" �ܱ����Գ�"carboh", ���ǲ��ܱ����Գ�"carbo" (��������̵�ǰ׺) ��Ϊ�Ѿ���һ��������"carbo"��ʼ
һ����ȷƥ��Ḳ��һ��ǰ׺ƥ�䣬���磬ǰ׺"car"��ȷƥ�䵥��"car". ��� "car" �� "car"����������û�ж����Ե� , ��car�����ᱻ����"carriage"�����κ����б�����"car"��ʼ�ĵ���.
����
�����������2�У�����1000��. ÿ�а���һ����Сд��ĸ��ɵĵ��ʣ����ʳ���������1��������20.
���
����������������������ͬ��ÿ���������Ӧ������ĵ��ʿ�ʼ���������һ���ո����������Ӧ���ʵ�û�ж����Ե����ǰ׺��ʶ����
��������
carbohydrate
cart
carburetor
caramel
caribou
carbonic
cartilage
carbon
carriage
carton
car
carbonate
�������
carbohydrate carboh
cart cart
carburetor carbu
caramel cara
caribou cari
carbonic carboni
cartilage carti
carbon carbon
carriage carr
carton carto
car car
carbonate carbona*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n = 0;
	string coll[1500];
	while (cin>>coll[n])
	{
		n++;
	} 
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= coll[i].length(); j++)
		{
			string tmp = coll[i].substr(0, j);
			bool f = false;
			for (int  k = 0; k < n; k++)
			{
				if (i!=k)
				{
					if (coll[k].substr(0,j)==tmp)
					{
						f = true;
						break;//����ȵģ���ô�������ĸ���������ǰ׺�����ֱ�ӿ�ʼ��һ���ַ���
					}
				}
			}
			if (!f)
			{
				cout << coll[i] << " " << tmp << endl;
				break;
			}
			if (j==coll[i].length())
			{
				cout << coll	[i] << " " << coll[i] << "\n";
			}
		}
	}
}
