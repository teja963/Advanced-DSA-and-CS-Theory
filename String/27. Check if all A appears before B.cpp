//Method 1
class Solution {
public:
    bool checkString(string s) {
        
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i-1] == 'b' && s[i] == 'a')return false;
        }
        return true;
      
    }
};

//Method 2
class Solution {
public:
    bool checkString(string s) {
        return !(s.find("ba")!=string::npos);
    }
};

//Method 3
class Solution {
public:
    bool checkString(string s) {
        return is_sorted(s.begin(),s.end());
    }
};


//Method 4
class Solution {
public:
    bool checkString(string s) {
        int count1 = 0, count2 = 0, tmp = 0, j = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a')count1++;
            else if(s[i] == 'b')count2++;
            if(count2 ==1 && j)
            {
                tmp = count1;
                j = 0;
            }
        }
        return tmp == 0 and count2 == 0?true: tmp == count1;
    }
};
