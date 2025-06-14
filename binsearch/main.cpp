#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)

void input_output()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("binsearch.in", "r", stdin);
    freopen("binsearch.out", "w", stdout);
}

int main()
{
    input_output();

    int n;
    cin >> n;

    int v[n] = {};
    FOR(i, 0, n)
        cin >> v[i];

    sort(v, v+n);

    int q;
    cin >> q;

    FOR(i, 0, q)
    {
        int t, x;
        cin >> t >> x;

        if(t == 1) {
            long it = lower_bound(v, v+n, x) - v;
            if(it == 0)
                cout << "-1\n";
            else
                cout << it << '\n';
        } else if(t == 2) {
            long indice_st = lower_bound(v, v+n, x) - v;
            long indice_dr = upper_bound(v, v+n, x) - v;
            if(indice_dr == indice_st)
                cout << "-1\n";
            else
                cout << abs(indice_dr - indice_st) << '\n';
        } else if(t == 3) {
            long it = upper_bound(v, v+n, x) - v;
            if(n == it)
                cout << "-1\n";
            else
                cout << abs(n - it) << '\n';
        } else if(t == 4) {
            long it = upper_bound(v, v+n, x) - v;
            if(it == 0)
                cout << "-1\n";
            else
                cout << it << '\n';
        } else {
            long it = lower_bound(v, v+n, x) - v;
            if(it == n)
                cout << "-1\n";
            else
                cout << n - it << '\n';
        }
    }
}
