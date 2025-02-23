#include <iostream>
#include <vector>
using namespace std;
long long count_combinations(int t, const vector<int>& species) {
    vector<long long> dp(t + 1, 0);
    dp[0] = 1;
    for (int limb : species) {
        for (int i = limb; i <= t; ++i) {
            dp[i] += dp[i - limb];
        }
    }
    return dp[t];
}
int main() {
    int h;
    printf("Please give input values\n");    
    cin >> h;
    for (int i = 0; i < h; ++i) {
        int t, s;
        cin >> t >> s;
        vector<int> species(s);
        for (int j = 0; j < s; ++j) {
            cin >> species[j];
        }
        cout << count_combinations(t, species) << endl;
    }
    return 0;
}
