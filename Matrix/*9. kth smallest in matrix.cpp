//Time Complexity : O( N* log(N) * log(N))
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int min_element=matrix[0][0];
        int max_element=matrix[n-1][n-1];
        /*when we arrange all elements in order 
        
         min     mid           max
          1 5 9 10 11 12 13 13 15
          */
        while(min_element<=max_element)
        {
            int mid=(min_element+max_element)/2;
             int count=0;
            for(int i=0;i<n;i++)
                count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            if(count<k)min_element=mid+1;
            else max_element=mid-1;
        }
        return min_element;
    }
};


