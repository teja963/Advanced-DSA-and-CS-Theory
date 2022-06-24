class Solution{
public:
    char profession(int level, int pos){
        // code here
        bool flip = false;
        while(pos != 1){
            if(pos % 2 == 0)flip = !flip;
            pos = (pos+1)/2;
        }
        return flip? 'd': 'e';
    }
};
