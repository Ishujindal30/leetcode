class Solution {
public:
    int mySqrt(int x) {
        long long s = 0;
        long long e = x;
        int ans = 0;
        while (s <= e) {
            long long mid = s + (e - s) / 2;
            long long sq = mid * mid;
            if (sq > x) {
                e = mid - 1;
            } else if (sq < x) {
                ans = mid;
                s = mid + 1;
            } else {
                return mid;
            }
        }
        return ans;
    }
};