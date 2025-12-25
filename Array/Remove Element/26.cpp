#include "common.h"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fast = 1;
        int slow = 0;
        int temp = 0;
        int lennums = nums.size();
        for (; fast < lennums; fast++)      
        {
            if (nums[fast]!=nums[slow])
            {
                nums[++slow] = nums[fast];
            }
        }
        return slow + 1;
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    
    vector<int> nums = {1,2,2,2,3,4,5};
    int result = solution.removeDuplicates(nums);
    cout<<result<<endl;
    for (int i = 0; i < result; i++)
    {
        cout<< nums[i]<<" ";
    }
    return 0;
}
