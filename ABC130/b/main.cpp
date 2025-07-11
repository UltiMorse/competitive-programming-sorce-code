#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define rrep(i,n) for (int i = n - 1; i >= 0; --i)
#define endl '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> L(n);
    rep(i, n) cin >> L[i];

    int cnt = 0;
    int height = 0;
    rep(i,n+1) {
        if (height <= x) {
            ++cnt;
        }
        height += L[i];
    }
    cout << cnt << endl;
    return 0;
}
