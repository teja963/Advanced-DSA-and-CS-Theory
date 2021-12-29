class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0,j = 0;
        while(i < version1.size()&&j < version2.size())
        {
            int num1,num2;
            string s1,s2;
            while(i < version1.size()&&version1[i] != '.')s1 += version1[i++];
            num1 = stoi(s1);
            while(j < version2.size()&&version2[j] != '.')s2 += version2[j++];
            num2 = stoi(s2);
            if(num1 == num2){i++; j++;}
            else if(num1 < num2)return -1;
            else return 1;
        }
        
        while(i < version1.size())
        { 
            string s1;
            while(i < version1.size()&&version1[i] != '.')s1 += version1[i++];
            int num1 = stoi(s1);
            if(num1 == 0)i++;
            else if(num1 < 0)return -1;
            else return 1;
        }
         while(j < version2.size())
        {
             string s1;
             while(j < version2.size()&&version2[j] != '.')s1 += version2[j++];
            int num2 = stoi(s1);
            if(num2 == 0)j++;
            else if(0 < num2)return -1;
            else return 1;
        }
        
        return 0;
    }
};
