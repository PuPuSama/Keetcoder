#include "common.h"

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
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
        return right + 1;
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    vector<int> arr = {1,3,5,6};
    int result = solution.searchInsert(arr,4);
    cout<< result<<endl;
    return 0;
}
