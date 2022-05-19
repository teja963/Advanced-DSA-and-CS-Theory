    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.size() != B.size())return -1;
        int sum = 0;
        for(int i = 0; i < A.size(); i++){
            sum += A[i] - B[i];
        }
        if(sum != 0)return -1;
        int i = A.size()-1, j = B.size()-1, count = 0;
        while(i >= 0 and j >= 0){
            if(A[i] == B[j]){
                i--;
                j--;
            }
            else{
                count++;
                i--;
            }
        }
        return count;
    }
};
