class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        for (int i = 1; i < nums.size(); i++){
           if(nums[i] == nums[i-1]){
            return true;
           }
        }*/
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};