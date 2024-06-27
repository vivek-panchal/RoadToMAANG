class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        int count=0;
        int total=row*col;
        
        vector<int> ans;
        
        int startingRow=0;
        int endingRow= row-1;
        int startingCol=0;
        int endingCol=col-1;
        
        while(count<total){
            
            // print starting row
            for(int i=startingCol;i<=endingCol  && count<total;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            // print ending col
            for(int i=startingRow;i<=endingRow  && count<total;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            //Print ending Row
            for(int i=endingCol;i>=startingCol  && count<total;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            //Print starting col
            for(int i=endingRow;i>=startingRow  && count<total;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        return ans;
        
    }
};
