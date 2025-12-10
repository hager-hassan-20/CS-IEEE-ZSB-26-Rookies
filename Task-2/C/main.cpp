
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
    vi h(n+1,0);
	vi g(n+1,0);
	vi j(n+1,0);
	for (int i = 0; i < n; i++) {
		h[i + 1] = h[i];
		g[i + 1] = g[i];
		j[i + 1] = j[i];
        int type;
		cin >> type;
		if (type == 1){
            h[i + 1]++;
		}
		else if (type == 2) {
            g[i + 1]++;
        }
		else if (type == 3) {
            j[i + 1]++;
        }
	}


    while (q--) {
        int a,b;
        cin>>a>>b;
        cout << h[b] - h[a - 1] << ' '
		     << g[b] - g[a - 1] << ' '
		     << j[b] - j[a - 1] << endl;

    }
}

 main()
{
    FastID();
    int t = 1;
    while(t--) Prefix();
    return 0;
}
