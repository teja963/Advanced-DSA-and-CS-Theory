  int getLastDigit(string a, string b) {
        // code here
        if(b=="0")return 1;
        unordered_map<int,vector<int>>mp;
       mp.insert({0,  {0,0,0,0}});
       mp.insert({1,  {1,1,1,1}});
       mp.insert({2,  {2,4,8,6}});
       mp.insert({3,  {3,9,7,1}});
       mp.insert({4,  {4,6,4,6}});
       mp.insert({5,  {5,5,5,5}});
       mp.insert({6,  {6,6,6,6}});
       mp.insert({7,  {7,9,3,1}});
       mp.insert({8,  {8,4,2,6}});
       mp.insert({9,  {9,1,9,1}});
        int base=a.back()-'0';
        int power=stoi(b.size()==1?b:b.substr(b.size()-2,b.size()))%4;
        return mp[base][(power==0)?3:power-1];
    }
};
