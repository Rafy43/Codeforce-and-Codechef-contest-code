#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> doors(n);
        for(int i = 0; i < n; ++i) {
            cin >> doors[i];
        }

        bool usedButton = false;
        int i = 0;

        while(i < n) {
            if(doors[i] == 0) {
                i++;
            } else {
                if(usedButton) {
                    break;
                }
                usedButton = true;
                i += x;
            }
        }

        if(i >= n) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
