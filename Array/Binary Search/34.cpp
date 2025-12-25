#include "common.h"

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = size(nums)-1;
        int mid = 0;
        vector<int> result={-1,-1};
        if (nums.empty()) {
            return result;
        }
        if (nums[left]>target||nums[right]<target)
        {
            return result;
        }
        while (left <= right)
        {
            mid = (left + right) / 2;
            if(nums[mid] <= target){
                left = mid + 1;
                result[1]=left-1;
            }
            else{
                right = mid -1;
            }
        }
        left = 0;
        right = size(nums)-1;
        mid = 0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if(nums[mid] >= target){
                right = mid - 1;
                result[0] = right + 1;
            }
            else{
                left = mid + 1;
            }
        }
        if (result[0]>result[1])
        {
            result = {-1,-1};
            return result;
        }
        return result;
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    
    vector<int> nums= {5,7,7,8,8,10};
    vector<int> result = solution.searchRange(nums,6);
    cout << result[0]<<result[1];

    
    return 0;
}
