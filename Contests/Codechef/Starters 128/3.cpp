#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, ops = 0;
        cin >> n;
        int nums[n];
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        sort(nums, nums + n);

        for (int i = 0; i < n; i++) {
            ops += abs(nums[i] - i);
        }

        cout << ops << endl;
    }

    return 0;
}


