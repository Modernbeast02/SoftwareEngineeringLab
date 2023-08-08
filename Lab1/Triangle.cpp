#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    if (*s.begin() <= 0)
    {
        cout << "Triangle Not Possible\n";
        return;
    }
    if (a + b <= c || b + c <= a && c + a <= b)
    {
        cout << "Triangle Not Possible\n";
        return;
    }
    if (s.size() == 1)
    {
        cout << "Triangle is Equilateral\n";
        return;
    }
    if (s.size() == 2)
    {
        cout << "Triangle is Isosceles\n";
        return;
    }
    cout << "Triangle is Scalene\n";
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
