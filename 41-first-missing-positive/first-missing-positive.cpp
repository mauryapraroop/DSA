class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Create a frequency array
        vector<int> freq(n + 1, 0);

        // Mark all positive numbers within the range [1, n]
        for (int x : nums) {
            if (x > 0 && x <= n) {
                freq[x] = 1;
            }
        }

        // Find the first missing positive number
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                return i;
            }
        }

        // If all numbers from 1 to n exist, return n + 1
        return n + 1;
    }
};