/****************************************!
*@brief  Ðý×ªÍ¼Ïñ
*@author ZhangYunjia
*@date   2019/6/11/16:25

****************************************/

#include<iostream>
#include<iostream>
#include "iterator"
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <functional>
#include<numeric>

using namespace std;

void print(vector<vector<int>>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j=0;j<v.size();j++)
		{
			cout << v[i][j] << " ";

		}
		cout << endl;
	}

}

class Solution {
public:
	void rotate(vector<vector<int>>& a) {

		for (int i = 0; i < a.size(); i++)
		{
			for (int j = i + 1; j < a.size(); j++)
			{
				swap(a[i][j], a[j][i]);
			}
			reverse(a[i].begin(), a[i].end());
		}

		print(a);

	}
};


int main()
{
	vector<vector<int>> a=
	{
	{ 5, 1, 9,11 },
	{ 2, 4, 8,10 },
	{ 13, 3, 6, 7 },
	{ 15,14,12,16 }
	};

	Solution s;
	s.rotate(a);

	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}