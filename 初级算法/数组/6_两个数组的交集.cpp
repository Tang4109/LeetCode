/****************************************!
*@brief  6_两个数组的交集
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


//使用 set_intersection 函数要先对数组排序
class Solution {
public:
	vector<int> intersect(vector<int>& a1, vector<int>& a2) 
	{
		sort(a1.begin(), a1.end());
		sort(a2.begin(), a2.end());
		
		set_intersection(a1.begin(), a1.end(), a2.begin(), a2.end(), back_inserter(a3));
		return a3;
	}

private:
	vector<int> a3;
	

};

int main()
{

	vector<int> a1 = { 4,4,9,5 };
	vector<int> a2 = { 9,4,9,8,4 };
	vector<int> a3;
	Solution s;
	a3 = s.intersect(a1, a2);
	for (int i=0;i<a3.size();i++)
	{
		cout << a3[i] << " ";
	}

	
	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}