class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>values(nums);
        sort(values.begin(),values.end());
        int n=nums.size();
        int i=0,j=nums.size()-1;

        while( i < n && nums[i] == values[i]){
            i++;
        }    
        if(i==n) return 0;

        while(j < n && nums[j] == values[j]){
            j--;
        }    

        return j-i+1;
    }
};