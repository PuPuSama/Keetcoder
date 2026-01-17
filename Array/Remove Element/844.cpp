#include "common.h"

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int slow = -1,fast = 0;
        int lens = s.size();
        int lent = t.size();
        for (; fast < lens; fast++)
        {
            if (s[fast] != '#')
            {
                s[++slow] = s[fast];
            }
            else
            {
                if (slow > -1)
                {
                    slow--;
                }
            }
        }
        int newlens = slow + 1;
        slow = -1;
        fast = 0;
        for (; fast < lent; fast++)
        {
            if (t[fast] != '#')
            {
                t[++slow] = t[fast];
            }
            else
            {
                if (slow > -1)
                {
                    slow--;
                }
            }
        }
        int newlent = slow + 1;
        if (s.compare(0,newlens,t,0,newlent) == 0)
        {
            return 1;
        }
        return 0;
    }
};

// 测试代码（可选）
int main() {
    Solution solution;
    string s = "a#b#a";
    string t = "a";
    int a = solution.backspaceCompare(s,t);
    cout << a;
    return 0;
}
