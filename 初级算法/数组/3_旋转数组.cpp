/****************************************!
*@brief  3_��ת����
*@author ZhangYunjia
*@date   2019/6/9/8:24

****************************************/

#include<iostream>
#include <vector>
using namespace std;
//˼·1������һ�������飬����Ӧλ�õ�����Ԫ�ذ��˵�����������ȷ��λ����
class Solution1 {
public:
	 void rotate(vector<int>& a, int k) {
		len = a.size();
		b = new int[len];
		for (int i=0;i<len;i++)
		{
			index = (i + k) % len;
			b[index] = a[i];
		}

		for (int m=0;m<len;m++)
		{
			a[m] = b[m];
		}
		delete[] b;
		b = NULL;

	}
private:
	int *b;
	int len;
	int index;
};
//˼·2����ԭ�����Ͻ���ѭ��λ�ƣ�ÿ���ƶ�һ��λ�ã��ƶ�k�Σ�ȱ����ʱ�临�Ӷ�̫��
class Solution2 {
public:
	void rotate(vector<int>& a, int k) {
		len = a.size();
		for (int i = 0; i < k; i++)
		{
			tmp = a[len - 1];
			for (int j=1;j<len;j++)
			{
				a[len-j] = a[len-j-1];
			}
			a[0] = tmp;
		}
		for (int m = 0; m < len; m++)
		{
			cout << a[m] << " ";
		}

	}
private:
	int tmp;
	int len;
	int index;
};


int main()
{
	int k = 2;
	//vector<int> a = { 1,2,3,4,5,6,7 };
	vector<int> a = { -1,-100,3,99 };
	Solution2 s;
	s.rotate(a, k);
	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}