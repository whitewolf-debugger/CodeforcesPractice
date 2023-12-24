#include <bits/stdc++.h>
using namespace std;

bool LRU(vector<pair<int , int>> &points, int n) {
    for (int i = 0; i < n; i++) {
        int x = points[i].first;
        int y = points[i].second;
        if(y < 0) return false;
    }
    return true;
}

bool RUD(vector<pair<int , int>> &points, int n) {
    for (int i = 0; i < n; i++) {
        int x = points[i].first;
        int y = points[i].second;
        if(x < 0) return false;
    }
    return true;
}

bool LUD(vector<pair<int , int>> &points, int n) {
    for (int i = 0; i < n; i++) {
        int x = points[i].first;
        int y = points[i].second;
        if(x > 0) return false;
    }
    return true;
}

bool LRD(vector<pair<int , int>> &points, int n) {
    for (int i = 0; i < n; i++) {
        int x = points[i].first;
        int y = points[i].second;
        if(y > 0) return false;
    }
    return true;
}

bool possible(int n, vector<pair<int, int>> &points) {
    for (int i = 0; i < n; i++) {
        if (LRU(points,n) || RUD(points,n) || LUD(points,n) || LRD(points,n)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            points.push_back({x, y});
        }

        bool ans = possible(n, points);
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
