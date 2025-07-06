#include <bits/stdc++.h>
using namespace std;

int bfs(int a, int b, int x, int y) {
    const int MAX = 201;
    vector<int> dist(MAX, INT_MAX);
    dist[a] = 0;
    queue<int> q;
    q.push(a);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur + 1 < MAX && dist[cur + 1] > dist[cur] + x) {
            dist[cur + 1] = dist[cur] + x;
            q.push(cur + 1);
        }

        int to = cur ^ 1;
        if (to < MAX && dist[to] > dist[cur] + y) {
            dist[to] = dist[cur] + y;
            q.push(to);
        }
    }

    return dist[b] == INT_MAX ? -1 : dist[b];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << bfs(a, b, x, y) << "\n";
    }
    return 0;
}
