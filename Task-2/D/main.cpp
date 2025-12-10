
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
    int n;
    cin >> n;
    vi a(n+1);
    vi b(n+1);
    vi pre(n+1,0);

 for (int i=1;i<=n;i++){
    cin >> a[i];
    b[i]=a[i];
    pre[i]=pre[i-1]+a[i];
 }
 sort(b.begin(),b.end());

    vi preS(n+1,0);
    for (int i=1;i<=n;i++){
    preS[i]=preS[i-1]+b[i];
 }


    int q;
    cin>>q;
    while (q--) {
        int type ,l, r;
        cin >> type >> l >> r;
        if(type==1){
            cout<<pre[r]-pre[l-1]<<endl;
        }else{
            cout<<preS[r]-preS[l-1]<<endl;
        }

    }
}

 main()
{
    FastID();
    int t = 1;
    while(t--) Prefix();
    return 0;
}
