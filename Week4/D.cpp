//#include <iostream>
//#include<cstdio>
//#include<cstring>
//
//using namespace std;
//
//int dp[220][11];
//
//int main() {
//    int n, k;
//    memset(dp, 0, sizeof(dp));
//    dp[0][0] = 1;
//    while (scanf("%d%d", &n, &k) != EOF) {
//        // TODO: µÝÍÆ£¬dp[n][k] Îª´ð°¸
//        for (int i = 1; i <= n; ++i) {
//            for (int j = 1; j <= k && i >= j; ++j) {
//                dp[i][j] = dp[i-j][j] + dp[i-1][j-1];
//            }
//        }
//        cout << dp[n][k] << endl;
//
//    }
//    return 0;
//}
