#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int process(vector<int> w, vector<int> v, int index, int bag);


int maxValue(vector<int> w, vector<int> v, int bag) {
    return process(w, v, 0, bag);
}

int process(vector<int> w, vector<int> v, int index, int bag, int dp[][]) {
    if (bag < 0) {
        return -1;
    }
    if (index == w.size()) {
        return 0;
    }

    int p1 = process(w, v, index + 1, bag);
    int p2 = 0;
    int next = process(w, v, index + 1, bag - w[index]);
    if (next != -1) {
        p2 = v[index] + next;
    }

    return max(p1, p2);

}

void test(int arr[]) {
    arr[0] = 1;
}


int main() {
    vector<int> w({3, 2, 4, 7, 3, 1, 7});
    vector<int> v({5, 6, 3, 19, 12, 4, 2});
//    memset(dp, 0, sizeof(dp));
    int bag = 15;
//    cout << maxValue(w, v, bag) << endl;

    int arr[] = {2, 2};
    test(arr);
    cout << arr[0] << endl;

    return 0;
}
