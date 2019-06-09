/****************************************!
*@brief  3_旋转数组
*@author ZhangYunjia
*@date   2019/6/9/8:24

****************************************/

#include<iostream>
#include <vector>
using namespace std;
//思路1：构造一个新数组，将相应位置的数组元素搬运到新数组中正确的位置上
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
//思路2：在原数组上进行循环位移，每次移动一个位置，移动k次，缺点是时间复杂度太高
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