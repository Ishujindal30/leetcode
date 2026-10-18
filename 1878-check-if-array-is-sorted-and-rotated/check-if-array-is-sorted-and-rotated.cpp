class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0;
        int n = nums.size();

    for(int j = 1 ; j<n ; j++){
        if(nums[j-1] > nums[j])
        i++;
    }
    if(nums[n-1] > nums[0])
    i++;

    return i<=1 ;
    }
};