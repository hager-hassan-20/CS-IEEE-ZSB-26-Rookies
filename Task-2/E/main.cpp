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

int gcd(int a, int b){
   if(a<0) a = -a;
    if(b<0) b = -b;
    if(a==0 && b==0) return 0;
    while(b){
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void gcdBlackboard(){
    int n;
    cin >> n;
    vi a(n);
 for (int i=0;i<n;i++){
    cin >> a[i];
 }
 vi f(n),b(n);
 f[0]=a[0];
 for(int i=1;i<n;i++){
    f[i]=gcd(a[i],f[i-1]);
 }
 b[n-1]=a[n-1];
 for(int i=n-2;i>=0;--i){
        b[i]=gcd(a[i],b[i+1]);
 }
 int final_ans=1;
 for(int i=0;i<n;i++){
    int ans, l=i-1, r=i+1, gcd_l, gcd_r;
    if(l<0){
        gcd_l=0;
        gcd_r=b[r];
    }
    else if(r>=n){
        gcd_l=f[l];
        gcd_r=0;
    }
    else{
        gcd_l=f[l];
        gcd_r=b[r];
    }
    if(gcd_l==0){
        ans=gcd_r;
    }
    else if(gcd_r==0){
        ans=gcd_l;
    }
    else{
        ans=gcd(gcd_l,gcd_r);
    }
    final_ans=max(final_ans,ans);

 }
 cout<<final_ans<<endl;

}

 main()
{
    FastID();
    int t = 1;
    while(t--) gcdBlackboard();
    return 0;
}
