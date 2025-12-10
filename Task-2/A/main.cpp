#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define vi   vector<int>
#define pii  pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T> ostream& operator<<(ostream&os, vector<T>&v){for(auto& i : v) os<<i<<' '; return os;}
template<typename T> istream& operator<<(istream&is, vector<T>&v){for(auto& i : v) is>>i; return is;}
void FastID(){ios_base::sync_with_stdio(false);cin.tie(nullptr);}
void UseFile(){ freopen("file.in","r",stdin);freopen("file.out","w",stdout);}
int MDD=1000000007;

void Prefix(){
    int n, q;
    cin >> n >> q;
    vi a(n);
 for (auto& i : a) cin >> i;
    vi pre(n);

    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int sum = pre[r] - (l > 0 ? pre[l - 1] : 0);
        cout << sum << endl;
    }
}

 main()
{
    FastID();
    int t = 1;
    while(t--) Prefix();
    return 0;
}

