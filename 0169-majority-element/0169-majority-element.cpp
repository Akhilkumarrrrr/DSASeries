class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fq = 0, ans = 0;
        for(int i=0;i<nums.size();i++) {
            if(fq == 0) {
                ans = nums[i];
            }
            if(ans == nums[i]) {
                fq++;
            } else {
                fq--;
            }
        }
        return ans;

        
    }
};