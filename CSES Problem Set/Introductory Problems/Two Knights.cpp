//============================================================================
// Name        : lucifer
// Author      : atul.kohar(insta)
// Version     : dont give a shit
// Description : Hello World in cpp
//============================================================================
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read(x) \
    int x;      \
    cin >> x
using namespace std;

int main()
{
    fast_io;
    int n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll ans = i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2);
        cout << ans << "\n";
    }
}