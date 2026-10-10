class Solution 
{
    public:
    int trap(vector<int>& height) 
    {
        int left=0;
        int right=height.size()-1;// this for right side is there is no water eg:1-1=0 no water present
        int leftMax=height[left];
        int rightMax=height[right];
        int water=0;
        while(left<right)
        {
            if(leftMax<rightMax)
            {
                left++;
                leftMax=max(leftMax,height[left]);
                water=water+leftMax-height[left];
            }
            else
            {
                right--;
                rightMax=max(rightMax,height[right]);
                water=water+rightMax-height[right];
            }
        }
        return water;
    }
};