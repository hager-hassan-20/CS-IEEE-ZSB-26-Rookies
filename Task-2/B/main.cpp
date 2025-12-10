
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
    vi a(n+1);
 for (int i = 1; i <= n; i++) {
    cin >> a[i];
 }
    vi pre(n+1);

    pre[0] = 0;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        int sum = pre[n]-(pre[r]-pre[l-1])+((r-l+1)*k);
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}

 main()
{
    FastID();
    int t ;
    cin>>t;
    while(t--) Prefix();
    return 0;
}
