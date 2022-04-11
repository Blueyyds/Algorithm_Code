//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <map>
//
//using namespace std;
//
//
//int main() {
//    int n;
//    cin >> n;
//    int data;
//    vector<int> v;
//
//    for (int i = 0; i < n; i++) {
//        cin >> data;
//        v.push_back(data);
//    }
//
//
//    int minNum = 99999;
//    int index1 = 0, index2 = 0;
//
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (abs(v[i] + v[j]) < minNum) {
//                minNum = abs(v[i] + v[j]);
//                index1 = i;
//                index2 = j;
//            } else {
//                if (abs(v[i] + v[j]) == minNum) {
//                    if (i < index1) {
//                        index1 = i;
//                        index2 = j;
//                    }
//                    if (i == index1 && j < index2) {
//                        index1 = i;
//                        index2 = j;
//                    }
//                }
//            }
//        }
//    }
//
//    cout << index1 + 1 << " " << index2 + 1 << endl;
//
//    return 0;
//}
