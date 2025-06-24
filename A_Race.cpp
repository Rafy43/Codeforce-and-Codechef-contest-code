// 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, x, y;
        cin >> a >> x >> y;
        bool can_win = false;

        for(int b = 1; b <= 100; ++b) {
            if(b == a) continue; 

            int d1_b = abs(b - x);
            int d2_b = abs(b - y);
            int d1_a = abs(a - x);
            int d2_a = abs(a - y);

            if(d1_b < d1_a && d2_b < d2_a) {
                can_win = true;
                break;
            }
        }

        cout << (can_win ? "YES" : "NO") << endl;
    }
}
