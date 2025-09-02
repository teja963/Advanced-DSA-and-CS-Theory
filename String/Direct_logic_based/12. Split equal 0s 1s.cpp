// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Split the binary string into substrings with equal num of 0s and 1s
int maxSubStr(string str, int n)
{
	    int count_one = 0, count_zero = 0, ans = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '0')count_zero++;
            else count_one++;
            if(count_one == count_zero){
                ans++;
            }
        }
        return count_zero == count_one? ans: -1;
}

// Driver code
int main()
{
	string str = "0100110101";
	int n = str.length();

	cout << maxSubStr(str, n);

	return 0;
}
