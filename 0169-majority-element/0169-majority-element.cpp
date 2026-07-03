class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int val : nums) {
            int fq = 0;
            for(int el : nums) {
                if(val == el) {
                    fq++;
                }
            }
            if(fq>n/2) {
                return val;
            }
        }
        return -1;
        
    }
};