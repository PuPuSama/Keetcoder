#include "common.h"
#include <limits.h>

class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        int mid = 0;
        int ans = -1;
        while (left <= right)
        {
            mid = left + (right-left)/2;
            if((long long)mid*mid <= x){
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid -1;
            }
        }
        return ans;
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    
    cout << solution.mySqrt(8)<<endl;
    
    return 0;
}
