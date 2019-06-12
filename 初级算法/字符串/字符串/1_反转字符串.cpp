/****************************************!
*@brief  ·´×ª×Ö·û´®
*@author ZhangYunjia
*@date   2019/6/12/11:07

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

void print(vector<char>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

}

class Solution {
public:
	void reverseString(vector<char>& a) 
	{
		reverse(a.begin(), a.end());
		print(a);
	}
};



int main()
{
	vector<char> c = { 'h','e','l','l','o' };
	Solution s;
	s.reverseString(c);
	

	cout<<"\nend.."<<endl;
	system("pause");
	return 0;
}