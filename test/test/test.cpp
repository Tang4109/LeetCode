/****************************************!
*@brief
*@author ZhangYunjia
*@date   2019/6/6/8:12

****************************************/

#include<iostream>
#include <vector>
using namespace std;

#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
class Solution2 {
public:
	int removeDuplicates(vector<int>& a) {
		len = a.size();
		if (len == 0)
		{
			return 0;
		}
		//{ 1,1,2,2,3,3,3,4,1,0,2}
		for (int i = 0; i < len; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				if ((a[j] == a[i]) && (a[j] != a[len - 1]))
				{

					for (int k = j; k < len - 1; k++)
					{
						a[k] = a[k + 1];
					}
					len--;
					a.resize(len);

					j--;

				}
			}
		}

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (!nums.size()) return NULL;
		int k = 0;
		for (int i = 1; i < nums.size(); i++) {//直接插入思想
			if (nums[i] != nums[k]) {
				nums[++k] = nums[i];
			}
		}
		nums.resize(k + 1);
		return k + 1;
	}
};



int main()
{
	int len = 0;
	int a[] = { 1,1,0,0,4,4,3,1,0,4,2,2 };
	vector<int> v;
	GET_ARRAY_LEN(a, len);
	for (int i = 0; i < len; i++)
	{
		v.push_back(a[i]);
	}
	int num = 0;
	Solution s;
	num = s.removeDuplicates(v);
	cout << num << endl;
	for (int i = 0; i < num; i++)
	{
		cout << v[i];
	}

	cout << "\nend.." << endl;
	system("pause");
	return 0;
}