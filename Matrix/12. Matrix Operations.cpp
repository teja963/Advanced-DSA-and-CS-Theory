 pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        string direction = "right";
        int i = 0, j = 0;
        while(i < matrix.size() and j < matrix[0].size()){
                if(matrix[i][j] == 0){
                     if(direction == "right"){
                            j++;
                        }
                        else if(direction == "up"){
                            i--;
                        }
                        else if(direction == "down"){
                            i++;
                        }
                        else{
                            j--;
                        }
                }
                else{
                        matrix[i][j] = 0;
                        if(direction == "right"){
                            i++;
                            direction = "down";
                        }
                        else if(direction == "up"){
                            j++;
                            direction = "right";
                        }
                        else if(direction == "down"){
                            j--;
                            direction = "left";
                        }
                        else{
                            i--;
                            direction = "up";
                        }
                    }
                    if(i < 0){
                        i++;
                        break;
                    }else if(i >= matrix.size()){
                        i--;
                        break;
                    }else if(j < 0){
                        j++;
                        break;
                    }else if(j >= matrix[0].size()){
                        j--;
                        break;
                        
                    }
        }
        return {i ,j};
    }
