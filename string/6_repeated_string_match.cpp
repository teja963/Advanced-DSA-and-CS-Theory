/*
Input: A = "abcd", B = "cdabcdab"
Output: 3
Explanation: After repeating A three times, 
we get "abcdabcdabcd".

Input: A = "aa", B = "a"
Output: 1
Explanation: B is already a substring of A.


A="orpjir"
B="jirorpjirorpjirorpjirorpjirorpjirorpjirorpjiror"

9

*/ 
 
 int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        int c=1;
        string s=A;
        while(A.find(B)==string::npos&&A.size()<=B.size()+s.size()){ A+=s; c++;}
        if(A.find(B)!=string::npos)return c;
        return -1;
        
        
//Time Complexity: O(A*B) for checking matchers or not
//Space : O(1)
