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
    vector<pair<string,string>> a(n);
    rep(i, n) {
        cin >> a[i].first >> a[i].second;
    }
    rep(i,n) {
        for (int j = 0; j < i; ++j)
            if ((a[i].first == a[j].first) && (a[i].second == a[j].second)) {
                cout << "Yes" << endl;
                return 0;
            }
    }
    cout << "No" << endl;
}
