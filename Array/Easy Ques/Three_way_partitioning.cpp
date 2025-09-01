class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here
        int n=array.size();
       int start = 0, end = n-1; 
		// Traverse elements from left 
		for (int i=0; i<=end;) 
		{ 
		    // If current element is smaller than 
		    // range, put it on next available smaller 
		    // position. 
		    if (array[i] < a) 
		        swap(array[i++], array[start++]); 
	  
		    // If current element is greater than 
		    // range, put it on next available greater 
		    // position. 
		    else if (array[i] > b) 
		        swap(array[i], array[end--]); 
	  
		    else
		        i++; 
		}
	}
};

