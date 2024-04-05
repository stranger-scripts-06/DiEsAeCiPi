#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        
        int happiness = 0, maximum = 0, minimum = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num >= l && num <= r) {
                happiness++;
            } else {
                happiness--;
            }
            maximum = max(maximum, happiness);
            minimum = min(minimum, happiness);
        }
        
        cout << maximum << " " << minimum << endl;
    }
    
    return 0;
}