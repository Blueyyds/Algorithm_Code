//#include<cstdio>
//#include<cstring>
//#include<cstdlib>
//#include<algorithm>
//
//using namespace std;
//const int mod = 1e9 + 7;
//
//struct Node {
//    long long mat[2][2];
//
//    Node() {}
//
//    Node(long long a_, long long b_, long long c_, long long d_) {
//        mat[0][0] = a_;
//        mat[0][1] = b_;
//        mat[1][0] = c_;
//        mat[1][1] = d_;
//    }
//
//    Node operator*(const Node &y) {
//        // TODO: 矩阵乘法，注意取模
//        long long a = (((this->mat[0][0] % mod) * (y.mat[0][0] % mod)) % mod +
//                ((this->mat[0][1] % mod) * (y.mat[1][0] % mod)) % mod) % mod;
//        long long b = (((this->mat[0][0] % mod) * (y.mat[0][1] % mod)) % mod +
//                ((this->mat[0][1] % mod) * (y.mat[1][1] % mod)) % mod) % mod;
//        long long c = (((this->mat[1][0] % mod) * (y.mat[0][0] % mod)) % mod +
//                ((this->mat[1][1] % mod) * (y.mat[1][0] % mod)) % mod) % mod;
//        long long d = (((this->mat[1][0] % mod) * (y.mat[0][1] % mod)) % mod +
//                ((this->mat[1][1] % mod) * (y.mat[1][1] % mod)) % mod) % mod;
//
//        return {a, b, c, d};
//    }
//};
//
//Node Pow(Node a, int n) {
//    // TODO: 矩阵的快速幂
//    if (n == 1)
//        return a;
//    Node tmp = Pow(a, n / 2);
//    if (n % 2 == 0) {
//        return tmp * tmp;
//    } else {
//        return tmp * tmp * a;
//    }
//}
//
//int main() {
//    long long n;
//    while (scanf("%d", &n) != EOF) {
//        // TODO: 初始化用于推导斐波那契数列的矩阵
//        Node ans = Pow({1, 1, 1, 0}, n);
//        // TODO: 输出矩阵中对应的斐波那契第n项
//        printf("%d\n", ans.mat[0][1]);
//    }
//    return 0;
//}