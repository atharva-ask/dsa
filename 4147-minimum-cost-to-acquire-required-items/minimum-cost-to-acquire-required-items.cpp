class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long seperateBuy = 1LL * cost1 * need1 + 1LL * cost2 * need2;

        long long bothBuy = 1LL * max(need1, need2) * costBoth;

        long long firstBuy = 1LL * need1 * costBoth;
        if (need2 > need1) {
            firstBuy += 1LL * (need2 - need1) * cost2;
        }

        long long secondBuy = 1LL * need2 * costBoth;
        if (need1 > need2) {
            secondBuy += 1LL * (need1 - need2) * cost1;
        }

        return min({seperateBuy, bothBuy, firstBuy, secondBuy});
    }
};