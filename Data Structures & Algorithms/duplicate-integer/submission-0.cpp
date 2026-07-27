class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for(int x : nums) {
            if(dup.count(x))
                return true;
            dup.insert(x);
        }
        return false;
    }
};