//#include<cstdio>
//
//const int maxn = 1e5 + 10;
//int a[maxn], mergeTemp[maxn], n;
//int cnt = 0;
//
//void Merge(int left, int mid, int right) {
//    int p1 = left, p2 = mid + 1;
//    int i = left;
//    while (p1 <= mid && p2 <= right) {
//        if (a[p1] <= a[p2]) {
//            cnt += (p2 - 1 - mid);
//            mergeTemp[i++] = a[p1++];
//        } else {
//            mergeTemp[i++] = a[p2++];
//        }
//
//    }
//
//    while (p1 <= mid) {
//        cnt += (right - mid);
//        mergeTemp[i++] = a[p1++];
//    }
//    while (p2 <= right) {
//        mergeTemp[i++] = a[p2++];
//    }
//
//    for (int j = left; j <= right; j++) {
//        a[j] = mergeTemp[j];
//    }
//}
//
//void MergeSort(int left, int right) {
//    //T0D0:统计数组a上[1eft,right).区间的逆序对个数
//    int mid = left + ((right - left) >> 1);
//    if (left == right)
//        return;
//
//    MergeSort(left, mid);
//    MergeSort(mid + 1, right);
//    Merge(left, mid, right);
//}
//
//
//int main() {
//    while (scanf("%d", &n) != EOF) {
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        MergeSort(0, n - 1);
//        printf("%d\n", cnt);
//    }
//
//    return 0;
//}
