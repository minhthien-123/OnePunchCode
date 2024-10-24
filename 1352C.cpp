#include <bits/stdc++.h>
#define task "codeforces"
#define int long long
#define ii std::pair<int, int>
#define fi first
#define se second
#define pb push_back
#define ins insert

signed main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);

    if (std::fopen(task".inp", "r")){
        std::freopen(task".inp", "r", stdin);
        std::freopen(task".out", "w", stdout);
    }
// ngu qua
    int t;
    std::cin >> t;
    while (t--){
        int n, k;
        std::cin >> n >> k;
        int l = 1, r = 2e9, ans;
        while (l <= r){
            int m = r - (r - l) / 2;
            if (m - (m / n) >= k){
                if (m % n != 0){
                    ans = m;
                }
                r = m - 1;
            }else{
                l = m + 1;
            }
        }

        std::cout << ans << "\n";
    }

    return 0;
}

