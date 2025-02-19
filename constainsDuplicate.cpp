class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> hashset;
            
            for(int n : nums) {
                if(hashset.find(n) != hashset.end()) {
                    return true;
                }
                hashset.insert(n);
            }
            return false;
        }
    };