class Solution {
public:

    
    void rotate(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();
        int colEnd = matrix.size()-1;

        //Transpose maatrix
        for(int i =0; i< row; i++){
		    for(int j =i+1; j<col; j++){
			    swap(matrix[i][j], matrix[j][i]);
		    }
	    }

        //Mirror image
        for(int colIndex = 0; colIndex<col/2; colIndex++){
		    for(int rowIndex =0; rowIndex<row; rowIndex++){
			    swap(matrix[rowIndex][colIndex], matrix[rowIndex][colEnd]);
		    }
		
		colEnd--;
	    }        
    }
};