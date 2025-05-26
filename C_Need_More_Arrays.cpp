#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        int ans = 0;
        int last = -2;
        for (int i = 0; i < n; ++i) {
            if (a[i] > last + 1) {
                ans++;        
                last = a[i]; 
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
