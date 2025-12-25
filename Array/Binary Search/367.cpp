#include "common.h"

class Solution {
public:
    bool PerfectSquare(int num){
        int left = 0;
        int right = num;
        int mid = 0;
        while (left <= right)
        {
            mid = left + (right-left)/2;
            if((long long)mid*mid < num){
                left = mid + 1;
            }
            else if((long long)mid*mid > num)
            {
                right = mid -1;
            }
            else{
                return 1;
            }
        }
        return 0;
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    cout<<solution.PerfectSquare(1);
    return 0;
}
