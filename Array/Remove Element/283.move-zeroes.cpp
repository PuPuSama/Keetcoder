#include "common.h"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lennums = nums.size();
        int left = 0;
        int right =0;
        for(;right < lennums;right++){
            if (nums[right] != 0)
            {
                nums[left++] = nums[right];
            }
        }
        for (int i = left; i < lennums; i++)
        {
            nums[i]=0;
        }
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    vector<int> nums = {0,1,0,2,2,3};
    solution.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" "<<endl;
    }
    return 0;
}
