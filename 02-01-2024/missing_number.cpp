class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int i=0,j;
        while(i<nums.size())
        {
        for(j=0;j<nums.size();j++)
        {
            if(i==nums[j])
            {
                i++;
                break;
            }
        }
        if(j==nums.size()&&nums[j-1]!=i)
            {
                return i;
                break;
            }
        }
        return i;
    }
};