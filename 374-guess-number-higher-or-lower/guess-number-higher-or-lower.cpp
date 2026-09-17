class Solution {
public:
    int guessNumber(int n) {
        long long low = 1;
        long long high = n;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            int result = guess(mid);

            if (result == 0) {
                return mid;
            }
            else if (result == -1) {
                // Our guess is higher than the picked number
                high = mid - 1;
            }
            else {
                // Our guess is lower than the picked number
                low = mid + 1;
            }
        }

        return -1;
    }
};