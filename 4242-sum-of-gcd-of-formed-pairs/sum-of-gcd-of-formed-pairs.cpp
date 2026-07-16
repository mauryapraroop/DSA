class Solution {
public:
    long long gcd(long long a, long long b) {

        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    long long gcdSum(vector<int>& nums) {

        int n = nums.size();

        vector<long long> prefixGcd;

        long long mx = 0;

        // Construct prefixGcd
        for (int i = 0; i < n; i++) {

            mx = max(mx, (long long)nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));
        }

        // Sort
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;

        int left = 0;
        int right = n - 1;

        // Pair smallest with largest
        while (left < right) {

            ans += gcd(prefixGcd[left], prefixGcd[right]);

            left++;
            right--;
        }

        return ans;
    }
};