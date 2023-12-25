#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int k, int n) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] > k) {
            r = mid - 1;
        } else if (arr[mid] < k) {
            l = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (k--) {
        int find;
        cin >> find;
        int binS = search(arr, find, n);
        if (binS == -1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}
