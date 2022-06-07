class Solution {
public:
    bool isRobotBounded(string instructions) {
        int i = 0, j = 0;
        int dir = 1;
            for(auto x: instructions){
                if(x == 'L'){
                    if(dir == 1){
                        dir = 5;
                    }
                    dir--;
                }
                else if(x == 'R'){
                    if(dir == 4){
                        dir = 0;
                    }
                    dir++;
                }
                else{
                    if(dir == 1)j += 1;
                    else if(dir == 4)i -= 1;
                    else if(dir == 3)j -= 1;
                    else if(dir == 2)i += 1;
                }
            }
        if(dir != 1 || (i == 0 and j == 0))return true;
        return false;
    }
};
