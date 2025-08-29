#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define pb push_back
#define rep(i,n) for(i=0;i<n;++i)
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool found = false;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                cout << "YES\n";
                for (int j = 0; j < n; ++j) {
                    if (j == i) cout << "2 ";
                    else cout << "1 ";
                }
                cout << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}