class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> result;
        for(int i=0; i< nums.size(); i++){
            int a = nums[i];
            int required = target - a;
            if(result.find(required) != result.end()){
                return {result[required], i};
            }
            result[a] = i;
        }
        return {};
    }
};
