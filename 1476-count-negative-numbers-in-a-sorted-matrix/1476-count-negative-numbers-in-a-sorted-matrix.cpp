class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count=0;
        
        int rowIndex = 0; 
        int colIndex = col-1;

        while(rowIndex<row && colIndex>=0){
            if(grid[rowIndex][colIndex]<0){
                count+=row-rowIndex;
                colIndex--;
            }
            else{
                rowIndex++;
            }

            
        }
        return count;
        
    }
};