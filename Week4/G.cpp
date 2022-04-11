//#include <iostream>
//#include <vector>
//#include <cstdio>
//
//using namespace std;
//
//int Bi_Search(const vector<int> &v, int val) {
//    int l = 0;
//    int r = v.size() - 1;
//    int mid;
//    while (l <= r) {
//        mid = l + ((r - l) >> 2);
//        if (val < v[mid]) {
//            r = mid - 1;
//        } else if (val > v[mid]) {
//            l = mid + 1;
//        } else {
//            while (v[--mid] == val);
//            return mid + 1;
//        }
//    }
//    return l;
//}
//
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> v(n);
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &v[i]);
//    }
//
//    while (m--) {
//        int val;
//        scanf("%d", &val);
//        int pos = Bi_Search(v, val) + 1;
//        printf("%d\n", pos);
//    }
//
//
//    return 0;
//}
//
