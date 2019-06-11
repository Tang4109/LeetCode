/****************************************!
*@brief  7_º”“ª
*@author ZhangYunjia
*@date   2019/6/11/7:24

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



class Solution {
public:
	vector<int> plusOne(vector<int>& a1)
	{
		len = a1.size();
		if (a1[0]==9)
		{
			num = count(a1.begin(), a1.end(), 9);
			if (num == len)
			{
				a2.resize(len + 1);
				fill(a2.begin(), a2.end(), 0);
				a2[0] = 1;
				return a2;
			}
		}
		
		for (int i=len-1;i>=0;i--)
		{
			if (a1[i] <= 8)
			{
				a1[i] = a1[i] + 1;
				return a1;
			}
			else if (a1[i] == 9)
			{
				a1[i] = 0;
			}
		}
		return a1;
	}


private:
	int num;
	int len;
	vector<int> a2;
};

int main()
{

	vector<int> a1 = { 0 };
	vector<int> a2;
	Solution s;
	a2 = s.plusOne(a1);
	for (int i = 0; i < a2.size(); i++)
	{
		cout << a2[i] << " ";
	}


	cout << "\nend.." << endl;
	system("pause");
	return 0;
}