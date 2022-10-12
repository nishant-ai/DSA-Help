class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        char res;
        int start=0,end= letters.length-1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(target<letters[mid]){
                end = mid-1;
            }
            else if(target>letters[mid]){
                start = mid+1;
            }
        }
        if(letters[letters.length-1]<target){
            res = letters[0];
        }else{
            res = letters[start];
        }
        
        return res;
    }
}