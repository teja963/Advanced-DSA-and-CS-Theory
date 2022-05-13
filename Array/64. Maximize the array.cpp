class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
            // code here 4
            set<int>s;
            vector<int>ans;
            for(int i = 0; i < n; i++){
                s.insert(arr1[i]);
                s.insert(arr2[i]);
            }
            while(s.size() > n){
                s.erase(s.begin());
            }
            for(int i = 0; i < n; i++){
                if(s.find(arr2[i]) != s.end()){
                    ans.push_back(arr2[i]);
                    s.erase(arr2[i]);
                }
            }
            for(int i = 0; i < n; i++){
                if(s.find(arr1[i]) != s.end()){
                    ans.push_back(arr1[i]);
                    s.erase(arr1[i]);
                }
            }
            return ans;
    }
};
