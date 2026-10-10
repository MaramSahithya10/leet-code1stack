class Solution 
{
    public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        int left=0;
        int sum=0;
        int min_Length=INT_MAX;
        for(int right=0;right<n;right++)
        {
            sum=sum+nums[right];
            while(sum>=target)
            {
                min_Length=min(min_Length,right-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        return min_Length==INT_MAX?0:min_Length;
    }
};