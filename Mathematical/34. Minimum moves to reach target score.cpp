class Solution {
public:
    int minMoves(int target, int maxDoubles) {
     int moves = 0;
        while(target != 1)
        {
            if(maxDoubles == 0)break;
            if(target % 2 == 0 and maxDoubles)
            {
                target /= 2;
                maxDoubles--;
            }
            else target--;
            moves++;
        }
        return target - 1 + moves;
    }
};
