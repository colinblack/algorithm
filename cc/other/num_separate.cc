#include <iostream>
#include <vector>

using namespace std;

class Solution{	
public:	
	void separate(int number, const int max, int b, vector<int>& data, vector<vector<int>>& res)
	{		
		if(0 == number)
		{
			res.push_back(data);
			return;
		}
		for(int i = b; i < max; ++i)
		{					
			if(number < i)
				return;		
			
			data.push_back(i);
			separate(number-i, max, i, data, res);
			data.pop_back();
					
		}		
	}
		
};


int main()
{
	Solution s;
	vector<vector<int>> res;
	vector<int> data;
	
	s.separate(7, 7, 1, data, res); 
	
	for(auto i : res)
	{
		for(auto j : i)
		 cout << j << " ";
		cout << endl;
	}
	
	return 0;
}