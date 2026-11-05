class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi=nums[i];
        }
       }
       int total=0;
       for(int i=0;i<nums.size();i++){
        total+=(maxi-nums[i]);
       }
       return total;
        
    }
};