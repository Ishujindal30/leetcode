class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        int n = nums.size();
        vector<int> temp(n);
        for(i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                temp[(j+i)%n] = nums[j];
            }
            if(is_sorted(temp.begin(),temp.end())){
                return true;
            }
        }
        return false;
    }
};