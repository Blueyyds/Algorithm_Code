//#include<stdio.h>
//
//const int mod = 100003;
//int ans[1111111];
//int n, k;
//
//int main()
//{
//    while(scanf("%d %d", &n, &k) != EOF)
//    {
//        ans[0] = ans[1] = 1;
//        // TODO: 递推得到 ans[n]
//
//        for (int i = 2; i <= n ; ++i) {
//            for (int j = 1; j <= k && i >= j; ++j) {
//                ans[i] = (ans[i] + ans[i-j]) % 100003;
//            }
//        }
//        printf("%d\n", ans[n]);
//    }
//    return 0;
//}