class Solution {
public:
    void solve (vector<vector<int>>& image, int sr, int sc, int &color, int &source, int &row, int &col){
        if(sr<0 || sr>=row || sc<0 || sc>=col || image[sr][sc]!=source){
            return;
        }
        image[sr][sc]=color;

        solve(image,sr-1,sc,color,source,row,col); //Top
        solve(image,sr+1,sc,color,source,row,col); //Down
        solve(image,sr,sc-1,color,source,row,col); //Left
        solve(image,sr,sc+1,color,source,row,col); //Right
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }

        int row=image.size();
        int col=image[0].size();
        int source=image[sr][sc];

        solve(image,sr,sc,color,source,row,col);

        return image;
    }
};
