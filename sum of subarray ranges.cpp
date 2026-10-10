class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {

            int s = nums[i];
            int l = nums[i];

            for (int j = i; j < n; j++) {

                s = min(s, nums[j]);
                l = max(l, nums[j]);

                sum += (l - s);
            }
        }

        return sum;
    }
};