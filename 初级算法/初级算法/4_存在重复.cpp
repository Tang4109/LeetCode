/****************************************!
*@brief  4_判断数组是否存在重复元素
*@author ZhangYunjia
*@date   2019/6/9/11:28

****************************************/

#include<iostream>
#include <vector>
#include <set>
using namespace std;

//方法1：时间复杂度太高
class Solution1 {
public:
	bool containsDuplicate(vector<int>& a) {
		len = a.size();
		cout << len << endl;
		for (int i=0;i<len;i++)
		{
			for (int j=i+1;j<len;j++)
			{
				if (a[j]==a[i])
				{
					return true;
				}
			}
		}
		

		return false;
	}
private:
	int len;
};
//方法2：利用set集合不能放重复元素的特点实现
class Solution {
public:
	bool containsDuplicate(vector<int>& a) {
		set<int> s;

		for (auto x : a) {
			cout << x << " ";
			s.insert(x);
			
		}
		cout << s.size() << endl;
		cout << a.size() << endl;
		return s.size() != a.size();
	}
};


int main()
{
	vector<int> a = { 1,2,3,2,4 };
	Solution s;
	int flag;
	flag = s.containsDuplicate(a);
	cout << flag << endl;
	
	cout << "\nend.." << endl;
	system("pause");
	return 0;
}