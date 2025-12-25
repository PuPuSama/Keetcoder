#include "common.h"

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast = 0;
        int slow = 0;
        int temp = 0;
        int lennums = nums.size();
        while(fast < lennums){
            if(nums[fast] != val){
                nums[slow]=nums[fast];
                slow++;
                fast++;
            }
            else{
                fast++;
            }
        }
        return nums.size()-(fast - slow);
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    
    vector<int> nums = {3,2,2,3};
    cout<<solution.removeElement(nums,3);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" "<<endl;
    }
    
    return 0;
}
