#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i1 = 0, i2 = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ' || i == s.size() - 1) {
                if (i == s.size() - 1) {
                    i2++;
                }
                int mid = (i2 - i1) / 2;
                for (int j = 0; j < mid; ++j) {
                    int tmp = s[i1 + j];
                    s[i1 + j] = s[i2 - 1 - j];
                    s[i2 - 1 - j] = tmp;
                }
                i1 = i + 1, i2++;
            } else {
                i2++;
            }

        }
        return s;
    }
};

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(5);

    Solution solution;
    string s = solution.reverseWords("Let's take LeetCode contest");
    cout << s;

    return 0;
}


