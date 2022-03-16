//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    string data;
//    vector<string> v1;
//    for (int i = 0; i < n; ++i) {
//        cin >> data;
//        v1.push_back(data);
//    }
//    vector<string> v2;
//    for (int i = 0; i < n - 1; ++i) {
//        cin >> data;
//        v2.push_back(data);
//    }
//
//    vector<string> v3;
//    for (int i = 0; i < n - 1; ++i) {
//        v3.push_back(v1[i]);
//        v3.push_back(v2[i]);
//    }
//    v3.push_back(v1[n - 1]);
//
//    vector<string> res;
//    stack<string> stk;
//
//    for (int i = 0; i < v3.size(); ++i) {
//        if (v3[i] != "+" && v3[i] != "-" && v3[i] != "*"){
//            res.push_back(v3[i]);
//        } else {
//            if (stk.empty()) {
//                stk.push(v3[i]);
//            } else if (v3[i] == "+" || v3[i] == "-") {
//                while (!stk.empty()) {
//                    res.push_back(stk.top());
//                    stk.pop();
//                }
//                stk.push(v3[i]);
//            } else {
//                stk.push("*");
//            }
//        }
//    }
//
//    while (!stk.empty()) {
//        res.push_back(stk.top());
//        stk.pop();
//    }
//
//    stack<long long> stk1;
//    for (int i = 0; i < res.size(); ++i) {
//        if (res[i] != "+" && res[i] != "-" && res[i] != "*"){
//            stk1.push(stoi(res[i]));
//        } else {
//            long long b = stk1.top();
//            stk1.pop();
//            long long a = stk1.top();
//            stk1.pop();
//            if (res[i] == "*") {
//                stk1.push(a * b);
//            } else if (res[i] == "+") {
//                stk1.push(a + b);
//            } else if (res[i] == "-") {
//                stk1.push(a - b);
//            }
//        }
//    }
//    cout << stk1.top() << endl;
//
//
//    return 0;
//}
