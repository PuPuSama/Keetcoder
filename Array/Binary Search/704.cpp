#include "common.h"

class Solution {
public:
    int search(vector<int>& nums, int target){
        int left = 0;
        int right = size(nums)-1;
        int mid = 0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if(nums[mid] < target){
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else{
                return mid;
            }
            
        }
        return -1;
        
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    
    // 方法1：直接创建vector（推荐）
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int result = solution.search(nums, 2);
    cout << "结果: " << result << endl;
    return 0;
}
