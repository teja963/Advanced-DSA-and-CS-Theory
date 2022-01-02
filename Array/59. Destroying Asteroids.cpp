class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long tmp = mass;
        for(auto x: asteroids)
        {
            if(tmp >= x)tmp += x;
            else return false;
        }
        return true;
    }
};
