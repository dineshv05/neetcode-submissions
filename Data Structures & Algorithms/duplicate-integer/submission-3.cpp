class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> duplicate;
        for(int i = 0; i< nums.size(); i++){
            if(duplicate.count(nums[i]) > 0){
                return true;
            }
            duplicate[nums[i]]++;
        }
        return false;
    }
};