/*
* Problem Statement: Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
    - Integers in each row are sorted from left to right.
    - The first integer of each row is greater than the last integer of the previous row.
  
  Solution Approach:
    Since each row is sorted, we could find the target value in between 0th and (N-1)th index. This will give us the row we need to search in.
    Then, if found any such row, we need to find whether the target is actually present or not in that particular row.
    
    Simple 2 step process. Let's try to code it.
*/

Code:

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int r = matrix.length;
        int c = matrix[0].length;
        boolean isTargetPresent = false;
        int targetPresentInRow = -1;    //initialising with -1 as no row index would be -1. This would help in identifying whether we found any row or not after step 1.
        //to find row - Step 1
        for(int i =0;i<r;i++){
            if(target>=matrix[i][0] && target<=matrix[i][matrix[i].length-1]){
                targetPresentInRow = i;
            }
        }
        
        //find target in row - Step 2
        if(targetPresentInRow != -1){
            for(int j = 0; j<matrix[targetPresentInRow].length;j++){
                if(matrix[targetPresentInRow][j] == target)
                    isTargetPresent = true;
            }
        }
        return isTargetPresent;
    }
}
  
 

