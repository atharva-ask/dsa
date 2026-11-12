class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1, prev = -1e9, cnt = 0;

        for(auto num : nums ) {
            if(num > prev) {
               cnt++;
            }else {
                cnt = 1;
            }
            ans = max(ans, cnt);
            prev = num;
        }


        reverse(nums.begin(), nums.end());
        cnt = 0; 
        prev = -1e9;
        for(auto num : nums ) {
            if(num > prev) {
               cnt++;
            }else {
                cnt = 1;
            }
            ans = max(ans, cnt);
            prev = num;
        }

        return ans;
    }
};