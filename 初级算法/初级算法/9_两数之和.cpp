/****************************************!
*@brief  两数之和
*@author ZhangYunjia
*@date   2019/6/11/13:50

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

void print(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

}

class Solution {
public:
	vector<int> twoSum(vector<int>& a, int target) 
	{
		len = a.size();
		for (int i=0;i<len;i++)
		{
			for (int j=i+1;j<len;j++)
			{
				if ( (a[i]+a[j]) == target )
				{
					a1.push_back(i);
					a1.push_back(j);
				}
			}
		}
		return a1;

	}

private:
	int len;
	vector<int> a1;
};

int main()
{

	vector<int> a = { 2, 7, 11, 15 };
	vector<int> a1;

	Solution s;
	a1 = s.twoSum(a,9);
	print(a1);
	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}