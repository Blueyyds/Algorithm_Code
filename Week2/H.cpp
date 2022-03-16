//#include <iostream>
//#include <valarray>
//#include <vector>
//
//using namespace std;
//
//
//int main() {
//    int arr[200];
//    for (int i = 0; i < 200; ++i) {
//        arr[i] = 0;
//    }
//
//    int n;
//    cin >> n;
//    int data;
//    vector<int>v;
//    while (n--) {
//        cin >> data;
//        v.push_back(data);
//    }
//
//    for (int i = 0; i < v.size(); ++i) {
//        ++arr[v[i] % 200];
//    }
//
//    int cnt = 0;
//    for (int i = 0; i < 200; ++i) {
//        if (arr[i] > 1) {
//            cnt+=(arr[i] * (arr[i] - 1) / 2);
//        }
//    }
//
//    cout << cnt << endl;
//
//    return 0;
//}
