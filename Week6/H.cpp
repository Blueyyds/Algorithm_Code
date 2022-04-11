//#include <iostream>
//#include <vector>
//#include <valarray>
//#include <algorithm>
//
//using namespace std;
//
//struct Point {
//    int x;
//    int y;
//};
//
//double dis(Point p1, Point p2) {
//    return sqrt((p2.y - p1.y) * (p2.y - p1.y) + (p2.x - p1.x) * (p2.x - p1.x));
//}
//
//bool sortByX(Point p1, Point p2) {
//    return p1.x < p2.x;
//}
//
//bool sortByY(Point p1, Point p2) {
//    return p1.y < p2.y;
//}
//
//pair<int, int> getMin(vector<Point> &v, int left, int right) {
//    if (right == left + 1)
//        return make_pair(left, right);
//    if (right == left + 2) {
//        double dis1 = dis(v[left], v[left + 1]);
//        double dis2 = dis(v[left], v[left + 2]);
//        double dis3 = dis(v[left + 1], v[left + 2]);
//        if (dis1 < dis2 && dis1 < dis3)
//            return make_pair(left, left + 1);
//        if (dis2 < dis1 && dis2 < dis3)
//            return make_pair(left, left + 2);
//        if (dis3 < dis2 && dis3 < dis1)
//            return make_pair(left + 1, left + 2);
//    }
//
//    int mid = left + ((right - left) >> 1);
//    auto left_min = getMin(v, left, mid);
//    auto right_min = getMin(v, mid + 1, right);
//    pair<int, int> d;
//    if (dis(v[left_min.first], v[left_min.second]) < dis(v[right_min.first], v[right_min.second]))
//        d = make_pair(left_min.first, left_min.second);
//    else
//        d = make_pair(right_min.first, right_min.second);
//
//    vector<Point> res;
//    res.clear();
//    for (int i = left; i <= right; ++i) {
//        if (fabs(v[i].x - v[mid].x) < dis(v[d.first], v[d.second])) {
//            res.push_back(v[i]);
//        }
//    }
//    sort(res.begin(), res.end(), sortByY);
//    for (int i = 0; i < res.size() - 1; ++i) {
//        for (int j = i + 1; j < res.size(); ++j) {
//            if (res[j].y - res[i].y >= dis(v[d.first], v[d.second])) {
//                break;
//            }
//            d = dis(v[i], v[j]) < dis(v[d.first], v[d.second]) ? make_pair(i, j) : d;
//        }
//    }
//
//    return d;
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//    vector<Point> points(n);
//    for (int i = 0; i < n; ++i) {
//        Point point;
//        scanf("%d %d", &point.x, &point.y);
//        points[i] = point;
//    }
//
//    sort(points.begin(), points.end(), sortByX);
//    auto pair = getMin(points, 0, n - 1);
//
//    cout << pair.first << ' ' << pair.second << endl;
//    return 0;
//}
