//数组分割，《编程之美》2.18
//http://blog.csdn.net/linyunzju/article/details/7729774
//http://www.cnblogs.com/wuchanming/p/4457358.html
#include <iostream>
#include <algorithm>


using std::min;
void partiton(int array[], int len, int sum)
{
	bool dp[len+1][sum/2 + 1]{false};
	for(int i = 1; i <= len; ++i)
	{
		for(int j = 1; j <= min(i, len/2); ++j)
		{
			for(int s = sum/2; s >=1; --s)
			{
				if(s>=A[i])
				dp[j][s] = dp[j][s-A[i]] || dp[j-1][s];
				else
				dp[j][s] = dp[j-1][s];
			}

		}

	}

}
