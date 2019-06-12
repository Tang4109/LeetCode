/****************************************!
*@brief  “∆∂Ø¡„
*@author ZhangYunjia
*@date   2019/6/11/13:30

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
	void moveZeroes(vector<int>& a) 
	{
		len = a.size();
		for (int i=0;i<len;i++)
		{
			if (a[i]==0)
			{
				for (int j=i;j<len-1;j++)
				{
					a[j] = a[j + 1];
				}
				a[len - 1] = 0;
				len--;
				i--;
			}
			
		}


	}
private:
	int len;
};

int main()
{
	vector<int> a = { 0,0,1 };
	
	Solution s;
	s.moveZeroes(a);
	print(a);
	
	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}