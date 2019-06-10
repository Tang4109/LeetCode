/****************************************!
*@brief  5_只出现一次数字
*@author ZhangYunjia
*@date   2019/6/10/11:03

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
	int singleNumber(vector<int>& a) {
		sort(a.begin(),a.end());
		len = a.size();
		if (len==1)
		{
			return a[0];
		}
		if (a[0] != a[1])
		{
			return a[0];
		}
		if (a[len-1]!=a[len-2])
		{
			return a[len - 1];
		}
		for (int i=0;i<len-2;i++)
		{
			if (a[i] != a[i + 1])
			{
				if (a[i+1]!=a[i+2])
				{
					return a[i + 1];
				}
			}
		}
	
		return NULL;
	}
private:
	int len;
};

int main()
{
	vector<int> a = { 1};
	Solution s;
	int num;
	num = s.singleNumber(a);
	cout << num << endl;
	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}