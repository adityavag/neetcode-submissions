class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        // 1.frequency
        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        
        // 2.storing each item with it's frequency as a pair in arr;
        vector<pair<int, int>> arr;
        for(auto p : freq)
            arr.push_back({p.first, p.second});

        // 3.sorting arr
        sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        // 4.selecting top k entries 
        vector<int> ans;
        for(int i = 0; i < k; i++)
            ans.push_back(arr[i].first);
            
    return ans;
    }
};
