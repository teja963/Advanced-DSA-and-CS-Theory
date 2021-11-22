class Solution {
public:
    vector<string>ans;
    string tmp;
    unordered_map<int,string>m;
      vector<int>numbers;
    void findcombi(int start,int n)
    {
        if(start==n)
        {
            ans.push_back(tmp);
            return;
        }
        for(auto x:m[numbers[start]])
        {
            tmp.push_back(x);
            findcombi(start+1,n);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        if(digits.size()==0)return ans;
        int d=stoi(digits);
        while(d>0)
        {
            numbers.push_back(d%10);
            d/=10;
        }
        reverse(numbers.begin(),numbers.end());
        findcombi(0,n);
        return ans;
    }
};
