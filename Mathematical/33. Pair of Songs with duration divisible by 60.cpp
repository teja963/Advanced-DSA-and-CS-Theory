class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>v(61,0);
        int ans  = 0;
        for(int i = 0; i < time.size(); i++)
        {
            int rem = time[i] % 60; //rem always lies between 0 to 59
            if(rem == 0)
                ans += v[0];        //if time[i] is multiple of 60 then its compliment is 0
            else
                ans += v[60-rem];   //else its compliment is 60 -rem
            
            v[rem]++;
        }
        return ans;
    }
};
