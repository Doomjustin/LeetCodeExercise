/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */
#include <vector>
#include <algorithm>


// @lc code=start
class Solution {
public:
    int findContentChildren(std::vector<int>& children, std::vector<int>& cookies)
    {
        std::sort(children.begin(), children.end());
        std::sort(cookies.begin(), cookies.end());

        int child = 0;
        int cookie = 0;

        while (child < children.size() && cookie < cookies.size()) {
            if (children[child] <= cookies[cookie])
                ++child;
            ++cookie;
        }

        return child;
    }
};
// @lc code=end
