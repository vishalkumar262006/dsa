class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        //brute
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(numbers[i]+numbers[j]==target){
        //             return{i+1,j+1};
        //         }
        //     }
        // }
        // return {};
        int i=0;
        int j=n-1;
        while(i<j){
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                return{i+1,j+1};
            }
        }
        return {};

    }
};