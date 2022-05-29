    bool ispali(string tmp){
        int i = 0, j = tmp.size()-1;
        while(i <= j){
            if(tmp[i] != tmp[j])return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
    int minChar(string str){
        //Write your code here
        int count = 0;
        for(int i = 0; i < str.size(); i++){
            string tmp = str.substr(0, i+1);
            if(ispali(tmp)){
                count = max(count, i+1);
            }
        }
        return str.size() - count;
    }
};
