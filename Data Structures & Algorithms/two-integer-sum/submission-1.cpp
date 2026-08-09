class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //solutio 1
        //vector<int> ind(2,0);
        /*for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};*/
        //solution 2
        /*vector<pair<int,int>> cpy;
        for(int i = 0; i < nums.size(); i++){
            cpy.push_back({nums[i], i});
        } 
        sort(cpy.begin(),cpy.end());

        int i = 0,j = nums.size()-1;

        while(i < j) {
            int cur = cpy[i].first + cpy[j].first;

            if(cur == target) {
                return {min(cpy[i].second, cpy[j].second),
                max(cpy[i].second, cpy[j].second)};
            } else if (cur < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};*/
        //solution 3
        unordered_map<int, int> indices;
        
        for (int i = 0; i < nums.size(); i++){
            indices[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (indices.count(diff) && indices[diff] != i) {
                return {i , indices[diff]};
            }
        }
        return {};
    }
};
