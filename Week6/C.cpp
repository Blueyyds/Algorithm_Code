//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <valarray>
//
//using namespace std;
//
//const int maxn = 5e7 + 7;
//const int mod = 1e9 + 7;
//
//
//long long func(long long a, long long b) {
//    if (b == 1)
//        return a;
//    if (b == 0)
//        return 1;
//    long long t = func(a, b / 2);
//    if (b % 2 == 0) {
//        return ((t % mod) * (t % mod)) % mod;
//    } else if (b % 2 == 1) {
//        return ((t % mod) * (t % mod) * (a % mod)) % mod;
//    }
//}
//
//
//int main() {
//    int n, m, k;
//    while (scanf("%d %d %d", &n, &m, &k) != EOF) {
//        vector<long long>v(maxn);
//        if (pow(m, n) < mod) {
//            cout << pow(m, k) << endl;
//            continue;
//        }
//        for (int i = 1; i <= n; ++i) {
//            v[i] = func(m, i);
//        }
//        sort(v.begin()+1, v.end());
//        cout << v[k] << endl;
//    }
//
//    return 0;
//}
