class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        bool isJewels[128] = {false};

        // Mark all jewels as true
        for (char ch : jewels) {
            isJewels[ch] = true;
        }

        // Count stones that are jewels
        int count = 0;

        for (char ch : stones) {
            if (isJewels[ch]) {
                count++;
            }
        }

        return count;
    }
};