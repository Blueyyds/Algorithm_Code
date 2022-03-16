#include<iostream>

using namespace std;

int main() {
    int N, M, i;
    cin >> N >> M;
    int *a = new int[N];
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }
    while (M--) {
        int b, low, high, mid, flag = 0;
        cin >> b;
        low = 0;
        high = N - 1;
        while (low <= high) {
            mid = low + ((high - low) >> 2);
            if (b > a[mid]) {
                low = mid + 1;
            } else if (b < a[mid]) {
                high = mid - 1;
            } else {
                cout << mid + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << low + 1 << endl;
        }


    }
    return 0;
}