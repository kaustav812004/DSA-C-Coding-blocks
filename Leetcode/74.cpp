bool binsearch(vector<vector<int>>& mat, int key){
    int n = mat.size();
    int m = mat.size();
    int row = 0, col = m-1;
    while(row < n && col >= 0){
        if(mat[row][col] == key) return true;
        else if(mat[row][col] > key) col--;
        else row++;
    }
    return false;
}