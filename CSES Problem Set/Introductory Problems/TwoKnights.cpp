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
    ll n;
    cin >> n;
    ll tot = n * (n + 1) / 2;
    if (tot % 2)
    {
        cout << "NO\n";
        return 0;
    }
    tot /= 2;
    vector<int> a1, a2;
    for (ll i = n, sum = 0; i > 0; i--)
    {
        if (sum + i <= tot)
        {
            sum += i;
            a1.push_back(i);
        }
        else
        {
            a2.push_back(i);
        }
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    cout << "YES\n";
    cout << a1.size() << "\n";
    for (int x : a1)
        cout << x << " ";
    cout << "\n";
    cout << a2.size() << "\n";
    for (int x : a2)
        cout << x << " ";
    cout << "\n";
}