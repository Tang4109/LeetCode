/****************************************!
*@brief	 leetcode 1 从排序数组中删除重复项
*@author ZhangYunjia
*@date   2019/6/6/8:12

****************************************/

#include<iostream>
#include <vector>
using namespace std;

#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
class Solution {
public:
	int removeDuplicates(vector<int>& a) {
		len = a.size();
		if (len==0)
		{
			return 0;
		}
		//{ 1,1,2,2,3,3,3,4,1,0,2}
		for (int i = 0; i < len; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				if ((a[j] == a[i]))
				{
					 
					for (int k = j; k < len-1; k++)
					{
						a[k] = a[k + 1];
					}
					len--;
					a.resize(len);
					j--;

				}
			}
		}
		return len;
	}

private:
	int len;
};

int main()
{
	int len = 0;
	int a[] = { 1,1,2,2,3,3,3,4,1,0,2,1,4,5,26,93,0,4 };
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
		cout << v[i] << " ";
	}

	cout << "\nend.." << endl;
	system("pause");
	return 0;
}

/*
//提交版本
class Solution {
public:
	int removeDuplicates(vector<int>& a) {
		len = a.size();
		if (len==0)
		{
			return 0;
		}
		//{ 1,1,2,2,3,3,3,4,1,0,2}
		for (int i = 0; i < len; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				if ((a[j] == a[i]))
				{
					 
					for (int k = j; k < len-1; k++)
					{
						a[k] = a[k + 1];
					}
					len--;
					a.resize(len);
					j--;

				}
			}
		}

		return len;
	}

private:
	int len;
	int num;
};



*/