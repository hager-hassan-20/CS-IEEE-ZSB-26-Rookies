#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define vi   vector<int>
#define pii  pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T> ostream& operator<<(ostream&os, vector<T>&v)
{
    for(auto& i : v) os<<i<<' ';
    return os;
}
template<typename T> istream& operator<<(istream&is, vector<T>&v)
{
    for(auto& i : v) is>>i;
    return is;
}
void FastID()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
void UseFile()
{
    freopen("file.in","r",stdin);
    freopen("file.out","w",stdout);
}
int MDD=1000000007;
int a[200005];
int b[200005];
void Karen()
{
    int n, k, q, l, r, x, y;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }


    for (int i = 1; i <= 200005; i++)
    {
        a[i] += a[i - 1];
    }


    for (int i = 0; i <= 200005; i++)
    {
        if(a[i]>=k)
        {
            b[i]=1;
        }
        else
        {
            b[i]=0;
        }
    }


    for (int i = 1; i <= 200005; i++)
    {
        b[i] += b[i - 1];
    }

    while (q--)
    {
        cin >> x >> y;
        cout << b[y] - b[x - 1] << endl;
    }




}

main()
{
    FastID();
    int t = 1;
    while(t--) Karen();

    return 0;
}
