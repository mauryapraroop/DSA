class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceSum = 0, bobSum = 0;

        for (int candy : aliceSizes) {
            aliceSum += candy;
        }

        unordered_set<int> bobSet;
        for (int candy : bobSizes) {
            bobSum += candy;
            bobSet.insert(candy);
        }

        int diff = (aliceSum - bobSum) / 2;

        for (int aliceCandy : aliceSizes) {
            int bobCandy = aliceCandy - diff;

            if (bobSet.count(bobCandy)) {
                return {aliceCandy, bobCandy};
            }
        }

        return {};
    }
};