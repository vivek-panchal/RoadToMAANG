class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);

            }
        }

        int x=0;
        int y=n-1;
        
        while(x<=y){
            for(int i=0;i<n;i++){
                swap(matrix[i][x],matrix[i][y]);
            }
            x++;
            y--;
        }
        
    }
};
