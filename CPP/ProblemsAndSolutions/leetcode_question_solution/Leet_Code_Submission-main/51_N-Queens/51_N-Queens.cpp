class Solution {
public:
    //to check if the position is safe for the queen
    bool isaSafePlace(vector<string> &chess, int row, int col) {
        if(row<0 || col < 0 || row >= chess.size() || col >= chess.size()) return false;
        for(int i=row-1, j=col; i>=0;i--) {
            if(chess[i][j] == 'Q') return false;
        }
        
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--) {
            if(chess[i][j] == 'Q') return false;
        }
        
        for(int i=row-1, j=col+1; i>=0 && j<chess.size(); i--,j++) {
            if(chess[i][j] == 'Q') return false;
        }
        return true;
    }
    
    void placeQueens(vector<vector<string>> &res, vector<string> chess, int row) {
        if(row == chess.size()) {
            res.push_back(chess);
            return;
        }
        for(int col = 0;col < chess.size();col++) {
            if(isaSafePlace(chess, row,col)) {
                chess[row][col] = 'Q';
                placeQueens(res, chess, row+1);
                chess[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> chess(n, string(n,'.'));
        placeQueens(res, chess,0);
        return res;
    }
    
};