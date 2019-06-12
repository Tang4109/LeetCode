/****************************************!
*@brief  有效的数独
*@author ZhangYunjia
*@date   2019/6/11/14:10

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

void print(vector<vector<char>>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j=0;j<v[i].size();j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

}

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& a) 
	{
		//cout << a.size() << endl;
		//横向
		for (int i=0;i<a.size();i++)
		{
			num = count(a[i].begin(), a[i].end(), '.');
			s.clear();
			for (auto x:a[i])
			{
				s.insert(x);
			}
			if (num==0)
			{
				flag = (s.size() == a[i].size());
				if (flag==false)
				{
					return flag;
				}
			}
			else
			{
				flag = (s.size() == (a[i].size() - num + 1));
				if (flag == false)
				{
					return flag;
				}
			}
		}
		//纵向
		for (int j=0;j<9;j++)
		{
			s.clear();
			num = 0;
			for (int i=0;i<a.size();i++)
			{
				if (a[i][j]=='.')
				{
					num++;
				}
				s.insert(a[i][j]);
			}
			if (num == 0)
			{
				flag = (s.size() == a.size());
				if (flag == false)
				{
					return flag;
				}
			}
			else
			{
				flag = (s.size() == (a.size() - num + 1));
				if (flag == false)
				{
					return flag;
				}
			}
		}
		//宫内
		for (int r=0;r<3;r++)
		{
			for (int c=0;c<3;c++)
			{
				s.clear();
				num = 0;
				for (int i = 3 * r; i < 3 * (r + 1); i++)
				{
					
					for (int j = 3*c; j < 3*(c+1); j++)
					{
						if (a[i][j] == '.')
						{
							num++;
						}
						s.insert(a[i][j]);
					}
				}
				if (num == 0)
				{
					flag = (s.size() == 9);
					if (flag == false)
					{
						return flag;
					}
				}
				else
				{
					flag = (s.size() == (a.size() - num + 1));
					if (flag == false)
					{
						return flag;
					}
				}
			}

		}

		return true;

	}
private:
	set<char> s;
	int num;
	bool flag = true;
};



int main()
{
	vector<vector<char>> a = 
	{
		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}
	};
	//int num = count(a[0].begin(), a[0].end(), '.');
	//cout << num << endl;
	//print(board);
	Solution s;
	int flag;
	flag = s.isValidSudoku(a);
	cout << flag << endl;
	

	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}