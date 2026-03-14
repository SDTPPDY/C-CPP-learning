#include<iostream>
#include<string>
#include <vector>
using namespace std;

class Solution {
public:
    int minCount(vector<int>& coins) {

        int cnt = 0;

        for (int i = 0; i < coins.size(); ++i) {
            if (coins[i] % 2) {
                ++cnt;
                coins[i] -= 1;
            }

            cnt += coins[i] / 2;
        }

        return cnt;
    }
};

int main() {
    Solution fun;

    vector<int> coins = { 4, 2, 1 };
    cout << fun.minCount(coins) << endl;

	return 0;
}