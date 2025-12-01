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

/*
INTERVIEW TEST CASES - Different n values covering edge cases:

Test Case 1: (Small even length)
Input: "01", n=2
Output: 1
Explanation: Single substring "01" has equal 0s and 1s

Test Case 2: (Large even length - alternating pattern)
Input: "0101010101010101", n=16
Output: 8
Explanation: Can split into 8 substrings of "01" each

Test Case 3: (Odd length - impossible case)
Input: "010", n=3
Output: -1
Explanation: Total 0s=2, 1s=1 - unequal counts, cannot split

Test Case 4: (Large even length - grouped pattern)
Input: "0000000011111111", n=16
Output: 1
Explanation: Only one substring "0000000011111111" has equal 0s and 1s
*/
