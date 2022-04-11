//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//long long arr[1111111];
//long long sum[1111111];
//
//int main() {
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    arr[0] = 0, sum[0] = 0;
//
//    for (int i = 1; i <= n; i++) {
//        scanf("%lld", &arr[i]);
//        sum[i] = arr[i] + sum[i - 1];
//    }
//
//    long long l, r;
//    while (m--) {
//        scanf("%lld%lld", &l, &r);
//        printf("%lld\n", sum[r] - sum[l - 1]);
//    }
//
//
//    return 0;
//}
//
