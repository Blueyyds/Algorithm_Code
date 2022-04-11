//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//
//long long n, p;
//
//long long func(long long a, long long b) {
//    if (b == 1)
//        return a;
//    if (b == 0)
//        return 1;
//    long long t = func(a, b / 2);
//    if (b % 2 == 0) {
//        return ((t % p) * (t % p)) % p;
//    } else if (b % 2 == 1) {
//        return ((t % p) * (t % p) * (a % p)) % p;
//    }
//}
//
//int main() {
//    scanf("%ld", &n);
//    while (n--) {
//        long long a, b;
////        scanf("\n%ld %ld %ld", &a, &b, &p);
//        cin >> a >> b >> p;
//        printf("%ld\n", func(a, b));
//    }
//
//    return 0;
//}
