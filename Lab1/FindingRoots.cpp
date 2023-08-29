#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define debug(...) 1;
#endif

ll findDiscriminant(ll a, ll b, ll c)
{
    return b * b - 4 * a * c;
}
void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    ll discriminant = findDiscriminant(a, b, c);
    double root1, root2;
    double d = sqrt(abs(discriminant));
    root1 = -b / 2 * a;
    if (discriminant < 0)
    {
        cout << "root1 is " << root1 << " + " << d / (2 * a) << "i" << endl;
        cout << "root2 is " << root1 << " - " << d / (2 * a) << "i" << endl;
    }
    else
    {
        cout << "root1 is " << root1 + d / 2 * a << endl;
        cout << "root2 is " << root1 - d / 2 * a << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
