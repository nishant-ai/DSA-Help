class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int a_pointer = 0;
    int b_pointer = numbers.size() -1;
   
    while(a_pointer < b_pointer){
        if(numbers[a_pointer] + numbers[b_pointer] == target){
           
            return {a_pointer+1,b_pointer+1};
        }
        else if(numbers[a_pointer] + numbers[b_pointer] > target){
            b_pointer--;
        }
        else{
            a_pointer++;
        }
    }
	return {};   
    }
};