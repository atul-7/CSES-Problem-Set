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

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x >= y)
    {
        if (x % 2 == 0)
            cout << x * x - y + 1 << "\n";
        else
            cout << (x - 1) * (x - 1) + y << "\n";
    }
    else
    {
        if (y % 2 == 0)
            cout << (y - 1) * (y - 1) + x << "\n";
        else
            cout << y * y - x + 1 << "\n";
    }
}

int main()
{
    fast_io;
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}