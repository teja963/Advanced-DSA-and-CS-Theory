/*
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}}
Output: 0
Explanation: 62 is not present in the matrix,  so output is 0.

n = 1, m = 6, x = 55
matrix[][] = {{18, 21, 27, 38, 55, 67}}
Output: 1
Explanation: 55 is present in the matrix.
*/


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here
        int i,j;
        for(i=0;i<n;i++){
            if(matrix[i][m-1]>=x){
                for(j=m-1;j>=0;j--)if(matrix[i][j]==x)return true;
            }
        }
        return false;
    }
