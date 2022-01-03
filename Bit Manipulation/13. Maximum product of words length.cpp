class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        long long ans  = 0;
        vector<long long>bitmap;
        for(auto x:words)
        {
            long long val  = 0;
            for(auto y:x)
            {
                val |= 1<<(y-'a');       //storing binary representation
                                         //  2^7 + 2^5 + 2^0
            }
            bitmap.push_back(val);
        }

        for(int i = 0; i < words.size(); i++)
        {
            for(int j = i+1; j < words.size(); j++)
            {
                
                if((bitmap[i] & bitmap[j]) == 0) //if common bits are present then it won't be zero
                {
                    long long tmp = words[i].size() * words[j].size();
                    ans = max<long long>(ans,tmp);
                }
            }
        }
        return ans;
    }
};
