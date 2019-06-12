/****************************************!
*@brief  leetcode 2 买股票的最佳时机
*@author ZhangYunjia
*@date   2019/6/7/11:52

****************************************/

#include<iostream>
#include <vector>
using namespace std;

#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
class Solution {
public:
	int maxProfit(vector<int>& a) {
		len = a.size();
		if (len == 0)
		{
			return 0;
		}
		//{ 1,1,2,2,3,3,3,4,1,0,2}
		for (int i = 0; i < len-1; i++)
		{
			if (a[i] > a[i+1])
			{
				if (k!=0)
				{
					profit = profit + (a[i] - a[i - k]);
				}
				k = 0;
			}
			else if (a[i] <= a[i + 1])
			{
				k++;
				if (i == len - 2)
				{
					profit = profit + a[len - 1] - a[len-1-k];
				}

			}

		}
		
		return profit;
	}

private:
	int len;
	int profit = 0;
	int k=0;
};

int main()
{
	int len = 0;
	//int a[] = { 6, 1, 3, 2, 4, 7 };
	//int a[] = { 7,6,4,3,1 };
	//int a[] = { 5,2,3,2,6,6,2,9,1,0,7,4,5,0 };
	vector<int> a = { 5,2,3,2,6,6,2,9,1,0,7,4,5,0 };
	int profit = 0;
	Solution s;
	profit = s.maxProfit(a);
	cout << profit << endl;

	cout << "\nend.." << endl;
	system("pause");
	return 0;
}
