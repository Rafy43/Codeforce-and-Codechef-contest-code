#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int h = sqrt(n);
        if (h * h == n) {
            // Pick any valid a and b such that a + b = h
            int a = h / 2;
            int b = h - a;
            cout << a << " " << b << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
