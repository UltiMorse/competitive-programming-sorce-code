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

    int n; cin>>n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int k; cin>>k;

    int cnt = 0;
    rep(i,n) {
        if (a[i] >= k) ++cnt;
    }
    cout << cnt << endl;
}
