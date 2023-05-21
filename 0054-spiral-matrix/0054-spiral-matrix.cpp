class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        int sRow = 0;
        int sCol = 0;
        int eRow = row-1;
        int eCol = col-1;

        int count = 0;
        int total = row*col;

        vector<int> res;

        while(count <total){

            //starting row
            for(int index = sCol ; count<total && index<=eCol; index++){
                res.push_back(matrix[sRow][index]);
                count++;
            }
            sRow++;

            //end column
             for(int index = sRow ; count<total && index<=eRow; index++){
                res.push_back(matrix[index][eCol]);
                count++;
            }
            eCol--;

            //end row
             for(int index = eCol ; count<total && index>=sCol; index--){
                res.push_back(matrix[eRow][index]);
                count++;
            }
            eRow--;

            //starting col
             for(int index = eRow ; count<total && index>=sRow; index--){
                res.push_back(matrix[index][sCol]);
                count++;
            }

            sCol++;


            
        }

        return res;
        
    }
};