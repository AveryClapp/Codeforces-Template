#ifdef ONLINE_JUDGE
    #include <bits/stdc++.h>
#else
    #include <iostream>
    #include <vector>
    #include <string>
    #include <algorithm>
    // Add more headers as needed
#endif

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout); // Optional
    #endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
